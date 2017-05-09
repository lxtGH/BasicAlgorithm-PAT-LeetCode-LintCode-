#include<stdio.h>

int main(){
	int num; 
	scanf("%d",&num);
	int B = num /100; 
	int S = (num %100) /10;
	int G =  num %10;
	while(B!=0){
		printf("B");
		B--;
	}
	while(S!=0){
		printf("S"); 
		S--;
	}
	int i=1;
	while(G!=0){
		
		printf("%d",i);
		i++;
		G--;
	}
	return 0;
} 
