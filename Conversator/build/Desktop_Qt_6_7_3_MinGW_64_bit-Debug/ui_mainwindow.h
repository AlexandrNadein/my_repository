/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLineEdit *initialNumb;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QPushButton *nopass;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QPushButton *clearButton;
    QPushButton *convertButton;
    QPushButton *copyButton;
    QPushButton *swapButton;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLineEdit *resultNumb;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pass;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(668, 446);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777212, 16777215));
        QPalette palette;
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 255, 255, 255));
        gradient.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(255, 255, 255, 255));
        gradient1.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient1.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient1.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient1.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient1.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 255, 255, 255));
        gradient2.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient2.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient2.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient2.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient2.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(255, 255, 255, 255));
        gradient3.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient3.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient3.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient3.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient3.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(255, 255, 255, 255));
        gradient4.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient4.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient4.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient4.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient4.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(255, 255, 255, 255));
        gradient5.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient5.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient5.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient5.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient5.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(255, 255, 255, 255));
        gradient6.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient6.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient6.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient6.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient6.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(255, 255, 255, 255));
        gradient7.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient7.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient7.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient7.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient7.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(255, 255, 255, 255));
        gradient8.setColorAt(0.339795, QColor(255, 255, 255, 255));
        gradient8.setColorAt(0.339799, QColor(0, 0, 255, 255));
        gradient8.setColorAt(0.662444, QColor(0, 0, 255, 255));
        gradient8.setColorAt(0.662469, QColor(255, 0, 0, 255));
        gradient8.setColorAt(1, QColor(255, 0, 0, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        MainWindow->setPalette(palette);
        QFont font;
        font.setHintingPreference(QFont::PreferDefaultHinting);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, \n"
"    stop:0 rgba(255, 255, 255, 255), \n"
"    stop:0.339795 rgba(255, 255, 255, 255), \n"
"    stop:0.339799 rgba(0, 0, 255, 255), \n"
"    stop:0.662444 rgba(0, 0, 255, 255), \n"
"    stop:0.662469 rgba(255, 0, 0, 255), \n"
"    stop:1 rgba(255, 0, 0, 255));\n"
""));
        MainWindow->setIconSize(QSize(1000, 1000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        initialNumb = new QLineEdit(centralwidget);
        initialNumb->setObjectName("initialNumb");
        initialNumb->setEnabled(true);
        initialNumb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
""));

        verticalLayout->addWidget(initialNumb);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(comboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        nopass = new QPushButton(centralwidget);
        nopass->setObjectName("nopass");
        nopass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(nopass);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        clearButton->setIcon(icon);

        verticalLayout_3->addWidget(clearButton);

        convertButton = new QPushButton(centralwidget);
        convertButton->setObjectName("convertButton");
        convertButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSend));
        convertButton->setIcon(icon1);

        verticalLayout_3->addWidget(convertButton);

        copyButton = new QPushButton(centralwidget);
        copyButton->setObjectName("copyButton");
        copyButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        copyButton->setIcon(icon2);

        verticalLayout_3->addWidget(copyButton);

        swapButton = new QPushButton(centralwidget);
        swapButton->setObjectName("swapButton");
        swapButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(swapButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

        verticalLayout_2->addWidget(label_2);

        resultNumb = new QLineEdit(centralwidget);
        resultNumb->setObjectName("resultNumb");
        resultNumb->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(resultNumb);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setEnabled(true);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setStyleStrategy(QFont::PreferAntialias);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        comboBox_2->setFont(font2);
        comboBox_2->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        comboBox_2->setIconSize(QSize(16, 16));

        verticalLayout_2->addWidget(comboBox_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        pass = new QPushButton(centralwidget);
        pass->setObjectName("pass");
        pass->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pass->sizePolicy().hasHeightForWidth());
        pass->setSizePolicy(sizePolicy1);
        pass->setMinimumSize(QSize(0, 0));
        pass->setMaximumSize(QSize(16777215, 16777215));
        pass->setSizeIncrement(QSize(0, -1));
        pass->setBaseSize(QSize(0, -1));
        pass->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pass->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pass->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        pass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pass->setIconSize(QSize(2000, 2000));
#if QT_CONFIG(shortcut)
        pass->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)

        verticalLayout_2->addWidget(pass);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 668, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\230\321\201\321\205\320\276\320\264\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276</p></body></html>", nullptr));
        nopass->setText(QCoreApplication::translate("MainWindow", "\320\275\320\265 \321\201\320\264\320\260\320\273", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        convertButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214", nullptr));
        copyButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        swapButton->setText(QCoreApplication::translate("MainWindow", "<-->", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202</p></body></html>", nullptr));
        pass->setText(QCoreApplication::translate("MainWindow", "\321\201\320\264\320\260\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
