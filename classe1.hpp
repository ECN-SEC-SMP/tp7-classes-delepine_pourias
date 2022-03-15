#include <iostream>
using namespace std;

//############################################
//  CLASSE POINT
//############################################
class point{
private:
/*Attributs*/
  int point_x = 0;
  int point_y = 0;

public:
/*Méthodes*/
	int get_point_x() const;
	int get_point_y() const;

	void set_point_x(int x);
	void set_point_y(int y);

	void translater(int tr_x, int tr_y);
	void translater(point const&tr_point);
  void operator+=(point const&pt1);

  /*Constructeur */
  point();
  point(int x, int y);
	point(point const& pt);
};

// SURCHARGE D'OPERATEURS
ostream& operator<<(ostream&, point const& pt1);


//############################################
//  CLASSE FORM
//############################################
class form{
protected :
/*Attributs*/
  point pt_form;

public : 
/*Constructeurs*/
  form();
  form(point pt_c);
/*Méthodes*/
  void operator+=(form const&f1);
  point get_point() const;
	void set_point(point pt);
  virtual float perimetre();
  virtual float surface();
};

// SURCHARGE D'OPERATEURS
// en dehors de la classe car ne modifie pas la classe
ostream& operator<<(ostream&, form const& f1);


//############################################
//  CLASSE CERCLE
//############################################
class cercle : public form{
  private:
    float rayon;
  
  public:
    cercle();
    cercle(point centre, float rayon);
    float perimetre();
    float surface();
};

//############################################
//  CLASSE RECTANGLE
//############################################
class rectangle : public form{
  protected:
    float largeur,hauteur;
    float largeur, hauteur;

  public:
    rectangle();
    rectangle(float largeur, float hauteur, point centre);
    float perimetre();
    float surface();
};
//############################################
//  CLASSE CARRE
//############################################
class carre : public rectangle{
  public:
    carre();
    carre(int cote,point centre);
    float perimetre();
    float surface();
};