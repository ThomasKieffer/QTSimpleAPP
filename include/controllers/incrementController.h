#ifndef INCREMENTCONTROLLER_H
#define INCREMENTCONTROLLER_H

#include <QWidget>
class IncrementView;
class IncrementModel;


class IncrementController : public QWidget{
    Q_OBJECT;

public:
    explicit IncrementController(QWidget *parent = nullptr);
    void show();

private slots:
    void handleIncrementClicked();
    void handleCounterChanged(int newCounter);

private:
    IncrementView *view = nullptr;
    IncrementModel *model = nullptr;

};


#endif