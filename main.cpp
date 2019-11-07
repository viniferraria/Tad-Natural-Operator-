#include <iostream>
#include "Natural.h"

Natural::Natural(int	v){
  value=v;
}

Natural::~Natural(){}

unsigned	int	Natural::getValue(){	
	return	value;
}

Natural	Natural::suc(){
	Natural	n(value+1);
	return	n;
}

Natural	Natural::operator+(Natural	n){
	Natural	s(value+n.getValue());
	return	s;
}

Natural Natural::operator*(Natural n){
  Natural a(value*n.getValue());
  return a;
}

Natural	Natural::operator-(Natural	n){
	Natural	b(value-n.getValue());
	return	b;
}

int main(){
  Natural X(2);
  Natural Y(4);
  Natural res1 = X.suc()+(Y);
  Natural res2 = X+(Y).suc();
  Natural res3 = Y-(X).suc();
  Natural res4 = Y.suc()-(X);
  Natural res5 = X*(Y);
  std::cout << "Soma: " << res1.getValue() << ", Axioma: " << res2.getValue() << std::endl;
  std::cout << "Subtração: " << res4.getValue() << ", Axioma: " << res5.getValue() << std::endl;
  std::cout << "Multiplicação: " << res4.getValue() << std::endl;
  std::cout << "Divisão: " << res5.getValue() << std::endl;
  return 0;
}