#include "mainwindow.h"

#include <QApplication>

 //https://doc.qt.io/qt-5/qtwidgets-widgets-scribble-example.html ta z tohto

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
