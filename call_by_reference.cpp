// call by reference means the value is called by address  not by value 
//Syntax :- 
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=20;
    cout<<"Before swaping value is :- "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swpaing value is :- "<<x<<" "<<y<<endl;
    return 0;
}