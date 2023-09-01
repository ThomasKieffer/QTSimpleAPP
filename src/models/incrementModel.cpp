#include "models/incrementModel.h"

IncrementModel::IncrementModel(QObject *parent) : QObject{parent}, counter{0}{}

int IncrementModel::getCounter() const{
    return counter;
}

void IncrementModel::incrementCounter(){
    counter++;
    emit counterChanged(counter);
}