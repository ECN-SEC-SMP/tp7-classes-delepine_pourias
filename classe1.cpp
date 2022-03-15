#include <stdio.h>
#include "classe1.hpp"

int point::get_point_x()const{return point_x;}
int point::get_point_y()const{return point_y;}

void point::set_point_x(int x)	{this->point_x = x;}
void point::set_point_y(int y)	{this->point_y = y;}

void point::translater(int tr_x, int tr_y){
  this->set_point_x(get_point_x()+tr_x);
  this->set_point_y(get_point_y()+tr_y);
}

point::point(){
  this->set_point_x(50);
  this->set_point_y(50);
}
point::point(int x, int y){
  this->set_point_x(x);
  this->set_point_y(y);
}
point::point(point const& pt){
  this->set_point_x(pt.get_point_x());
  this->set_point_y(pt.get_point_y());
}



// SURCHARGE D'OPERATEURS
ostream& operator<<(ostream&s,complexe1 const&pt1) {
  s << "x = "<< pt1.get_point_x() <<" y = "<< pt1.get_point_y();
  return s;
}