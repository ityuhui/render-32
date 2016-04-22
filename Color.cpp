/*
 * Color.cpp
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#include "Color.h"

namespace MyOGL {

Color::Color(float r,float g,float b,float a): m_r(r),m_g(g),m_b(b),m_a(a) {

}

Color::~Color() {
	// TODO Auto-generated destructor stub
}

float
Color::R() {
	return m_r;
}

float
Color::G() {
	return m_g;
}

float
Color::B() {
	return m_b;
}

float
Color::A() {
	return m_a;
}

} /* namespace MyOGL */
