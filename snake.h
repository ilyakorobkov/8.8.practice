#ifndef SNAKE_H
#define SNAKE_H

#include <QWidget>
#include <QKeyEvent>

class Snake : public QWidget {
    Q_OBJECT

public:
    Snake(QWidget *parent = nullptr);
    ~Snake();

protected:
    void paintEvent(QPaintEvent *event) override;
    void timerEvent(QTimerEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void loadImages();
    void initGame();
    void locateApple();
    void move();
    void checkCollision();

private:
    QImage dot;
    QImage head;
    QImage apple;

    static const int B_WIDTH = 300;
    static const int B_HEIGHT = 300;
    static const int DOT_SIZE = 10;
    static const int ALL_DOTS = 900;
    static const int RAND_POS = 29;
    static const int DELAY = 140;

    int timerId;
    int dots;
    int apple_x;
    int apple_y;

    int x[ALL_DOTS];
    int y[ALL_DOTS];

    bool leftDirection;
    bool rightDirection;
    bool upDirection;
    bool downDirection;
    bool inGame;
};

#endif // SNAKE_H
