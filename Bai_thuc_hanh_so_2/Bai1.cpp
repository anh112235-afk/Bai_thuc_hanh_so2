#include<stdio.h>
#include<stdlib.h>

void nhap(float *a , int n){
	int i;
	for (i = 0 ; i < n ; i++){
		scanf("%f", &a[i]);
	}
}
void in(float *a , int n){
	for ( int i = 0 ; i < n ; i++){
		printf("%.2f ", a[i]);
	}
}
int main(){
	float *ptr;
	int n, i;
	scanf("%d", &n);
	ptr = (float*)calloc(n , sizeof(float));
	if ( ptr == NULL){
		printf("Chua cap bo nho!");
		exit(0);
	}
	else {	
		nhap(ptr,n);
	}
	printf("Du lieu mang:\n");
	in(ptr , n);
}
