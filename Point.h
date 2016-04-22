/*
 * Point.h
 *
 *  Created on: 2016年4月22日
 *      Author: yuhui
 */

#ifndef POINT_H_
#define POINT_H_

namespace MyOGL {

class Point {
public:
	Point(int,int);
	virtual ~Point();
	int X();
	int Y();
private:
	int x;
	int y;
};

} /* namespace MyOGL */

#endif /* POINT_H_ */
