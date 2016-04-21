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

App::App(int *pargc,char **argv, void (*init)(), void (*renderDisplay)(), void (*renderReshape)(int,int) ) {
	glutInit(pargc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Render-32  Powered by OpenGL");

	init();
	glutDisplayFunc(renderDisplay);
	glutReshapeFunc(renderReshape);
}

App::~App() {
	// TODO Auto-generated destructor stub
}

void
App::mainLoop() {
	glutMainLoop();
}


} /* namespace MyOGL */
