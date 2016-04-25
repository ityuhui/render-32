OBJS:=Color.o Point2D.o Rect.o Render.o App.o main.o
CLFAGS:=-std=c++11
LINKFLAGS:=-lglut -lGL -lGLEW -lGLU

main:$(OBJS)
	g++ $(OBJS) $(CLFAGS) $(LINKFLAGS) -o Render-32
main.o:
	g++ $(CLFAGS) -c main.cpp
App.o:App.h
	g++ $(CLFAGS) -c App.cpp
Render.o:Render.h
	g++ $(CLFAGS) -c Render.cpp
Color.o:Color.h
	g++ $(CLFAGS) -c Color.cpp
Point2D.o:Point2D.h
	g++ $(CLFAGS) -c Point2D.cpp
Rect.o:Rect.h
	g++ $(CLFAGS) -c Rect.cpp
clean:
	rm *.o


