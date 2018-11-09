#include <stdlib.h>
#include <stdio.h>

typedef struct w_vector {
	int *loe;
	int dim;
} w_vector;

void wv_print(w_vector *v){
	int i;
	for(i=0; i < v->dim - 1; i++){
		if(i==0)  printf("( %d ) \n", v->loe[i]);
		else printf("| %d | \n", v->loe[i]);
	}
	printf("( %d ) \n", v->loe[i]);
}

w_vector *wv_add(w_vector *ret, w_vector *v1, w_vector *v2){
	int i;
	ret->dim = v1->dim;
	int loe2[ret->dim];
	ret->loe = loe2; 

	for(i=0; i < v1->dim; i++){
		int a = v1->loe[i];
		int b = v2->loe[i];
		ret->loe[i] = a + b;
}
	return 	ret;
}

w_vector *wv_subtract(w_vector *ret, w_vector *v1, w_vector *v2){
  int i;
  ret->dim = v1->dim;
  int loe2[ret->dim];
  ret->loe = loe2;

  for(i=0; i < v1->dim; i++){
   int a = v1->loe[i];
   int b = v2->loe[i];
   ret->loe[i] = a - b;
  }
  return ret;
}
