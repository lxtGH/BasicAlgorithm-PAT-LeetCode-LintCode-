#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <math.h>
#define MAXN 100000
int a[MAXN];
int isPrime(int num);
int main()
{
    int num;
    scanf("%d",&num);
    memset(a,0,MAXN);

    int i,cnt1 = 2,cnt2 = 0;
    a[2] = 2;
    for(i = 3; i <= num; i++){
        if(isPrime(i)){
            cnt1++;
            a[cnt1] = i;
            if((a[cnt1]-a[cnt1-1])== 2){
                cnt2++; 
            }
        }
    }
    printf("%d",cnt2);
    return 0;
}

//ÅÐ¶ÏÊÇ·ñÎªËØÊý
int isPrime(int num){
    int flag = 1;
    int temp = sqrt(num);
    int i;
    for(i = 2; i <= temp; i++){
        if(num % i == 0) flag = 0;
    }
    return flag;
}
