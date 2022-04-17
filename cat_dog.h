//#ifndef cat_dog_h
//#define cat_dog_h

class cat:public NODE{
  int size;
public:
  void show_node(){
    cout<<"Meaw\t\t"<<size<<"\t";
    NODE::show_node();
  }
  cat(int,int);
  ~cat();
};

class dog:public NODE{
  float height;
public:
  void show_node(){
    cout<<"Hong Hong\t"<<height<<"\t";
    NODE::show_node();
  }
  dog(float,int);
  ~dog();
};