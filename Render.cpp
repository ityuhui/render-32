/*
 * Render.cpp
 *
 *  Created on: 2016年4月17日
 *      Author: yuhui
 */
#include <GL/freeglut.h>
#include <GL/gl.h>
#include "Render.h"

namespace MyOGL {

Rect Render::s_mWindow(100,100,800,800);
Color Render::s_mFColor(0.0,0.0,0.0,0.0) ;
Color Render::s_mBkgColor(1.0,1.0,1.0,0.0) ;
std::vector<Point2D> Render::s_mOutletPoints1 = {
		{0, mainBedDep+mainToiDep+ChildRoomDep},
		{0, mainBedDep+mainToiDep},
		{0-mainToiLeft,mainBedDep+mainToiDep},
		{0-mainToiLeft,mainBedDep},
		{0,mainBedDep},
		{0, 0},
		{mainBedBay, 0},
		{mainBedBay+livingBay, 0},
		{mainBedBay+livingBay, 6.4},
		{mainBedBay+livingBay+washingBay, 6.4},
		{mainBedBay+livingBay+washingBay, 6.4+washingDep },
		{mainBedBay+livingBay+washingBay, 6.4+washingDep+kitchenDep },
		{mainBedBay+livingBay+washingBay-kitchenBay, 6.4+washingDep+kitchenDep },
		{mainBedBay+livingBay+washingBay-kitchenBay, 6.4+washingDep+kitchenDep+outdoorDep },
		{mainBedBay+livingBay+washingBay-kitchenBay-outdoorBay, 6.4+washingDep+kitchenDep+outdoorDep },
};

/*次卧的外轮廓*/
std::vector<Point2D> Render::s_mOutletPoints2 = {
		{3.38,4.6},
		{0,4.6},
		{0,0},
		{2.74,0}
};

std::vector<Point2D> Render::s_mYangtai = {
		{0,0},
		{0,balconyDep},
		{balconyBay,balconyDep}
};

std::vector<Point2D> Render::s_mKitchen = {
		{0,0},
		{kitchenBay,0},
		{kitchenBay, 0 - kitchenDep - washingDep },
		{kitchenBay-washingBay, 0 - kitchenDep - washingDep },
		{kitchenBay-washingBay, 0 - kitchenDep },
		{0,0 - kitchenDep},
		{0,0}
};

std::vector<Point2D> Render::s_mKeting = {
	{0,0},
	{livingBay,0},
	{livingBay,livingDep},
	{0,livingDep},
	{0,0}
};

std::vector<Point2D> Render::s_mMainBed = {
	{0,0},
	{mainBedBay,0},
	{mainBedBay,mainBedDep},
	{0,mainBedDep},
	{0,0}
};

std::vector<Point2D> Render::s_mMainToi = {
	{0,0},
	{mainToiBay,0},
	{mainToiBay,mainToiDep},
	{0,mainToiDep},
	{0,0}
};

std::vector<Point2D> Render::s_mChildRoom = {
	{0,0},
	{ChildRoomBay,0},
	{ChildRoomBay,ChildRoomDep},
	{0,ChildRoomDep},
	{0,0}
};


Render::Render() {
}

Render::~Render() {
}

Rect
Render::getWindow() {
	return s_mWindow;
}

void
Render::renderInit() {
	glClearColor(s_mBkgColor.R(),s_mBkgColor.G(),s_mBkgColor.B(),s_mBkgColor.A());
	glShadeModel(GL_FLAT);
}

void
Render::renderReshape(int w,int h) {
	glViewport(0,0,(GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-5.0, 15.0, -2.0, 18.0);
}

void
Render::renderDisplay() {
	rBackground();
	rFront();

}

void
Render::rBackground() {
	glClear(GL_COLOR_BUFFER_BIT);
}

void
Render::rFront() {
	glColor3f(s_mFColor.R(), s_mFColor.G(), s_mFColor.B());
	rOutlet();
	rRooms();
	glFlush();
}


void
drawStrip(std::vector<Point2D> &points) {
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		//glBegin(GL_POLYGON);
	glBegin(GL_LINE_STRIP);
	for(auto iter = points.begin(); iter!=points.end(); iter++){
		glVertex2f(static_cast<GLfloat>(iter->X()),static_cast<GLfloat>(iter->Y()));
	}
	glEnd();
}

void
Render::rOutlet() {
	rOutlet1();
	//rOutlet2();
}

void
Render::rOutlet1() {
	drawStrip(s_mOutletPoints1);
}

void
Render::rOutlet2() {
	glPushMatrix();
	glTranslatef(-2.4f,10.72f,0.0f);
	glRotatef(-30,0.0f,0.0f,1.0f);
	drawStrip(s_mOutletPoints2);
	glPopMatrix();
}


void
Render::rRooms() {
	rYangtai();
	rKitchen();
	rKeting();
	rMainBed();
	rMainToi();
	rChildRoom();
}

void
Render::rChildRoom() {
	rRoom(0.0f,mainBedDep+mainToiDep,s_mChildRoom);
}

void
Render::rRoom(float x, float y, std::vector<Point2D> &v) {
	glPushMatrix();
	glTranslatef(x,y,0.0f);
	drawStrip(v);
	glPopMatrix();
}

void
Render::rMainToi() {
	glPushMatrix();
	glTranslatef(0-mainToiLeft,mainBedDep,0.0f);
	drawStrip(s_mMainToi);
	glPopMatrix();
}


void
Render::rMainBed() {
	glPushMatrix();
	glTranslatef(0.0f,0.0f,0.0f);
	drawStrip(s_mMainBed);
	glPopMatrix();
}

void
Render::rKeting() {
	glPushMatrix();
	glTranslatef(mainBedBay,balconyDep,0.0f);
	drawStrip(s_mKeting);
	glPopMatrix();
}

void
Render::rYangtai() {
	glPushMatrix();
	glTranslatef(mainBedBay,0.0f,0.0f);
	drawStrip(s_mYangtai);
	glPopMatrix();

}

void
Render::rKitchen() {
	glPushMatrix();
	glTranslatef(mainBedBay+livingBay+washingBay-kitchenBay,6.4+washingDep+kitchenDep,0.0);
	drawStrip(s_mKitchen);
	glPopMatrix();
}

} /* namespace MyOGL */
