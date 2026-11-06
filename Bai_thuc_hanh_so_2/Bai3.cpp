	#include<stdio.h>
	#include<stdlib.h>
	
	typedef struct {
		char hoten [30];
		int maSV;
		float d1, d2 , d3;
	}Data;
	
	
	void nhap (Data *ds , int n){
		for ( int i = 0 ; i < n ; i++){
			scanf("%s%d%f%f%f", (ds + i)->hoten , &(ds + i)->maSV , &(ds + i)->d1, &(ds + i)->d2, &(ds + i)->d3);
		}
	}
	void in ( Data *ds , int n ){
		for ( int i = 0 ; i < n ; i++){
			printf("%s %d %.2f %.2f %.2f\n", (ds + i)->hoten, (ds + i )->maSV , (ds + i)->d1 , (ds + i)->d2 , (ds + i)->d3);
		}
	}
	int main(){
		Data *ds;
		int n;
		scanf("%d", &n);
		ds = (Data*)malloc(n * sizeof(Data));
		
		if ( ds == NULL){
			printf("Khong du bo nho!");
			return 1;
		}
		nhap(ds, n);
		printf("\n");
		in(ds,n);
		free(ds);
		
	}
