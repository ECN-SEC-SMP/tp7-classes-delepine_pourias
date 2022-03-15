#include <stdio.h>
//#include <iostream>
#include "classe1.hpp"
//using namespace std;

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

  //tests des methodes de la classe
  
  cout <<"Avant translation : " << pt1<< endl;
  pt1.translater(pt2);
  cout <<"Apres translation : " << pt1<< endl;
  
  /*Q2*/
  //tests surcharge operateur <<
  cout <<"Surcharge operateur << : "<< pt1 << endl;
  //tests surcharge operateur +=
  cout <<"Avant += : " << pt1<< endl;
  pt1+=pt2;
  cout <<"Apres += : " << pt1<< endl;

  /*Q3.2*/
  form f1(pt1);
  form f2(pt2);

  cout <<"Avant Form += : " << f1.get_point()<< endl;
  f1 += f2;
  cout <<"Apres Form += : " << f1.get_point()<< endl;

  cout<<"Print form : "<<f1<<endl;

  point ce1_centre(2,2);
  cercle ce1(ce1_centre,4);
  cout<<"Perimetre : "<<ce1.perimetre()<<endl;
  
  
  return 0;
}
