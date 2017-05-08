/*
	float point number is hard to compare by using the operater like "==" or ">="
	In this case, we define a small number 1e-8 to calculate the difference between two different float number
	You can see a float number like b is in range of  (b-e,b+e) where e is a very small number
*/
#include<stdio.h>
#include<math.h>
const double eps = 1e-8;
/**
	use more "()" to avoid error when using "define" key word
**/
#define Equ(a,b) ((fabs((a)-(b)))<(eps))   //  a is in range of (b-eps,b+eps)
#define More(a,b) (((a)-(b))>(eps))   // 
#define Less(a,b)  (((a)-(b))<(-eps))  // 
#define MoreEqu(a,b)  (((a)-(b))>(-eps))  //
#define LessEqu(a,b) (((a)-(b))<(eps))  // a is in right side of (b-eps,b+eps)
const double Pi = acos(-1.0); // how to define PI  
int main(){
	double db = 1.23;
	if(Equ(db,1.23)){
		printf("true");
	}else{
		printf("false");
	}
	printf("\n");
	if(Less(db,1.2300001)){
		printf("true");
	}else{
		printf("false");
	}
	return 0;
}
