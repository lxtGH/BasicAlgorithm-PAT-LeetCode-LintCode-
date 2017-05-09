#include<stdio.h>
#include<map>
#include<stack>
using namespace std;
int main(){
	map<int,bool> mp;
	stack<int>stk;
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		int key;
		scanf("%d",&key);
		mp[key]=true;
	} 
	for(map<int,bool>::iterator it = mp.begin();it!=mp.end();it++){
		int key = it->first;
		while(key!=1){
			if(key %2 ==0){
				key = key /2;
			}else {
				key = (3 * key  +1	)/2;
			}
			if(mp[key]){
				mp[key]=false;
			}
		}
	}
	for(map<int,bool>::iterator it = mp.begin();it!=mp.end();it++){
		if(it->second)
			stk.push(it->first);
	}
	while(stk.size()!=1){
		printf("%d ",stk.top());
		stk.pop();
	}
	printf("%d",stk.top());
	stk.pop();
	return 0;
}
