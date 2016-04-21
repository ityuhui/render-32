/*
 * Render.h
 *
 *  Created on: 2016年4月17日
 *      Author: yuhui
 */

#ifndef RENDER_H_
#define RENDER_H_

namespace MyOGL {

class Render {
public:
	Render();
	virtual ~Render();
	static void renderDisplay();
	static void renderReshape(int,int);
	static void renderInit();
private:
	static void rBackground();
	static void rFront();
	static void rOutlet();
	static void rRoom();

	static const int windowWidth  = 500;
	static const int windowHeight = 500;
};

} /* namespace MyOGL */

#endif /* RENDER_H_ */
