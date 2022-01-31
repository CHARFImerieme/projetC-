#include "Projet_c++.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
  cout <<" Les strings sur lesquels nous allons travailler sont: "<<endl;

  String s("Bonjour");
  cout <<" Le premier String est : " <<s.get_str() << endl;

  String x("Vous");
  cout <<" Le deuxième String est :  " << x.get_str() << endl;
 

  String t =  String(x); // TEST de la copie du constructeur 
  cout <<" Le troisème String est une copie du deuxième : " << t.get_str() << endl;

  cout <<"     " << endl;

 // //------- TEST PARTIE 1: ÉTUDIANT A  -------

cout <<" TOUT D'ABORD, ON COMMENCE PAR LES TESTS DE L'ÉTUDIANT A: "<<endl;
 // -- TEST MÉTHODE C_STR :
cout <<" NOUS TESTONS LA MÉTHODE C_STR"<<endl;
String s1 = s.c_str();
s1.get_str();
std::cout << "Suite à cette méthode, la taille du string vous est " << s1.size() << std::endl;

  cout <<"     " << endl;
 // -- TEST MÉTHODE SIZE :
cout <<" Nous testons la méthode SIZE"<<endl;
cout <<" La taille de nos Strings : "<<endl;
std::cout << "la taille de " << s.get_str() <<  " est de " << s.size() << std::endl;
std::cout << "la taille de " << x.get_str() <<  " est de " << x.size() << std::endl;
std::cout << "la taille de " << t.get_str() <<  " est de " << t.size() << std::endl;

  cout <<"     " << endl;
 // -- TEST MÉTHODE CLEAR :
cout <<" Nous testons la méthode CLEAR"<<endl;
cout <<" nous allons clear le string " << s.get_str() <<" de taille " << s.size() <<endl;
s.clear();
s.get_str();
std::cout << "La taille après la méthode clear est : " << s.size() << std::endl; 

  cout <<"     " << endl;
 // -- TEST MÉTHODE OPERATOR=(CHAR B) :
cout <<" Nous testons la méthode OPERATOR=(CHAR B)"<<endl;
char c1='R';
x=c1;
x.get_str();
std::cout << " Suite à cette méthode, la taille du string vous est " << x.size() << std::endl;

  cout <<"     " << endl;

 // -- TEST MÉTHODE OPERATOR=(CHAR B) :
cout <<" Nous testons la méthode OPERATOR +(CONST STRING&, CONST CHAR*)"<<endl;





cout <<"     " << endl;

 // //------- TEST PARTIE 2: ÉTUDIANT B  -------
cout <<" ENSUITE, ON CONTINUE AVEC LES TESTS DE L'ÉTUDIANT B: "<<endl;

String* c1 = new String();
String* c2 = new String();
cout <<"Nous testons la méthode cString :"<<endl;
c1->cString("Bonjour");
c2->cString("vous");
cout << "Le premier String est : " << c1->get_str() << endl;
cout << "Le deuxième String est : " << c2->get_str() << endl;

cout <<"Nous testons la méthode lenght :"<<endl;
cout << "La longueur du string " << c1->get_str() << " est : " << c1->longueur(c1->get_str()) << endl;
cout << "La longueur du string " << c2->get_str() << " est : " << c2->longueur(c2->get_str()) << endl; 

cout <<"Nous testons la méthode max_size :"<<endl;	
cout << "La taille max du string " << c1->get_str() << " est : " << c1->tailleMax() << endl; 	
cout << "La taille max du string " << c2->get_str() << " est : " << c2->tailleMax() << endl; 	
	
cout <<"Nous testons la méthode operator+"<<endl;
cout << "La concaténation des mots " << c2->get_str() << " et " << c1->get_str() << " est : "; // Test fonction operator+(const string&, char)
c2->operatorPlus(c1->get_str(),c2->get_str());
cout << c2->get_str() << endl;

cout <<"Nous testons la méthode operator= :"<<endl;
String* c3 = new String();
c3->cString("comment");
cout << "L'affectation du mot " << c3->get_str() << " au mot " << c1->get_str() << " est : "; // Test fonction operator=(const string&)
c1->operatorEgal(c3->get_str());
cout << c1->get_str() << endl;

cout <<"Nous testons la méthode resize :"<<endl;
String* c4 = new String();
c4->cString("bonjour");
int n = 9;
cout << "Le redimensionnement du mot " << c4->get_str() << " de longeur " << c4->longueur(c4->get_str()) << " en un mot de longueur " << n << ", complété par des caractères + si besoin, est : "; // Test fonction resize
c4->resizeChar(9,'+');
cout << c4->get_str() << endl;












  // //------- TEST PARTIE 3: ÉTUDIANT C -------
cout <<" FINALEMENT, ON TERMINE PAR LES TESTS DE L'ÉTUDIANT B: "<<endl;

  // -- TEST MÉTHODE CAPACITY : 

  cout <<" Nous testons la méthode CAPACITY"<<endl;
  cout <<"t " << t.get_str() << " capacity of t: "<< t.capacity() <<endl;

  cout <<"     " << endl;

  // -- TEST MÉTHODE EMPTY : 
  cout <<" Nous testons la méthode EMPTY"<<endl;
  cout << "Are the strings empty ? " << endl;
  cout << "s " << s.empty() << endl;
  cout << "t " << t.empty() << endl;
  cout << "x " << x.empty() << endl;

  cout <<"     " << endl;

  // -- TEST MÉTHODE RESERVE :
  cout <<" Nous testons la méthode RESERVE"<<endl;
  t.reserve(10);
  cout <<"t" << t.get_str() << " capacity of t: "<< t.capacity() <<endl;
  t = "Hello world";
  cout << sizeof("Hello world") << endl;
  cout <<"t " << t.get_str() << " capacity of t: "<< t.capacity() <<endl;
  return 0;

  cout <<"     " << endl;

}
