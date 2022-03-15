#include <stdio.h>
#include <iostream>
#include "classe1.hpp"
using namespace std;

int main(){
  /*Q1.1*/
  point pt1;
  cout << "x = "<< pt1.get_point_x() <<" y = "<< pt1.get_point_y() << endl;

  /*Q1.2*/
  pt1.set_point_x(8);
  pt1.set_point_y(5);
  cout << "x = "<< pt1.get_point_x() <<" y = "<< pt1.get_point_y() << endl;

  /*Q1.3*/
  point pt2(5,9);
  cout << "x = "<< pt2.get_point_x() <<" y = "<< pt2.get_point_y() << endl;

  /*Q1.4*/
  point pt3(pt2);
  cout << "x = "<< pt2.get_point_x() <<" y = "<< pt2.get_point_y() << endl;

  
  return 0;
}
