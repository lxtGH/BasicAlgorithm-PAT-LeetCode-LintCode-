#include<stdio.h>
const int maxn = 1000000;
int prime[maxn],pNum=0;
bool p[maxn] = {0};
//É¸·¨ÇóËØÊı 
void Find_Prime(){
	for(int i=2;i <maxn;i++){
		if(p[i]==false){
			prime[pNum++]=i;
			for(int j = i+i ;j<maxn;j+=i){
				p[j]=true;
			}
		}
	}
	
}
int main(){
	int number;
	Find_Prime(); 
	scanf("%d",&number);

	int count = 0;
	
	for(int i=1;prime[i]<number;i++){
		if(prime[i+1]-prime[i]==2){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
