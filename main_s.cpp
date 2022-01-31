#include "Projet_c++.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  cout <<" Les strings sur lesquels nous allons travailler sont: "<<endl;

  String s("Bonjour");
  s.get_str();

  String x("Vous");
  x.get_str();

  String t =  String(x); // TEST de la copie du constructeur 


 // //------- TEST PARTIE 1: ÉTUDIANT A  -------

cout <<" TOUT D'ABORD, ON COMMENCE PAR LES TESTS DE L'ÉTUDIANT A: "<<endl;
 // -- TEST MÉTHODE C_STR :
cout <<" NOUS TESTONS LA MÉTHODE C_STR"<<endl;


 // -- TEST MÉTHODE SIZE :
cout <<" NNous testons la méthode SIZE"<<endl;
cout <<" La taille de nos Strings : "<<endl;
std::cout << "la taille de " << s.get_str() <<  " est de " << s.size() << std::endl;
std::cout << "la taille de " << x.get_str() <<  " est de " << x.size() << std::endl;
std::cout << "la taille de " << t.get_str() <<  " est de " << t.size() << std::endl;

 // -- TEST MÉTHODE CLEAR :
cout <<" Nous testons la méthode CLEAR"<<endl;
cout <<" nous allons clear le string " << s.get_str() <<" de taille " << s.size() <<endl;
s.clear();
s.get_str();
std::cout << "La taille après la méthode clear est : " << s.size() << std::endl; 

 // -- TEST MÉTHODE OPERATOR=(CHAR B) :
cout <<" Nous testons la méthode OPERATOR=(CHAR B)"<<endl;
  char c1='R';
  x=c1;
  x.get_str();
  std::cout << " Suite à cette méthode, la taille du string vous est " << x.size() << std::endl;

 // -- TEST MÉTHODE OPERATOR=(CHAR B) :
cout <<" Nous testons la méthode OPERATOR +(CONST STRING&, CONST CHAR*)"<<endl;





 // //------- TEST PARTIE 2: ÉTUDIANT B  -------
cout <<" ENSUITE, ON CONTINUE AVEC LES TESTS DE L'ÉTUDIANT B: "<<endl;












  // //------- TEST PARTIE 3: ÉTUDIANT C -------
cout <<" FINALEMENT, ON TERMINE PAR LES TESTS DE L'ÉTUDIANT B: "<<endl;

  // -- TEST MÉTHODE CAPACITY : 

  cout <<" Nous testons la méthode CAPACITY"<<endl;
  cout <<"t " << t.get_str() << " capacity of t: "<< t.capacity() <<endl;

  // -- TEST MÉTHODE EMPTY : 
  cout <<" Nous testons la méthode EMPTY"<<endl;
  cout << "Are the strings empty ? " << endl;
  cout << "s " << s.empty() << endl;
  cout << "t " << t.empty() << endl;
  cout << "x " << x.empty() << endl;

  // -- TEST MÉTHODE RESERVE :
  cout <<" Nous testons la méthode RESERVE"<<endl;
  t.reserve(10);
  cout <<"t" << t.get_str() << " capacity of t: "<< t.capacity() <<endl;
  t = "Hello world";
  cout << sizeof("Hello world") << endl;
  cout <<"t " << t.get_str() << " capacity of t: "<< t.capacity() <<endl;
  return 0;


}
