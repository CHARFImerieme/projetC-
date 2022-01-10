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
  int length;
  STRING();
  STRING(const STRING &obj);
  char * get_a();
  
  //~STRING();
  STRING (const char* b);

};


STRING :: STRING (){ //le constructeur
  a = new char[100];
  length = 0;
}

STRING :: STRING(const char* b){ // constructor from a c-string, b finit par 0
	a = new char[100];
  length = 0;
  int i = 0;
  while(b[i] != '\0'){
    length ++;
    i++;
  }
  for(int i=0; i<length;i++){
    a[i]=b[i];
    }
  
};

STRING :: STRING(const STRING &obj) { // c'est la copie du constructeur 
   
    a = new char[100];
    length = obj.length;
    for(int i=0; i<length;i++){
    a[i]= obj.a[i];
    }
};

char * STRING::get_a(){
  return a;
}
//STRING ::~STRING(void) { // c'est le destructeur 
   //delete a[];
//};

int main() {
  STRING s;
  
  STRING x("wesh");
  STRING t(x);
  cout <<s.a<< endl;
  cout <<t.a<<endl;
  cout <<x.a<<endl;
  return 0;

}


