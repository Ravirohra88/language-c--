#include<bits/stdc++.h>
using namespace std; 

void func(int n ){
    if (n<1 ){
        return ;
    }
   func(n-1);
   cout<< n<< endl;
}
int main (){
func(3);
}