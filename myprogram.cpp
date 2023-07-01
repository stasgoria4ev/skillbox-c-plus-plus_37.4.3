#include <QApplication>
//#include <QPushButton>
#include "tvRemote.h"
#include "./ui_tvRemote.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    TvRemoteMainWindow window(nullptr);
    Ui::MainWindow tvRemote;
    tvRemote.setupUi(&window);
    window.label_2 = tvRemote.label_2;
    window.label = tvRemote.label;
    window.resize(240, 680);
    window.show();
    return QApplication::exec();
}
