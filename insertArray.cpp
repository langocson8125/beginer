#include "stdio.h"
#include "stdlib.h"
#define MAX 50
void getArray(int a[][MAX], int m, int n){
	for(int i=0;i<m;i++){
		printf("Nhap cac gia tri hang thu %d",i+1);
		for(int j=0;j<n;j++){
			scanf("%d",&[i][j]);
		}
		printf("\n");
	}
}
void printArray(int a[][MAX], int m, int n){
	printf("CAC GIA TRI TRONG MANG\n");
	for(int i=0; i < m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[MAX][MAX], m, n;
	printf("Nhap so hang: ");
	scanf("%d", &m);
	printf("\nNhap so cot: ");
	scanf("%d",&n);
	getArray(a,m,n);
	printArray(a,m,n);
	return 0;
}
