#include <stdio.h>

void suma(int *a, int b){}
	*a = *a + b;
}
void resta(int *a, int b ){
	*a = *a - b;
}
void sumav(int *a, int *b, int n){
	int i;
	for(i=0; i<n; i++){
		a[i] = a[i] + b[i]; 
	}
}
void restav(int *a, int *b, int n){
	int i;
	for(i=0; i<n; i++){
		a[i] = a[i] - b[i]; 
	}
}

void multescalar(int *a, int *b, int *c, int n){
	int i;
	for(i=0; i<n; i++){
		*a = *a + (b[i] * c[i]); 
	}
}
