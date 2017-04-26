#include "stdio.h"
#include "stdlib.h"

#define MAX 1

void getArray(int a[][MAX], int m, int n){
	for(int i=0;i<m;i++){
		printf("Nhap cac gia tri hang thu %d: ",i+1);
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
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
void checkPrimeArray(int a[][MAX],int m, int n){
	int result;
	for(int i=0;i<m;i++){
		for(int j=0;i<n;j++){
			for(int e=2;e<a[i][j];e++){
				if(a[i][j] <= 1 || a[i][j] % e==0) {
					result = 0;
					break;
				}
			}
		}
	}
	result=1;
	if(result==0) printf("ko");
	else printf("co");
}
int main(){
	int a[MAX][MAX], m, n;
	saiHang:
	printf("\nNhap so hang: ");
	scanf("%d", &m);
	if(m <= 0){
		printf("Error!!! So hang phai lon hon 0, nhap lai");
		goto saiHang;
	}
	saiCot:
	printf("\nNhap so cot: ");
	scanf("%d",&n);
	if(n <= 0){
		printf("Error!!! So cot phai lon hon 0, nhap lai");
		goto saiCot;
	}
	getArray(a,m,n);
	printArray(a,m,n);
	checkPrimeArray(a,m,n);
	return 0;
}
