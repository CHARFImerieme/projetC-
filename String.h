
#include <stddef.h> // size_t

//création de la classe String 
class String{ 
public: 
  char* get_str();

  // //------- VARIABLES PARTIE 1: ÉTUDIANT A -------
  String();
  String(const String &obj);
  String(const char* b);
  char* c_str();
  int Size();
  String& operator=(char b);
  void clear();
  


  // //------- VARIABLES PARTIE 2: ÉTUDIANT B -------
  void cString(const char* b);
  int longueur(char *str);
  float tailleMax();
  void resizeChar(int n, char a);
  void operatorPlus(char *a, char *str);
  String& operator=(const String& a);  

   // //------- VARIABLES PARTIE 3: ÉTUDIANT C -------
  bool empty();
  int capacity();
  ~String();
  void reserve(size_t st);
  String& operator=(const char* b);
  friend String operator + (const String& str1, const String& str2);
  const int default_capacity = 1;
  char *str;
  int length;
  int capacity_ = default_capacity;
};

//void operator+(const String& obj, const char* b);
