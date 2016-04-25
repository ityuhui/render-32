/*
 * Point2D.cpp
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#include "Point2D.h"

namespace MyOGL {


Point2D::Point2D(pd ix,pd iy):x(ix),y(iy) {
}

Point2D::~Point2D() {
}

pd
Point2D::X() {
  return x;
}

pd
Point2D::Y() {
	return y;
}

} /* namespace MyOGL */
