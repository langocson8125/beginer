#include "stdio.h"

int main(){
	int a,b,count=0,result;
	scanf("%d %d",&a,&b);
	for(a ; a <= b; a++){
		for(int i = 2; i < a; i++){
			if( a % i == 0){
				result = 0;
				break;
			}
			else result = a;
		}
		if(result){
			int resultTmp = 0;
			while(result){
				resultTmp = resultTmp * 10 + result % 10;
				result /= 10;
			}
			if(a == resultTmp){ 
				count++;
			}
		} 
	}
	printf("%d",count);
	return 0;
}
