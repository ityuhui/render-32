/*
 * App.cpp
 *
 *  Created on: 2016年4月17日
 *      Author: yuhui
 */

#include <GL/freeglut.h>
#include <GL/gl.h>
#include "App.h"

namespace MyOGL {

App::App(int *pargc,char **argv, Rect win, void (*init)(), void (*renderDisplay)(), void (*renderReshape)(int,int) ) {
	glutInit(pargc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(win.W(),win.H());
	glutInitWindowPosition(win.Left(),win.Top());
	glutCreateWindow("Render-32  Powered by OpenGL");

	init();
	glutDisplayFunc(renderDisplay);
	glutReshapeFunc(renderReshape);
}

App::~App() {

}

void
App::mainLoop() {
	glutMainLoop();
}


} /* namespace MyOGL */
