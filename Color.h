/*
 * Color.h
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#ifndef COLOR_H_
#define COLOR_H_

namespace MyOGL {

class Color {
public:
	Color(float,float,float,float);
	virtual ~Color();
	float R();
	float G();
	float B();
	float A();
private:
	float m_r;
	float m_g;
	float m_b;
	float m_a;
};

} /* namespace MyOGL */

#endif /* COLOR_H_ */
