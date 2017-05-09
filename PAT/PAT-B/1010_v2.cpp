#include<stdio.h>
#include<string.h>
int main(){
	int fir,sec;
	char n;
	scanf("%d %d",&fir,&sec);
	n=getchar();
	if(sec==0 && (int)n=='\n'){
		printf("0 0");
	}else{
		printf("%d %d",fir*sec,sec-1);
	}
	while(n!='\n'){
		scanf("%d %d",&fir,&sec);
		n = getchar();
		if(sec ==0){
		//printf(" 0",sec);	
		}else{
		printf(" %d %d",fir*sec,sec-1);	
		}

		
	}
	return 0;
}



