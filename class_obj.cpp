#include <bits/stdc++.h> 
using namespace std;
class greek{
    public:
    string Name;
    int id ;
    void printname();
    void printid();
};
void greek::printname(){
    cout<<"your name is :- "<<Name<<endl;
}
void greek::printid(){
    cout<<"your id is :- "<<id<<endl;
}
int main() { 
      
    greek obj1; 
    cout<<"Enter your name :- ";
    cin>>obj1.Name; 
    obj1.id=15; 
    cout<<"Enter your roll:- ";
    cin>>obj1.id;
    cout << endl; 
    obj1.printname();
    obj1.printid(); 
    return 0; 
} 

