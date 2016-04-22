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

Rect Render::s_mWindow(200,200,500,500);
Color Render::s_mFColor(0.0,0.0,0.0,0.0) ;
Color Render::s_mBkgColor(1.0,1.0,1.0,0.0) ;


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
	gluOrtho2D(0.0, 20.0, 0.0, 20.0);
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
	rOutlet();
	rRoom();
}

void
Render::rOutlet() {
	glColor3f(s_mFColor.R(), s_mFColor.G(), s_mFColor.B());
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(10,  1 );
        glVertex2f(10, 20);
        glVertex2f(1 , 10);
    glEnd();

    glFlush();
}

void
Render::rRoom() {

}

} /* namespace MyOGL */
