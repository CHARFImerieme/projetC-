#include <iostream>
#include "Projet_c++.h"
using std::cout;
using std::endl;


// Projet_c++
// Dans ce projet, nous allons implémenter différentes fonctions de la librairie "String". En effet, nous créeons une classe String qui contiendra les différentes fonctions 
// souhaitées. 
// Pour ce faire, nous avons divisé le travail en trois parties. Premièrement, l'élève A (CHARFI merieme) s'occupera d'implémenter les fonctions suivantes: copy constructor
// c_str(), size() , clear() , operator=(char) , operator+(const string&, const char*) 
// Deuxièmement, l'élève B ( BENAYOUN Ruth) codera les fonctions suivantes: constructor from str c-string, length() , max_size() , resize(size_t, char) ,operator=(const string&) 
// operator+(const string&, char)
// Finalement, l'élève C (RACHIDI Salma) programmera les fonctions suivantes: destructor, capacity() , empty() , reserve(size_t) , operator=(const char*) , operator+(const string&, const string&)





String :: String (){ //le constructeur
  capacity = default_capacity;
  str = new char[capacity];
  str[0]= '\0';
  length = 0;
}

String :: String(const char* b){ // constructor from str c-string, b finit par 0
	str = new char[100];
  length = 0;
  int i = 0;
  while(b[i] != '\0'){
    length ++;
    i++;
  }
  for(int i=0; i<length;i++){
    str[i]=b[i];
    }
  
}

String :: String(const String &obj) { // c'est la copie du constructeur 
   
  str = new char[100];
  str = obj.str;
}

char* String::get_str(){
 
  return str;
}

String ::~String() { // c'est le destructeur 
   delete str;
}




