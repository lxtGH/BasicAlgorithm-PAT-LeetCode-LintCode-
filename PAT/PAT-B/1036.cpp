#include<cstdio>
int main(){
	int row,col;
 	char c;
  	scanf("%d %c",&col,&c);
  	if(col%2 ==0){
  	row = col/2;
	}
	else if(col%2 != 0){
	row = col/2+1;
	}
	// print the first line
	for(int i=0; i<col;i++){
		printf("%c",c);
	} 
	printf("\n");
	
	for(int i=1;i<row-1;i++){
		for(int j=0;j<col;j++){
			if(j==0 ||j==col-1){
				printf("%c",c);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(int i=0;i<col;i++){
		printf("%c",c);
	} 
	return 0;
}
