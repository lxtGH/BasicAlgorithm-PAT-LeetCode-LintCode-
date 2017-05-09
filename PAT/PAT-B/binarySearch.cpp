#include <iostream>
using namespace std;

#define MAXLEN 50
typedef int KeyType;

typedef  struct                     
{ KeyType  key;                                             
} elementType;  

typedef  struct
{ elementType   data[MAXLEN+1]; 
  int   len;
} SeqList;                      

void creat(SeqList &L)
{ int i;
  cin>>L.len;
  for(i=1;i<=L.len;i++)
     cin>>L.data[i].key;   
}
int  binSearch(SeqList T, KeyType k);
int main () 
{  SeqList L;  KeyType k;
   creat(L);
   cin>>k;
   int pos=binSearch(L,k);
   if(pos==0) cout<<"NOT FOUND"<<endl;
   else cout<<pos<<endl;
   return 0;
}
int binSearch(SeqList T, KeyType k){
	int right = T.len;
	int half; 
	int left = 1;
	while(left <= right){
		half = (left+right)/2;
		if(T.data[half].key==k)
		{
			return half;
		}
		else if(T.data[half].key<k)
		{
			left = half + 1;
		}else if(T.data[half].key>k)
		{
			right = half - 1;
		}
	}
	return 0;
} 
