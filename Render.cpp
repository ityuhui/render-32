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

Render::Render() {
}

Render::~Render() {
}

void
Render::renderInit() {
	glClearColor(1.0f,1.0f,1.0f,0.0f);
	glShadeModel(GL_FLAT);
}

void
Render::renderReshape(int w,int h) {
	glViewport(0,0,(GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

void
Render::renderDisplay() {
	rBackground();
	rFront();
}

void
Render::rBackground() {

}

void
Render::rFront() {
	rOutlet();
	rRoom();
}

void
Render::rOutlet() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(20,  1 );
        glVertex2f(20, 20);
        glVertex2f(2 , 20);
    glEnd();

    glFlush();
}

void
Render::rRoom() {

}

} /* namespace MyOGL */
