#include <QApplication>
#include "views/mainWindow.h"
#include <QFile>
#include <QString>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    // Q_INIT_RESOURCE(styles);
    
    // QFile file(":/styles.css");
    // file.open(QFile::ReadOnly);
    // QString styleSheet = QLatin1String(file.readAll());
    // app.setStyleSheet(styleSheet);

    MainWindow window;
    window.show();

    return app.exec();
}