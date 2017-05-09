#include<cstdio>
#include<algorithm>
using namespace std;


bool cmp(int a,int b){
	
	return a>b;
} 

void toArray(int n,int num[],int length){
	for(int i = 0 ;i <length;i++){
		num[i] = n%10;
		n/=10;
	}
}
int toNum(int num[],int length){
	int sum = 0;
	for(int i = 0;i<length;i++){
		sum = sum *10 +num[i];
	}
	return sum;
}

int main(){
	int n,MAX,MIN;
	scanf("%d",&n);
	int num[4];
	while(1){
		toArray(n,num,4);
		sort(num,num+4); //sort to get the low number 
		MIN=toNum(num,4); 
		sort(num,num+4,cmp);  // sort to get the high number
		MAX=toNum(num,4);
		n=MAX-MIN;
		printf("%04d - %04d = %04d\n",MAX,MIN,n); //get the difference
		if(n==0|| n==6174)
			break;
	}
	return 0;
}

