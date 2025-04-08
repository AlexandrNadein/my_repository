#ifndef IMAGE_H
#define IMAGE_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QKeyEvent>

class ImageWindow : public QWidget {
    Q_OBJECT

public:
    explicit ImageWindow(const QString &imagePath, QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // IMAGE_H
