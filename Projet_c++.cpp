#include <iostream>
using std::cout;
using std::endl;


// Projet_c++
// Dans ce projet, nous allons implémenter différentes fonctions de la librairie "String". En effet, nous créeons une classe STRING qui contiendra les différentes fonctions 
// souhaitées. 
// Pour ce faire, nous avons divisé le travail en trois parties. Premièrement, l'élève A (CHARFI merieme) s'occupera d'implémenter les fonctions suivantes: copy constructor
// c_str(), size() , clear() , operator=(char) , operator+(const string&, const char*) 
// Deuxièmement, l'élève B ( BENAYOUN Ruth) codera les fonctions suivantes: constructor from a c-string, length() , max_size() , resize(size_t, char) ,operator=(const string&) 
// operator+(const string&, char)
// Finalement, l'élève C (RACHIDI Salma) programmera les fonctions suivantes: destructor, capacity() , empty() , reserve(size_t) , operator=(const char*) , operator+(const string&, const string&)


//création de la classe STRING 
class STRING{ 
public: 
  char *a; // liste de char
  STRING();
  //STRING(const STRING &obj);
  //~STRING();
  //STRING (const char* a[]);

};


STRING :: STRING (){ //le constructeur
  a = new char[100];
  a[0]= 'h';
  a[1]= 'i';
  a[2]= 'y';
  a[3]= 'o';
  a[4]= 'u';
}

//STRING :: STRING(const char* a[]){ // constructor from a c-string
	//char a[100]="hello world";
  
//};

//STRING :: STRING(const STRING &obj) { // c'est la copie du constructeur 
   
   //a[] = new (char (*[100])());
   //*a[] = *obj.a[];
//};

//STRING ::~STRING(void) { // c'est le destructeur 
   //delete a[];
//};

int main() {
  STRING s;
  cout <<s.a<< endl;
  return 0;

}


