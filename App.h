/*
 * App.h
 *
 *  Created on: 2016年4月17日
 *      Author: yuhui
 */

#ifndef APP_H_
#define APP_H_

namespace MyOGL {

class App {
public:
	App(int *,char **, void (*)(), void (*)(), void (*)(int,int) );
	virtual ~App();
	void mainLoop();

};

} /* namespace MyOGL */

#endif /* APP_H_ */
