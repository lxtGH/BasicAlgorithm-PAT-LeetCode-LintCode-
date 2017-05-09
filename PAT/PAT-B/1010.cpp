#include<iostream>
using namespace std;
int main(){
	char c ;
	int n,m;
	bool first = true;
	while(cin>>n>>m){ //read the input 
		if(first && m!=0){
			cout<< m*n <<" "<<m-1;
			first = false;
		}else if(m!=0){
			cout << " "<<m*n<<" "<<m-1;
		}
		if(first == true){
			cout<<"0 0";
		}
	}
	
	return 0;
} 
