#include "mainwindow.h"
#include <QFileDialog>
#include "./ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::cout << "working" << std::endl;
    ui->outputFolderLabel->setText(QDir::currentPath());
}

MainWindow::~MainWindow()
{
    delete ui;
}

const QString currentDir = QDir::currentPath();
std::string outDir;
std::string inputFile;
std::string outputExtension;
std::string outName;

void MainWindow::on_inputFileButton_clicked()
{
    inputFile = QFileDialog::getOpenFileName(this, tr("Choose a file")).toStdString();
    ui->inputFileLabel->setText(QString::fromStdString(inputFile));
    std::cout << inputFile << std::endl;
}

void MainWindow::on_outputFolderButton_clicked()
{
    outDir = QFileDialog::getExistingDirectory(this, tr("Choose a folder")).toStdString();
    if (outDir == "")
        outDir = currentDir.toStdString();
    ui->outputFolderLabel->setText(QString::fromStdString(outDir));
}

void MainWindow::on_startButton_clicked()
{
    outName = ui->outputNameLineEdit->text().toStdString();
    outputExtension = ui->outputExtensionLineEdit->text().toStdString();
    std::string cmd = ("ffmpeg -i " + inputFile + " " + outDir + "/" + outName + "."
                       + outputExtension);

    FILE *stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    stream = popen(cmd.c_str(), "r");

    if (stream) {
        while (!feof(stream)) {
            if (fgets(buffer, max_buffer, stream) != NULL) {
                ui->uiShell->append(buffer);
            }
        }
        pclose(stream);
    }
}
