OBJS:=App.o Render.o

main:$(OBJS)
	g++ main.cpp $(OBJS) -lglut -lGL -lGLEW -lGLU -o Render-32
App.o:App.h
	g++ -c App.cpp
Render.o:Render.h
	g++ -c Render.cpp
clean:
	rm *.o


