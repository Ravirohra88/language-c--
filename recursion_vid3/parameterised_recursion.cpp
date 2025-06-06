// question : sumation of first n numbers.
#include<bits/stdc++.h>
using namespace std;

void f(int i , int sum  ){
    if (i<0){
        cout << sum ;
        return ;
    }
    f(i-1,sum+i);
}
int main (){
    int i ;
    cin >> i ;
    f(i, 0);
}