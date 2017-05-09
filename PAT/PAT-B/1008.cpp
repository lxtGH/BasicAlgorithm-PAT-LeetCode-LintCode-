
#include<stdio.h>
#include<stdlib.h>
	int main(){

		int N,K;

		scanf("%d %d",&N,&K);

		K %= N;  // to avoid the repeate move 

		int array[N];

		for (int i = 0;i < N;i++){

			scanf("%d",&array[i]);

			if (i >= N - K){

				printf("%d ",array[i]);

			}

		}

		for (int i = 0;i < N - K;i++){
			if (i != N - K - 1){

				printf("%d ",array[i]);

			}else{

				printf("%d",array[i]);

			}

		}
		system("pause");
		return 0;

	}
