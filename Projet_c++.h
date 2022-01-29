//création de la classe String 
class String{ 
public: 
  String();
  String(const String &obj);
  String (const char* b);
  char * get_str();
  void empty();

  ~String();

//protected:
  char *str; // liste de char
  int length;
  int capacity;
  const int default_capacity = 100;
};