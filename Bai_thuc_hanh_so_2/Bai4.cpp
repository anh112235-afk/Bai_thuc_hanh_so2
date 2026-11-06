#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct {
	char hoten[30];
	int masv;
	float d1,d2,d3;
}Data;
typedef struct tagNode{
	Data infor;
	struct tagNode *link;
}Node;
typedef struct {
	Node *pHead;
	Node *pTail;
	int spt;
}LList;
void taods(LList *l){
	l->pHead = NULL;
	l->pTail = NULL;
	l->spt = 0;
}
bool emptyList(LList l){
	return (l.spt == 0);
}


void themnode(LList *l , Data x){
	Node *pp;
	pp = (Node*)malloc(sizeof(Node));
	if (pp == NULL) return;
	pp->infor = x;
	pp->link = NULL;
	if(emptyList(*l)){
		l->pHead = pp;
		l->pTail = pp;
	}
	else {
		pp->link = l->pHead;
		l->pHead = pp;
	}
	l->spt++;
}

void nhap (LList *l , int n){
	Data x;
	
	for ( int i = 0 ; i < n ; i++){
		scanf("%s%d%f%f%f", x.hoten , &x.masv , &x.d1, &x.d2, &x.d3);
		themnode(l,x);
	}
}
void in ( LList l){
	Node *p = l.pHead;
	while ( p != NULL){
		printf("%s %d %.2f %.2f %.2f\n", p->infor.hoten , p->infor.masv, p->infor.d1, p->infor.d2, p->infor.d3);
		p = p->link;
	}
}
int main(){
	LList L;
	int n;
	taods(&L);
	scanf("%d", &n);
	nhap(&L , n);
	in (L);
}
