#include <stddef.h> // size_t
//création de la classe String 
class String{ 
public: 
  char* get_str();

  // //------- VARIABLES PARTIE 1: ÉTUDIANT A -------
  String();
  String (const char* b);
  char* c_str();
  int size();
  String& operator=(char b);
  void clear();


  // //------- VARIABLES PARTIE 2: ÉTUDIANT B -------
  String(const String &obj);
  void cString(const char* b);
  int longueur(char *str);
  float tailleMax();
  void resizeChar(int n, char a);
  void operatorPlus(char *a, char *str);
  void operatorEgal(char *a);  

   // //------- VARIABLES PARTIE 3: ÉTUDIANT C -------
  bool empty();
  int capacity();
  ~String();
  void reserve(size_t st);
  String& operator=(const char* b);
  const int default_capacity = 1;
  char *str; // liste de char
  int length;
  int capacity_ = default_capacity;
};

String operator+(const String& obj, const char* b );
