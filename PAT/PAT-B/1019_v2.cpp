//C/C++实现
//by http://www.jianshu.com/p/52140a5704e6s 
//其中的坑很多，尤其是字符串末尾的部分。 
#include <iostream>
#include <algorithm>

using namespace std;

int compare(const int &a, const int &b){
    return a>b;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n % 1111 == 0){
        printf("%d - %d = 0000\n", n, n);
        return 0;
    }
    else{
        int tmp = n;
        while(true){
            char c[5] = {'0','0','0','0','\0'};
            int a, b;
            for(int i = 3; tmp != 0; i--){
                c[i] = (tmp % 10) + 48;
                tmp /= 10;
            }
            sort(c, c + 4, compare);
            a = (c[0] - 48) * 1000 + (c[1] - 48) * 100 + (c[2] - 48) * 10 + (c[3] - 48);
            printf("%s - ", c);
            sort(c, c + 4);
            b = (c[0] - 48) * 1000 + (c[1] - 48) * 100 + (c[2] - 48) * 10 + (c[3] - 48);
            printf("%s = ", c);
            tmp = a - b;
            printf("%04d\n", tmp);
            if(tmp == 6174){
                break;
            }
        }
    }
    return 0;
}

