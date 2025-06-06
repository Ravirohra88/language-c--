#include<bits/stdc++.h>
using namespace std; 
void   func ( int i , int n ){
if (n > i){
    return;
}
cout << i<<endl ;
func(i-1,n);
}
int main (){
    int n ; 
cin >>  n;
func(n,1);
}