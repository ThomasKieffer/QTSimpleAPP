#ifndef INCREMENTVIEW_H
#define INCREMENTVIEW_H

#include <QWidget>
class QPushButton;
class QLabel;

class IncrementView : public QWidget {
    Q_OBJECT

public:
    explicit IncrementView(QWidget *parent = nullptr);

    void setCounter(int value);


signals:
    void incrementClicked();

private:
    QPushButton *incrementButton;
    QLabel* counterLabel;
};

#endif