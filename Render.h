/*
 * Render.h
 *
 *  Created on: 2016年4月17日
 *      Author: yuhui
 */

#ifndef RENDER_H_
#define RENDER_H_

#include <vector>
#include "Rect.h"
#include "Color.h"
#include "Point2D.h"

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
	static void rRooms();
	static void rYangtai();

	static Rect s_mWindow;
	static Color s_mBkgColor ;
	static Color s_mFColor;
	static std::vector<Point2D> s_mOutletPoints1;
	static std::vector<Point2D> s_mOutletPoints2;

	static std::vector<Point2D> s_mYangtai;

};

} /* namespace MyOGL */

#endif /* RENDER_H_ */
