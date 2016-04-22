OBJS:=App.o Render.o Color.o Point.o Rect.o

main:$(OBJS)
	g++ main.cpp $(OBJS) -lglut -lGL -lGLEW -lGLU -o Render-32
App.o:App.h
	g++ -c App.cpp
Render.o:Render.h
	g++ -c Render.cpp
Color.o:Color.h
	g++ -c Color.cpp
Point.o:Point.h
	g++ -c Point.cpp
Rect.o:Rect.h
	g++ -c Rect.cpp
clean:
	rm *.o


