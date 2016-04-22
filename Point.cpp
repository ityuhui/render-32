/*
 * Point.cpp
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#include "Point.h"

namespace MyOGL {

Point::Point(int ix,int iy):x(ix),y(iy) {
}

Point::~Point() {
}

int
Point::X() {
  return x;
}

int
Point::Y() {
	return y;
}

} /* namespace MyOGL */
