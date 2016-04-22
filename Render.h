/*
 * Render.h
 *
 *  Created on: 2016年4月17日
 *      Author: yuhui
 */

#ifndef RENDER_H_
#define RENDER_H_

#include "Rect.h"
#include "Color.h"

namespace MyOGL {

class Render {
public:
	Render();
	virtual ~Render();
	static void renderDisplay();
	static void renderReshape(int,int);
	static void renderInit();
	static Rect getWindow();
private:
	static void rBackground();
	static void rFront();
	static void rOutlet();
	static void rRoom();

	static Rect s_mWindow;
	static Color s_mBkgColor ;
	static Color s_mFColor;
};

} /* namespace MyOGL */

#endif /* RENDER_H_ */
