/********************************************************************************
** Form generated from reading UI file 'imageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QAction *openAct;
    QAction *printAct;
    QAction *exitAct;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *Label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QStringLiteral("ImageViewer"));
        ImageViewer->resize(400, 300);
        openAct = new QAction(ImageViewer);
        openAct->setObjectName(QStringLiteral("openAct"));
        printAct = new QAction(ImageViewer);
        printAct->setObjectName(QStringLiteral("printAct"));
        printAct->setEnabled(false);
        exitAct = new QAction(ImageViewer);
        exitAct->setObjectName(QStringLiteral("exitAct"));
        centralWidget = new QWidget(ImageViewer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 10, 361, 231));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 229));
        Label = new QLabel(scrollAreaWidgetContents);
        Label->setObjectName(QStringLiteral("Label"));
        Label->setGeometry(QRect(10, 20, 341, 211));
        scrollArea->setWidget(scrollAreaWidgetContents);
        ImageViewer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageViewer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        ImageViewer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageViewer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageViewer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageViewer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageViewer->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(openAct);
        menuFile->addAction(printAct);
        menuFile->addAction(exitAct);

        retranslateUi(ImageViewer);

        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer)
    {
        ImageViewer->setWindowTitle(QApplication::translate("ImageViewer", "ImageViewer", 0));
        openAct->setText(QApplication::translate("ImageViewer", "&Open", 0));
        openAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+O", 0));
        printAct->setText(QApplication::translate("ImageViewer", "&Print", 0));
        printAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+P", 0));
        exitAct->setText(QApplication::translate("ImageViewer", "E&xit", 0));
#ifndef QT_NO_TOOLTIP
        exitAct->setToolTip(QApplication::translate("ImageViewer", "Exit", 0));
#endif // QT_NO_TOOLTIP
        exitAct->setShortcut(QApplication::translate("ImageViewer", "Ctrl+Q", 0));
        Label->setText(QApplication::translate("ImageViewer", "ImageLabel", 0));
        menuFile->setTitle(QApplication::translate("ImageViewer", "&File", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
