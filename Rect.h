/*
 * Rect.h
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#ifndef RECT_H_
#define RECT_H_

#include "Point2D.h"

namespace MyOGL {

typedef int rd;

class Rect {
public:
	Rect(rd,rd,rd,rd);
	virtual ~Rect();
	rd Left();
	rd Top();
	rd W();
	rd H();
private:
	Point2D mLeftTop;
	rd mWidth;
	rd mHeight;
};

} /* namespace MyOGL */

#endif /* RECT_H_ */
