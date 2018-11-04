#
# Makefile for asteroids game
#
# Enter one of the following
#
# make
# make all
# make asteroids
# make clean
#
CFLAGS = -I ./include
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm
# LFLAGS = -lrt -lX11 -lGL

all: asteroids

asteroids: asteroids.cpp timers.cpp log.cpp fonts.h abdullahA.cpp abdullahA.h
		g++ $(CFLAGS) asteroids.cpp log.cpp timers.cpp \
		libggfonts.a -Wall $(LFLAGS) -o main
clean:
	rm -f asteroids
	rm -f *.o
