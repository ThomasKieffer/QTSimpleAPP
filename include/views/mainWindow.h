#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include "controllers/incrementController.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr) : QMainWindow(parent), controller{new IncrementController(this)} {
        setCentralWidget(controller);
        controller->show();
    }

private:
    IncrementController *controller = nullptr;
};

#endif
