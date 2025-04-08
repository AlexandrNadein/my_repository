#include "image.h"
#include <QVBoxLayout>

ImageWindow::ImageWindow(const QString &imagePath, QWidget *parent)
    : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *imageLabel = new QLabel(this);
    QPixmap pixmap(imagePath);

    imageLabel->setPixmap(pixmap.scaled(QSize(1920, 1080), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    imageLabel->setAlignment(Qt::AlignCenter);

    layout->addWidget(imageLabel);
    setLayout(layout);

    setWindowState(Qt::WindowFullScreen);
}

void ImageWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        close();
    }
}
