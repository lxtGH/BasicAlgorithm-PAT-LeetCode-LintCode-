#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/*
	gcd method 
*/
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}

int main()
{
    vector<int> vec;
    int n1,m1,n2,m2;
    int k;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    if(n1*m2>n2*m1)
    {
       swap(n1,n2);
       swap(m1,m2);
    }
    for(int i=1;i<k;i++)
    {
        if((i*m1>n1*k)&&(i*m2<n2*k))  // if in the between of the two numbers
        {
            if(gcd(k,i)==1) // check the option 
            {
                vec.push_back(i);
            }
        }
    }
    int flag=1;
    for(size_t i=0;i<vec.size();i++)
    {
        if(flag==0)
        {
            printf(" ");
        }
        flag=0;
        printf("%d/%d", vec[i],k);
    }
    
    return 0;
}
