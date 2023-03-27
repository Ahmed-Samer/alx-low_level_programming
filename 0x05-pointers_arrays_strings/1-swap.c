#include "main.h"
#include <stdio.h>
void swap_int(int *a, int *b){
	
	int number = *a ;
	 *a = *b ;
	 *b = number ;
	printf("a=%d, b=%d\n", *a, *b);




}
