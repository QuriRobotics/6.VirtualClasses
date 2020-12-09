#include "vstub.h"

int main(void){
  drawgrid();
  vgetchar();
  setcolor (255,0,255);
  drawline (0,0,400,400);
  vgetchar();
  setcolor (0,255,255);
  drawline (400,0,0,400);
  vgetchar();
  vc << "\nText example";
  TFlush();
  vgetchar();
  return 0;
}

