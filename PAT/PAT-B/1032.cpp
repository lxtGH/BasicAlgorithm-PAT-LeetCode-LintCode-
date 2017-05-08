#include<cstdio>
const int maxn = 100010;
int school[maxn]={0};
int main(){
int n,schID,score;
scanf("%d",&n);
for(int i=0;i<n;i++){
  scanf("%d%d",&schID,&score);
  school[schID]+=score;
}
int k=1,Max=-1;
for(int i=1;i<=n;i++){
  if(school[i]>Max)
  {
    Max=school[i];
    k=i;
  }
  
}
printf("%d %d\n",k,Max);
return 0;


}
