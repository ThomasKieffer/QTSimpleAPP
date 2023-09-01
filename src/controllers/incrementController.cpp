#include "controllers/incrementController.h"
#include "models/incrementModel.h"
#include "views/incrementView.h"

IncrementController::IncrementController(QWidget * parent) : QWidget{parent}, model{new IncrementModel(this)}, view{new IncrementView(this)} {
    connect(model, &IncrementModel::counterChanged, this, &IncrementController::handleCounterChanged);
    connect(view, &IncrementView::incrementClicked, this, &IncrementController::handleIncrementClicked);
}

void IncrementController::show(){
    view->show();
}

void IncrementController::handleIncrementClicked(){
    model->incrementCounter();
}

void IncrementController::handleCounterChanged(int newCounter){
    view->setCounter(newCounter);
}