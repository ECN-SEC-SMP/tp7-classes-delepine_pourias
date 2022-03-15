class point{
private:
    int point_x = 0;
    int point_y = 0;

public:
	int get_point_x() const;
	int get_point_y() const;

	void set_point_x(int x);
	void set_point_y(int y);

	void translater(int tr_x, int tr_y);
	void translater(point tr_point);

  /*Constructeur */
  point();
  point(int x, int y);
	point(point const& pt);
};

// SURCHARGE D'OPERATEURS
//ostream& operator<<(ostream&, type const&);