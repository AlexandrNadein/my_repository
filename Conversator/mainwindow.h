#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QClipboard>
#include <QMessageBox>

#include "ui_mainwindow.h"
#include "entrypoint.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Context context;
    void pass();
    void noPass();
    void convertButton();
    void updateInterface(Context* context);
    void clearButton();
    void updateValue(Context* context);
    void swapButton();
    void updateAll(AppParams* params);
    void copyToClipboard();
    void errorValidation();
    void errorLength();
};
#endif // MAINWINDOW_H
