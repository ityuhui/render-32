/*
 * Point.h
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#ifndef POINT2D_H_
#define POINT2D_H_

namespace MyOGL {

typedef float pd;

class Point2D {
public:
	Point2D(pd,pd);
	virtual ~Point2D();
	pd X();
	pd Y();
private:
	pd x;
	pd y;
};

} /* namespace MyOGL */

#endif /* POINT2D_H_ */
