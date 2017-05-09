#include<stdio.h>

#include<string.h>

	int main(){

		int N;

		scanf("%d",&N);

		char name[N][11];

		char grade[N][11]; 

		int maxi = 0;

		int mini = 0;

		int temp;

		int max = -1;

		int min = 101;

		for (int i = 0;i < N;i++){

			scanf("%s %s %d",name[i],grade[i],&temp);

			if (temp > max){

				max = temp;

				maxi = i;

			}

			if (temp < min){

				min = temp;

				mini = i;

			}

		}

		printf("%s %s\n",name[maxi],grade[maxi]);

		printf("%s %s\n",name[mini],grade[mini]);

		return 0;

	}
