#include <stdio.h>
#include <iostream>
#include "classe1.hpp"
using namespace std;

int main(){
  point pt1;
  pt1.set_point_x(8);
  pt1.set_point_y(5);
  cout << "x = "<< pt1.get_point_x() <<" y = "<< pt1.get_point_y() << endl;
  
  point pt2(5,9);
  cout << "x = "<< pt2.get_point_x() <<" y = "<< pt2.get_point_y() << endl;
  
  return 0;
}
