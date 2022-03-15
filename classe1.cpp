#include <stdio.h>
#include "classe1.hpp"

int point::get_point_x()	{return point_x;}
int point::get_point_y()	{return point_y;}

void point::set_point_x(int x)	{this->point_x = x;}
void point::set_point_y(int y)	{this->point_y = y;}

void point::translater(int tr_x, int tr_y){
  set_point_x(get_point_x()+tr_x);
  set_point_y(get_point_y()+tr_y);
}

void point::translater(point tr_point){
  set_point_x(tr_point.get_point_x());
  set_point_y(tr_point.get_point_y());
}

point::point(){
  set_point_x(0);
  set_point_y(0);
}

point::point(int x, int y){
  set_point_x(x);
  set_point_y(y);
}

