#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"
/*1.Create a constructor & Destructor according to its type.   */

/*4.Create a snap_finger (in LL class or in class inherited from LL) to randomly delete half of the node */

int main(int argc, char *argv[])
{  LL A;
   int i;
   NODE *t;

   for(i=1;i<argc;i++) {
     /* modify to argument for cat or dog*/
        if(i%2)   t=new cat;
         else  t=new dog;
         // t=new NODE(atoi(argv[i]));
                       A.add_node(t);
   }
   A.show_all();

   //A.snap_finger(); // kill 1/2 (make size=0)

   A.show_all();

    
}

/* Example output  ./LL 5 1 8 1 6 8 4
adding 1
adding 2
adding 3
adding 4
adding 5
adding 6
adding 7
Node data:7
Node data:6
Node data:5
Node data:4
Node data:3
Node data:2
Node data:1

Node 3 is being deleted
Node 4 is being deleted
Node 1 is being deleted
Node 2 is being deleted

Node data:7
Node data:6
Node data:5


Node 7 is being deleted
Node 6 is being deleted
Node 5 is being deleted
*/