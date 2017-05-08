#include<stdio.h>
#include <stack>
#include<string.h>
using namespace std;

char * array[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

/**
method 1 use recursive method
**/
  void zqd(int sum){

    int p;

    char * kirby[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    p = sum % 10;

    if (sum > 9){

      sum /= 10;

      zqd(sum);

      printf(" ");

    }

    printf("%s",kirby[p]);

  }
  /**
  method 2 use the stack
  **/
  void printTheResult(int sum){
  	stack <int> st;
	int position;
	while(sum>9){
		position = sum % 10;
		st.push(position);
		sum = sum /10;
	}
	st.push(sum);
	while(st.size()>1){
		position = st.top();
		st.pop();
		printf("%s",array[position]);
		printf(" ");
	}
	position = st.top();
	printf("%s",array[position]);
  } 

  int main(){

    int sum = 0;

    char n;

    while ((n = getchar()) != '\n'){

      sum += n - '0'; //get the sum of the number

    }

//    printf("%d",sum);

//   zqd(sum);
	printTheResult(sum);
    return 0;

  }
