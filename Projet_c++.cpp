// Projet_c++
// Dans ce projet, nous allons implémenter différentes fonctions de la librairie "String". En effet, nous créeons une classe STRING qui contiendra les différentes fonctions 
// souhaitées. 
// Pour ce faire, nous avons divisé le travail en trois parties. Premièrement, l'élève A (CHARFI merieme) s'occupera d'implémenter les fonctions suivantes: copy constructor
// c_str(), size() , clear() , operator=(char) , operator+(const string&, const char*) 
// Deuxièmement, l'élève B ( BENAYOUN Ruth) codera les fonctions suivantes: constructor from a c-string, length() , max_size() , resize(size_t, char) ,operator=(const string&) 
// operator+(const string&, char)
// Finalement, l'élève C (RACHIDI Salma) programmera les fonctions suivantes: destructor, capacity() , empty() , reserve(size_t) , operator=(const char*) , operator+(const string&, const string&)


//création de la classe STRING 
class string{
public: 
  char *a[]; // liste de char
  string();
  string( const string &obj);


}


string :: string (){ //le constructeur 
  char a[] = new (char (*[100])());
  *a[] = "hello world";
}

string::string(const string &obj) { // c'est la copie du constructeur 
   
   a[] = new (char (*[100])());
   *a[] = *obj.a[]; 

string::~string(void) { // c'est le destructeur 
   delete a[];
}



