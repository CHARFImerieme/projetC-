#include <stddef.h> // size_t
//création de la classe String 
class String{ 
public: 
  String();
  String(const String &obj);
  String (const char* b);
  char * get_str();
  bool empty();
  int capacity();
  ~String();
  void reserve(size_t st);
  operator=(const char* b);

  const int default_capacity = 1;
  char *str; // liste de char
  int length;
  int capacity_ = default_capacity;
};