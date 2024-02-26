#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double principal=10000,rate=5,time=2;
    double amt=principal*((pow((1+rate/100),time))); 
    double com_int=amt-principal;
    cout<<com_int;
    return 0;
}