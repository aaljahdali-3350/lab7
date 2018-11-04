#ifndef _ABDULLAH_ALJAHDALI_
#define _ABDULLAH_ALJAHDALI_

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;
#include <unistd.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "abdullahA.h"
// #include "fonts.h"


void showName();
void showTime();
double getCurrTime();



void showName() {
  // Rect r;
  // r.left = 16;
  // r.top = 16;
  // r.right = 256;
  // r.bot = 256;
  // r.width = 256;
  // r.height = 32;
  // r.center = 128;
  // r.centerx = 128;
  // r.centery = 16;
  //
  // ggprint8b(&r, 16, 0x00ff0000,"Abdullah, Aljahdali");
  printf("Abdullah, Aljahdali\n");
}

double getCurrTime() {
  static const double firstTime = clock();
  return (clock() - firstTime)/1000;
}

void showTime() {
  // Rect r;
  // r.left = 16;
  // r.top = 32;
  // r.right = 256;
  // r.bot = 256;
  // r.width = 256;
  // r.height = 32;
  // r.center = 128;
  // r.centerx = 128;
  // r.centery = 16;
  //
  double curr = getCurrTime();
  // ggprint8b(&r, 32, 0x00ff0000, curr);
  printf("sec: %.2f\n", curr);
}
#endif
