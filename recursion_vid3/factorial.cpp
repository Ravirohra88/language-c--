#include<bits/stdc++.h>
using namespace std;

int func (int i ){
    if (i == 0 ) return 1 ; 
    return  i *  func (i- 1);
}
int main (){
  cout<< func(10);                                       
}