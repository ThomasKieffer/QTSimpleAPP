#include "views/incrementView.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

IncrementView::IncrementView(QWidget* parent) : QWidget{parent}{
    QVBoxLayout *layout = new QVBoxLayout(this);
    counterLabel = new QLabel("Counter : 0", this);
    incrementButton = new QPushButton("Increment", this);


    layout->addWidget(counterLabel);
    layout->addWidget(incrementButton);

    // setLayout(layout);

    connect(incrementButton, &QPushButton::clicked, this, &IncrementView::incrementClicked);
}

void IncrementView::setCounter(int value){
    counterLabel->setText(QString("Counter: %1").arg(value));
}
