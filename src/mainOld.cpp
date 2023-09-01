#include <QtWidgets>
#include <memory>

class Widget : public QWidget {
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr) : QWidget{parent}, counter{0} {
        QVBoxLayout *layout = new QVBoxLayout(this);
        counterLabel = new QLabel(QString("Counter: %1").arg(counter), this);
        QPushButton *incrementButton = new QPushButton("Increment", this);

        layout->addWidget(counterLabel);
        layout->addWidget(incrementButton);

        connect(incrementButton, &QPushButton::clicked, this, &Widget::incrementCounter);
    }

public slots:
    void incrementCounter() {
        counter++;
        counterLabel->setText(QString("Counter: %1").arg(counter));
    }

private:
    int counter;
    QLabel* counterLabel;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Widget widget;
    widget.show();

    return app.exec();
}
#include "main.moc"