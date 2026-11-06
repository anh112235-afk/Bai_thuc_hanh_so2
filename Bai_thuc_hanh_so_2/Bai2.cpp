#include<stdio.h>
#include<stdlib.h>

void nhap ( float **a , int n , int m){
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < m; j++){
			scanf("%f", &a[i][j]);
		}
	}
}
void in (float **a , int n , int m){
	for(int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < m ; j++){
			printf("%.2f ", a[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int h , c;
	printf("Nhap so hang va so cot:\n");
	scanf("%d%d", &h , &c);
	
	float **ma = (float**)malloc(h * sizeof(float*));
	if (ma == NULL){
		printf("Khong du bo nho!");
		return 1;
	}
	for (int i = 0 ; i < h ; i++){
		ma[i] = (float*)malloc(c * sizeof(float));
	}
	nhap(ma, h, c);
	
	
	printf("Ma tran vua tao:\n");
	in(ma, h,c);
	free(ma);
	return 0;
}
