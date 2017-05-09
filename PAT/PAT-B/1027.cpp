#include<stdio.h>
#include<math.h>
/**
本题目一个坑就是每一行打印完了*之后就换行而不是继续打印空格 
*/
int main(){
	int num,count;
	char c;
	scanf("%d %c",&num,&c);
	int half = num/2;
	int mod = num%2;
	int sum=0;
	count = (int)sqrt((num + 1) / 2);
	int numOfprint = 2*count -1; 
	int end = numOfprint-1;
	int start = 0;
	
	for(int i=0;i<count;i++){

		for(int j=0;j<numOfprint;j++){
			if(j>=start&&j<=end)
				printf("%c",c);
			else if(j<start) 
				printf(" ");
			else {
				continue;
			}
		}
		printf("\n");
		if(end==start)
			break;
		end--;
		start++;
	}
	
	for(int i=0;i<count-1;i++){
		end++;
		start--;
		for(int j=0;j<numOfprint;j++){
			if(j>=start&&j<=end)
				printf("%c",c);
			else if(j<start)
				printf(" ");
			else
			{
				continue;
			}
		}
		printf("\n");
		if(end==(numOfprint-1)&start==0){
			break;
		}
	}
	printf("%d",num-(2*count*count)+1);
	return 0;
}
