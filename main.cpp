
#include "App.h"
#include "Render.h"


int main(int argc, char** argv)
{
	MyOGL::App app(&argc, argv, MyOGL::Render::getWindow(), MyOGL::Render::renderInit, \
												MyOGL::Render::renderDisplay, MyOGL::Render::renderReshape);
	app.mainLoop();
	return 0;
}
