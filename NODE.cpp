#include <iostream>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"

NODE::NODE(int x){
  data = x;
  next = NULL;
  cout<<"adding NODE "<< x<<endl;
}
NODE:: ~NODE(){
  cout<<"Node "<<data<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
  return next;
}
void  NODE:: show_node(){
  cout<<"Node data:"<<data<<endl;
}
void NODE::insert(NODE*& x){
  x->next = this;
}

cat::cat(int a, int b):NODE(b){
  size = a;
  cout<<"adding cat "<< a<<endl;
}
cat:: ~cat(){
  cout<<"cat "<<size<<" is being deleted"<<endl;
}

dog::dog(float a, int b):NODE(b){
  height = a;
  cout<<"adding dog "<< a<<endl;
}
dog:: ~dog(){
  cout<<"dog "<<height<<" is being deleted"<<endl;
}