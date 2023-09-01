#ifndef INCREMENTMODEL_H
#define INCREMENTMODEL_H

#include <QObject>

class IncrementModel : public QObject {
    Q_OBJECT

public:
    explicit IncrementModel(QObject *parent = nullptr);

    int getCounter() const;
    void incrementCounter();

signals:
    void counterChanged(int newCounter);

private:
    int counter;
};

#endif