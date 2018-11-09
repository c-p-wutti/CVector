#include <stdio.h>
#include <stdlib.h>
#include "WVector.h"
#include <time.h>

int calcAddTest(w_vector v1, w_vector v2, int prop_ans[], int dim);
void printTestResult(int test_nr, int passed, w_vector v1, w_vector v2);
void testAdd();

int main() {

  w_vector ret;
  w_vector v1;
  w_vector v2;
 

  int array[3] = {1,2,3};
  v1.loe = array;
  v1.dim = 3;

  int array2[3]={3,2,1};
  v2.loe = array2;
  v2.dim = 3;


 wv_add(&ret, &v1, &v2);
 wv_print(&ret);

 int sol[3] = {4,4,3};

 int ret2 = calcAddTest(v1, v2, sol, 3);

 testAdd();

 printf("ret: %d", ret2);

  printf("\n\n Program finished running! \n");
}

void testAdd(){

 int i;
 int j;
 int l;

 time_t t;
 srand((unsigned) time(&t));

 w_vector v1;
 w_vector v2;

 for(i=0; i<10; i++){
  int a1[i];
  int a2[i];
   for(j=0; j<i; j++){
    a1[j]=rand() % 15000;
    a2[j]=rand() % 15000;
   }
  v1.loe = a1;
  v1.dim = i;
  v2.loe = a2;
  v2.dim = i;
  int res[i];

   for(l=0;l<i; i++){
     res[l] = a1[l]+a2[l];
   }

  int suc = calcAddTest(v1,v2,res, i);
  printTestResult(1, suc, v1,v2);
 }

}

int calcAddTest(w_vector v1, w_vector v2,  int prop_ans[], int dimp){
 int passed = 1;
 w_vector ret;

 wv_add(&ret, &v1, &v2);

 int i;
 for(i=0;i<dimp;i++){
  if(ret.loe[i]!=prop_ans[i]) 
    passed = 0;
 }

 return passed;
}

void printTestResult(int test_nr, int passed, w_vector v1, w_vector v2){
 if(passed) printf("%d, passed \n", test_nr);
 else       printf("%d, failed \n", test_nr); 
}
