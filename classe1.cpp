#include <stdio.h>
#include "classe1.hpp"

//############################################
//  METHODES CLASSE POINT
//############################################
int point::get_point_x()const{return point_x;}
int point::get_point_y()const{return point_y;}

void point::set_point_x(int x)	{this->point_x = x;}
void point::set_point_y(int y)	{this->point_y = y;}

void point::translater(int tr_x, int tr_y){
  this->set_point_x(this->get_point_x()+tr_x);
  this->set_point_y(this->get_point_y()+tr_y);
}

void point::translater(point const&tr_point){
  this->set_point_x( this->get_point_x() + tr_point.get_point_x());
  this->set_point_y( this->get_point_x() + tr_point.get_point_y());
}

point::point(){
  this->set_point_x(0);
  this->set_point_y(0);
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
ostream& operator<<(ostream&s, point const& pt1) {
  s << "x = "<< pt1.get_point_x() <<" y = "<< pt1.get_point_y();
  return s;
}

void point::operator+=(point const&pt1) {
  this->set_point_x( this->get_point_x() + pt1.get_point_x());
  this->set_point_y( this->get_point_x() + pt1.get_point_y());
}


//############################################
//  METHODES CLASSE FORM
//############################################
form::form(point pt_c){
  this->pt_form = pt_c;
}

form::form(){
  point pt_c(0,0);
  this->pt_form = pt_c;
}

point form::get_point() const{return pt_form;}

void form::set_point(point pt1){
  this->pt_form = pt1;
}

void form::operator+=(form const&f1) {
  this->pt_form += f1.get_point();
}

// SURCHARGE D'OPERATEURS
ostream& operator<<(ostream&s, form const& f1) {
  s << "pt_form = "<< f1.get_point();
  return s;
}

//############################################
//  CLASSE CERCLE
//############################################
cercle::cercle(point centre, float rayon1){
  this->rayon = rayon1;
  this->pt_form = centre;
  
}
cercle::cercle(){
  this->rayon = 0;
  
}
float cercle::perimetre(){
  return this->rayon * 6.28;
}

float cercle::surface(){
  return this->rayon * this->rayon * 3.14;
}
//############################################
//  CLASSE RECTANGLE
//############################################

//############################################
//  CLASSE CARRE
//############################################
