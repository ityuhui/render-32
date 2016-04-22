/*
 * Rect.cpp
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#include "Rect.h"

namespace MyOGL {

Rect::Rect(rd x,rd y,rd w,rd h): mLeftTop(x,y),mWidth(w),mHeight(h) {
}

Rect::~Rect() {
	// TODO Auto-generated destructor stub
}

rd
Rect::Left() {
	return mLeftTop.X();
}

rd
Rect::Top() {
	return mLeftTop.Y();
}

rd
Rect::W() {
	return mWidth;
}

rd
Rect::H() {
	return mHeight;
}



} /* namespace MyOGL */
