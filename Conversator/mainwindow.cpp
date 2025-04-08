// вызываем функции

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QClipboard>
#include <QMessageBox>
#include "entrypoint.h"
#include <qdebug.h>
#include "image.h"



MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->resultNumb->setEnabled(false); // Отключить lineEdit_2
    ui->comboBox->addItem("Двоичная СС", BIN);
    ui->comboBox->addItem("Восьмеричная СС", OCT);
    ui->comboBox->addItem("Десятичная СС", DEC);
    ui->comboBox_2->addItem("Двоичная СС", BIN);
    ui->comboBox_2->addItem("Восьмеричная СС", OCT);
    ui->comboBox_2->addItem("Десятичная СС", DEC);
    connect(ui->convertButton, &QPushButton::clicked, this, &MainWindow::convertButton);
    connect(ui->copyButton, &QPushButton::clicked, this, &MainWindow::copyToClipboard);
    connect(ui->clearButton, &QPushButton::clicked, this, &MainWindow::clearButton);
    connect(ui->swapButton, &QPushButton::clicked, this, &MainWindow::swapButton);
    connect(ui->nopass, &QPushButton::clicked, this, &MainWindow::noPass);
    connect(ui->pass, &QPushButton::clicked, this, &MainWindow::pass);
}

//СС для перевода 2, 8, 10
//Ошибки:
//Диапазон 4-байтового знакового целого числа составляет от –2147483648 до +2147483647
//Ввод недопустимой комбинации символов в поле для ввода для выбранной системы счисления
//(например, для двоичной системы счисления будет только допустим ввод следующий символов 0 и 1)


void MainWindow::pass() {
    //ui->nopass->setEnabled(false);
    ImageWindow *imageWindow = new ImageWindow(":/img/img/сигма.jpg");
    imageWindow->show();
}

void MainWindow::noPass() {
    //ui->pass->setEnabled(false);
    ImageWindow *imageWindow = new ImageWindow(":/img/img/грустный.jpg");
    imageWindow->show();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::convertButton(){
    AppParams params;
    std::string str = ui->initialNumb->text().toStdString();
    const char* cstr = str.c_str();
    params.initial = cstr;
    context.boxFrom = ui->comboBox->currentIndex();
    context.boxTo = ui->comboBox_2->currentIndex();
    doOperation(VALIDATION, &context, &params);
    doOperation(CONVERT, &context, &params);
    updateInterface(&context);
}

void MainWindow::updateInterface(Context* context) {
    switch (context->status) {
    case CORRECT:
        ui->resultNumb->setText(context->newValue);
        break;
    case INCORRECT_LENGTH:
        errorLength();
        break;
    case INCORRECT_VALUE:
        errorValidation();
        break;
    case NO_INPUT:
        break;
    }
}

void MainWindow::clearButton()
{
    AppParams params;
    doOperation(CLEAR, &context, &params);
    updateValue(&context);
}

void MainWindow:: updateValue(Context* context){
    ui->resultNumb->setText(QString(context->newValue));
}

void MainWindow::swapButton() {
    AppParams params;
    std::string str = ui->initialNumb->text().toStdString();
    params.initial = str.c_str();
    std::string str2 = ui->resultNumb->text().toStdString();
    context.newValue = str2.c_str();
    context.boxFrom = ui->comboBox->currentData().toInt();
    context.boxTo = ui->comboBox_2->currentData().toInt();
    doOperation(SWAP, &context, &params);
    updateAll(&params);
}

void MainWindow::updateAll(AppParams* params) {
    ui->initialNumb->setText(QString::fromStdString(params->initial));
    ui->resultNumb->setText(QString::fromStdString(context.newValue));
    ui->comboBox->setCurrentIndex(ui->comboBox->findData(context.boxFrom));
    ui->comboBox_2->setCurrentIndex(ui->comboBox_2->findData(context.boxTo));
}

void MainWindow::copyToClipboard(){
    QClipboard* clipboard = QGuiApplication::clipboard();
    clipboard->setText(ui->resultNumb->text());
}

void MainWindow::errorValidation() {
    QMessageBox msgBox(this);
    msgBox.setWindowTitle("Ошибка");
    msgBox.setText("Введите число корректной системы счисления");
    msgBox.setStyleSheet("QLabel { color: black; background-color: white; }");
    msgBox.addButton(QMessageBox::Ok);
    msgBox.exec();
}

void MainWindow::errorLength() {
    QMessageBox msgBox(this);
    msgBox.setWindowTitle("Ошибка");
    msgBox.setText("Число выходит за диапазон допустимых значений");
    msgBox.setStyleSheet("QLabel { color: black; background-color: white; }");
    msgBox.addButton(QMessageBox::Ok);
    msgBox.exec();
}
