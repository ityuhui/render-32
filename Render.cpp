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
		{0, 4.18+1.8+2.99},
		{0, 4.18+1.8},
		{-0.63,4.18+1.8},
		{-0.63,4.18},
		{0,4.18},
		{0, 0},
		{3.58, 0},
		{3.58+4.5, 0},
		{3.58+4.5, 6.4},
		{3.58+4.5+1.07, 6.4},
		{3.58+4.5+1.07, 6.4+1.9 },
		{3.58+4.5+1.07+0.13, 6.4+1.9 },
		{3.58+4.5+1.07+0.13, 6.4+1.9+2.4 },
		{3.58+4.5+1.07+0.13-5, 6.4+1.9+2.4 },
		{3.58+4.5+1.07+0.13-5, 6.4+1.9+2.4+2.35 },
		{3.58+4.5+1.07+0.13-5-1.42, 6.4+1.9+2.4+2.35 },
};

std::vector<Point2D> Render::s_mOutletPoints2 = {
		{3.38,4.6},
		{0,4.6},
		{0,0},
		{2.74,0}
};

std::vector<Point2D> Render::s_mYangtai = {
		{0,0},
		{0,1.48},
		{4.5,1.5}
};

std::vector<Point2D> Render::s_mKitchen = {
		{0,0},
		{5,0},
		{5,-2.4},
		{5-0.13,-2.4},
		{5-0.13,-2.4-1.9},
		{5-1.2,-2.4-1.9},
		{5-1.2,-2.4},
		{0,-2.4},
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
	rOutlet2();
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
}

void
Render::rYangtai() {
	glPushMatrix();
	glTranslatef(3.58f,0.0f,0.0f);
	drawStrip(s_mYangtai);
	glPopMatrix();

}

void
Render::rKitchen() {
	glPushMatrix();
	glTranslatef(3.58+4.5+1.2-5,6.4+1.9+2.4,0.0);
	drawStrip(s_mKitchen);
	glPopMatrix();
}

} /* namespace MyOGL */
