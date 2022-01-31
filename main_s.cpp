#include "Projet_c++.h"
#include <iostream>
using std::cout;
using std::endl;

int main() {
    cout <<" Les strings sur lesquels nous allons travailler sont: "<<endl;
  String* c1 = new String();
  String* c2 = new String();
  cout <<"Nous testons la méthode cString :"<<endl;
  c1->cString("Bonjour");
  c2->cString("vous");
  cout << "Le premier String est : " << c1->get_str() << endl;
  cout << "Le deuxième String est : " << c2->get_str() << endl;

  String t =  String(c2); // TEST de la copie du constructeur 
  cout << "Le troisème String est une copie du deuxième : " << c2->get_str() << endl;

  cout <<"     " << endl;

 // //------- TEST PARTIE 1: ÉTUDIANT A  -------

  cout <<" TOUT D'ABORD, ON COMMENCE PAR LES TESTS DE L'ÉTUDIANT A: "<<endl;
 // -- TEST MÉTHODE C_STR :
  cout <<" NOUS TESTONS LA MÉTHODE C_STR"<<endl;
  std::cout << "Suite à cette méthode, la taille du string vous est " << c1->size() << std::endl;

  cout <<"     " << endl;
  
 // -- TEST MÉTHODE SIZE :
cout <<" Nous testons la méthode SIZE"<<endl;
cout <<" La taille de nos Strings : "<<endl;
std::cout << "la taille de " << c1->get_str() <<  " est de " << c1->size() << std::endl;
std::cout << "la taille de " << c2->get_str() <<  " est de " << c2->size() << std::endl;
std::cout << "la taille de " << t->get_str() <<  " est de " << t->size() << std::endl;

  cout <<"     " << endl;

 // -- TEST MÉTHODE CLEAR :
cout <<" Nous testons la méthode CLEAR"<<endl;
cout <<" nous allons clear le string " << c1->get_str() <<" de taille " << c1->size() <<endl;
c1->clear();
c1->get_str();
std::cout << "La taille après la méthode clear est : " << c1->size() << std::endl; 

  cout <<"     " << endl;
    
 // -- TEST MÉTHODE OPERATOR=(CHAR B) :
cout <<" Nous testons la méthode OPERATOR=(CHAR B)"<<endl;
char l='R';
c1=l;
c1->get_str();
std::cout << " Suite à cette méthode, la taille du string vous est " << c1->size() << std::endl;

  cout <<"     " << endl;


 // -- TEST MÉTHODE OPERATOR=(CHAR B) :
cout <<" Nous testons la méthode OPERATOR +(CONST STRING&, CONST CHAR*)"<<endl;





cout <<"     " << endl;

 // //------- TEST PARTIE 2: ÉTUDIANT B  -------
cout <<"ENSUITE, ON CONTINUE AVEC LES TESTS DE L'ÉTUDIANT B: "<<endl;

String* a = new String();
String* b = new String();
cout <<"Nous testons la méthode cString :"<<endl;
a->cString("Bonjour");
b->cString("vous");
cout << "Le premier String est : " << a->get_str() << endl;
cout << "Le deuxième String est : " << b->get_str() << endl;

cout <<"Nous testons la méthode lenght :"<<endl;
cout << "La longueur du string " << a->get_str() << " est : " << a->longueur(a->get_str()) << endl;
cout << "La longueur du string " << b->get_str() << " est : " << b->longueur(b->get_str()) << endl; 

cout <<"Nous testons la méthode max_size :"<<endl;	
cout << "La taille max du string " << a->get_str() << " est : " << a->tailleMax() << endl; 	
cout << "La taille max du string " << b->get_str() << " est : " << b->tailleMax() << endl; 	
	
cout <<"Nous testons la méthode operator+"<<endl;
cout << "La concaténation des mots " << b->get_str() << " et " << a->get_str() << " est : "; // Test fonction operator+(const string&, char)
b->operatorPlus(a->get_str(),b->get_str());
cout << b->get_str() << endl;

cout <<"Nous testons la méthode operator= :"<<endl;
String* c = new String();
c->cString("comment");
cout << "L'affectation du mot " << c->get_str() << " au mot " << a->get_str() << " est : "; // Test fonction operator=(const string&)
a->operatorEgal(c->get_str());
cout << a->get_str() << endl;

cout <<"Nous testons la méthode resize :"<<endl;
String* d = new String();
d->cString("bonjour");
int n = 9;
cout << "Le redimensionnement du mot " << d->get_str() << " de longeur " << d->longueur(d->get_str()) << " en un mot de longueur " << n << ", complété par des caractères + si besoin, est : "; // Test fonction resize
d->resizeChar(9,'+');
cout << d->get_str() << endl;













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
