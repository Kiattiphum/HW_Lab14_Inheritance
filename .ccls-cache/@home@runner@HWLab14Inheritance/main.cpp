#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"

/*1.Create a constructor & Destructor according to its type.*/

/*4.Create a snap_finger (in LL class or in class inherited from LL) to randomly delete half of the node */

int main(int argc, char *argv[]){
// 1)ชนิด cat/dog 2)size/height 3) size ของ Node
  LL A;
  int i;
  NODE *t;
  string strTemp;
  for(i=1;i<argc;i+=3){
  /*
  argv[i] is type
  argv[i+1] is sub class data
  argv[i+2] is size of node
  */
    strTemp = argv[i];
    if(strTemp == "cat"){
      t = new cat(atoi(argv[i+1]),atoi(argv[i+2]));
      //cout<<"hi"<<endl;
    }
    else if(strTemp == "dog"){
      t = new dog(atof(argv[i+1]),atoi(argv[i+2]));
      //cout<<"hoho"<<endl;
    }
    A.add_node(t);
  }
  cout<<"============================"<<endl;
  A.show_all();
  cout<<"============================"<<endl;
  //A.snap_finger(); // kill 1/2 (make size=0)
  A.show_all();
  cout<<"============================"<<endl;

  return 0;
}