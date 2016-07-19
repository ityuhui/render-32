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
	static void rOutlet1();
	static void rOutlet2();
	static void rRoom(float, float,std::vector<Point2D> &);
	static void rRooms();
	static void rYangtai();
	static void rKitchen();
	static void rKeting();
	static void rMainBed();
	static void rMainToi();
	static void rChildRoom();

  /*主卧*/
  static constexpr float mainBedBay = 3.3f;
	static constexpr float mainBedDep = 4.2f;

	/*主卫生间*/
	static constexpr float mainToiBay = 3.0f;
	static constexpr float mainToiDep = 1.8f;
	static constexpr float mainToiLeft = 0.6f; //主卫生间向西侧突出

	/*儿子房间*/
  static constexpr float ChildRoomBay = 3.4f;
	static constexpr float ChildRoomDep = 3.0f;

	/*客厅*/
	static constexpr float livingBay = 4.2f;
	static constexpr float livingDep = 4.2f;

	/*阳台*/
	static constexpr float balconyBay = livingBay;
	static constexpr float balconyDep = 1.5f;

	/*洗衣阳台*/
  static constexpr float washingBay = 1.1f;
	static constexpr float washingDep = 1.9f;

	/*厨房*/
	static constexpr float kitchenBay = 3.44f;
	static constexpr float kitchenDep = 2.4f;

	/*门外空间*/
	static constexpr float outdoorBay = 1.56f;
	static constexpr float outdoorDep = 2.35f;

	static Rect s_mWindow;
	static Color s_mBkgColor ;
	static Color s_mFColor;
	static std::vector<Point2D> s_mOutletPoints1;
	static std::vector<Point2D> s_mOutletPoints2;

	static std::vector<Point2D> s_mYangtai;
	static std::vector<Point2D> s_mKitchen;
	static std::vector<Point2D> s_mKeting;
	static std::vector<Point2D> s_mMainBed;
	static std::vector<Point2D> s_mMainToi;
	static std::vector<Point2D> s_mChildRoom;

};

} /* namespace MyOGL */

#endif /* RENDER_H_ */
