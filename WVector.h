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
