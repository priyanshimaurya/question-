#include<iostream>
using namespace std;
class loop{
    public:
    int id;
    ~loop() 
    { 
        cout << "Destructor called for id: " << id <<endl;  
    } 
};
int main()  
  { 
    loop obj1; 
    obj1.id=7; 
    int i = 0; 
    while ( i < 5 ) 
    { 
        loop obj1;
        obj1.id=i; 
        i++;         
    } 
  
    return 0; 
  }