#include "Projet_c++.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  // les instances String en pointeur ?
  cout << "wesh ? " << endl;
  String s = String();
  cout <<"s " << s.length << s.get_str() <<" fin s" <<endl; 
  String x = String("wesh");
  cout << "wesh ? " << x.get_str() <<endl;
  String t =  String{x};
  cout <<"t " << t.get_str() << " capacity of t: "<< t.capacity() <<endl;
  cout << "Are the strings empty ? " << endl;
  cout << "s " << s.empty() << endl;
  cout << "t " << x.empty() << endl;
  cout << "x " << x.empty() << endl;
  t.reserve(10);
  cout <<"t " << t.get_str() << " capacity of t: "<< t.capacity() <<endl;
  t = "Hello world";
  cout << sizeof("Hello world") << endl;
  cout <<"t " << t.get_str() << " capacity of t: "<< t.capacity() <<endl;
  return 0;
}