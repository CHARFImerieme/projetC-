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
  //cout <<"t " << t.get_str() <<endl;
  //delete s;
  //delete t;
  //delete x;
  return 0;
}