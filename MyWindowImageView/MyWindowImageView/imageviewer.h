#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include <QLabel>
#include <QScrollArea>
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>

namespace Ui {
class ImageViewer;
}

class ImageViewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageViewer(QWidget *parent = 0);
    ~ImageViewer();

private slots:
    void open();

private:
    Ui::ImageViewer *ui;
    QLabel *imageLabel;
    QScrollArea *scrollArea;

    QAction *openAct;
    QAction *printAct;
    QAction *exitAct;

    double scaleFactor;



};

#endif // IMAGEVIEWER_H
