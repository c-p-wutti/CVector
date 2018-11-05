#include <stdlib.h>
#include <stdio.h>

//vector with list of entries and the dimension
typedef struct w_vector {
	int *loe;
	int dim;
} w_vector;

//printing a vector in a nice form to look at
void wv_print(w_vector *v){
	int i;
	for(i=0; i < v->dim - 1; i++){
		if(i==0) printf("( %d ) \n", v->loe[i]);
		printf("| %d | \n", v->loe[i]);
	}
	printf("( %d ) \n", v->loe[i]);
}

//adding two vectors and returning the sum
w_vector * wv_add(w_vector *ret, w_vector *v1, w_vector *v2){
	int i;
	ret->dim = v1->dim;
	int loe2[ret->dim];
	ret->loe = loe2; 

	for(i=0; i < v1->dim; i++){
		ret->loe[i] = v1->loe[i] + v2->loe[i];
	}
	return 	ret;
}
