#include "scribblearea.h"
#include <iostream>
#include <string>

ScribbleArea::ScribbleArea(QWidget *parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);
	setMouseTracking(true);
}


void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
		mousePos = event->pos();
		int enlargement = 100;
		int size = 129+enlargement;
		QRect r = QRect(mousePos.x()-size/2,mousePos.y()-size/2,size,size);
		update(r);
}

void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
	
	int size = 129;
	QRect arcRect = QRect(mousePos.x()-size/2,mousePos.y()-size/2,size,size);
	
	painter.drawArc(arcRect,0,16*360);
	painter.drawRect(event->rect().adjusted(10,10,-10,-10));
}


