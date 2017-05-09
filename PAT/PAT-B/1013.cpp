#include<stdio.h>
const int max =1000000; //筛法求素数的坏处之一，若测试数据的范围过大问题 
int prime[max]; // store the prime number list
int prime_count=0; //record the prime_count
bool P_number[max]={false};//  boolean array to record each number; 

/*
find the prime
*/
void findPrimeNum(int n){
	for(int i=2;i<max;i++){
		if(P_number[i]==false){
			if(prime_count<=n)
			prime[prime_count++]=i;
			else
			break;
			for(int j=i *2;j<max;j+=i){
				P_number[j]=true;
			}
		}
	}
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	findPrimeNum(n);
	int temp = 1;
	int count = 0;
	for(int i=m;i<=n;i++){
		printf("%d",prime[i-1]);
		count++;
		if(count %10!=0 && i<n) printf(" ");
		else printf("\n");
	}	
			
}
