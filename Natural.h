#ifndef NATURAL_H
#define NATURAL_H


class	Natural{
	private:
		unsigned	int	value;
									
	public:
		Natural(int	v);
		~Natural();
		Natural	suc();
		Natural	operator+(Natural	n);
    Natural operator*(Natural n);
    Natural operator-(Natural n);
     unsigned	int	getValue();
};

#endif