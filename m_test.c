#include <stdio.h>
#include "WVector.h"

int main() {

  w_vector ret;
  w_vector v1;
  w_vector v2;
 

  int array[3] = {1,2,3};
  v1.loe = array;
  v1.dim = 3;

  v2.loe = array;
  v2.dim = 3;

// wv_add(&ret, &v1, &v2);

 wv_print(&v1);

  printf("\n\n Program finished running! \n");
}
