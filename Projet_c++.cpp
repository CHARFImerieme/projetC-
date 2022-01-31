#include <iostream>
#include <stddef.h> // size_t
#include "Projet_c++.h"
#include<math.h>
using std::cout;
using std::endl;

// INTRODUCTION: 
// Dans ce projet, nous allons implémenter différentes fonctions de la librairie "String". En effet, nous créeons une classe String qui contiendra les différentes fonctions 
// souhaitées. 
// Pour ce faire, nous avons divisé le travail en trois parties. Premièrement, l'élève A (CHARFI merieme) s'occupera d'implémenter les fonctions suivantes: copy constructor
// c_str(), size() , clear() , operator=(char) , operator+(const string&, const char*) 
// Deuxièmement, l'élève B ( BENAYOUN Ruth) codera les fonctions suivantes: constructor from str c-string, length() , max_size() , resize(size_t, char) ,operator=(const string&) 
// operator+(const string&, char)
// Finalement, l'élève C (RACHIDI Salma) programmera les fonctions suivantes: destructor, capacity_() , empty() , reserve(size_t) , operator=(const char*) , operator+(const string&, const string&)


// PARTIE 1: ÉTUDIANT A 

//------- LE CONSTRUCTEUR -------
String :: String (){ 
  str = new char[capacity_];
  str[0]= '\0';
  length = 0;
}

//------- LA COPIE DU CONSTRUCTEUR -------
String :: String(const String &obj) { 
  str = new char[capacity_];
  str = obj.str;
  length = obj.length;
}

//------- LA MÉTHODE c_str() -------
char* String::c_str(){
  return this->str;
}
//------- LA MÉTHODE size() -------

int String::size(){
  return length;
}


//------- LA MÉTHODE clear() -------
void String::clear(){
  str= nullptr;
  length = 0;
}

//------- LA MÉTHODE operator=(char) -------
String& String::operator=(char b){
  this->str[0]= b;
  this->str[1]='\0';
  this->length=1;
  return *this;
}

//------- LA MÉTHODE operator+(const string&, const char*) -------



// PARTIE 2: ÉTUDIANT B 

//------- LA COPIE DU CONSTRUCTEUR -------
void String::cString(const char* b){ // constructor from str c-string, b finit par 0
  capacity_ = sizeof(b);
  str = new char[capacity_];
  length = sizeof(b);
  for(int i=0; i<length;i++){
    str[i]=b[i];
    }
};

//------- LA FONCTION LENGTH -------
float String::longueur(char *str)
{
	float length = 0;
	int i = 0; 
	while(str[i] != '\0')
  {
    length ++;
    i++;
  }
  return length;
};

//------- LA FONCTION max_size() -------
// __WORDSIZE prend la valeur du nombre de bits de notre système
// pour avoir le max_size, on élève à la puissance de 2 le nombre de bits
float String::tailleMax()
{
  float max_size = pow(2,__WORDSIZE);
  return max_size;
};

//------- LA FONCTION resize(size_t, char) -------
// si la longueur est plus petite que celle du mot, on coup le mot à la longueur demandée
// si la longueur est plus grande que celle du mot, on rajoute le nombre de caractères qu'il faut pour compléter jusqu'à la longueur voulue, avec le caractère indiquée

void String::resizeChar(int n, char a)
{
  int i;
  for(i=0; i<n; i++){
    if(str[i]=='\0'){
      str[i] = a;
      str[i+1] = '\0';
    }
  }
  str[n] = '\0';
}; 

//------- LA FONCTION operator=(const string&) -------
void String::operatorEgal(char *a)
{
  int len1 = longueur(a);
  int len2 = longueur(str);
  if(len1 > len2)
  {
    len2 = len1;
    for(int i=0; i<len2;i++)
    {
    str[i]=a[i];
    }
  }
  if(len1 < len2)
  {
    len1 = len2;
    for(int i=0; i<len1;i++)
    {
    str[i]=a[i];
    }
  }
};

//------- LA FONCTION operator+(const string&, char) -------
void String::operatorPlus(char *a, char *str)
{
  int len1 = longueur(a);
  int len2 = longueur(str);
  int k;
  for( k=len2 ; k < len1+len2; k++)
  {
    str[k] = a[k-len2];
	}
};

// PARTIE 3: ÉTUDIANT C 


//------- LE DESTRUCTEUR -------
String ::~String() { 
   delete [] str;
}

//------- LA MÉTHODE Capacity() -------
int String::capacity(){
  return capacity_;
}

//------- LA MÉTHODE empty() -------

bool String::empty(){
  if (length == 0){
    return true;
  }
  else { 
    return false;
  }
}

//------- LA MÉTHODE reserve(size_t st) -------

void String::reserve(size_t st){
  if (st > capacity_){
    
    char x[capacity_];
    for(int i=0; i<length;i++){
    x[i]=str[i];
    }
    delete str;
    str = new char[capacity_];
    for(int i=0; i<length;i++){
    str[i]=x[i];
    }
    capacity_ = st;
  }
}


//------- LA MÉTHODE operator=(const char*) -------

String& String::operator=(const char* b) {
  //cout << "in the operator" << endl;
  int length_b = 0;
  while(b[length_b]!='\0')
  {
      length_b++;
  }
  length_b++;
  cout << "Operator " << length_b<< endl; // longueur de char array ?
  if (length_b> capacity_){
    reserve(length_b);
  }
  length = length_b;
  for(int i=0; i<length;i++){
    str[i]=b[i];
  }
  return *this;
}

