#include<iostream>
using namespace std;
class student{
    
    public:
    string name;
    int roll;
    int age;
    void printname();
    void printage();
    void printroll();
};
void student::printname(){
    cout<<"Your name is  :- "<<name<<endl;
}
void student::printage(){
    cout<<"Your age is  :- "<<age<<endl;
}
void student::printroll(){
    cout<<"Your roll is  :- "<<roll<<endl;
}

int main(){
    student s1;
    cout<<"Enter your name :- ";
    cin>>s1.name;
    cout<<"Enter your age :- ";
    cin>>s1.age;
    cout<<"Enter your roll :- ";
    cin>>s1.roll;
    s1.printname();
    s1.printage();
    s1.printroll();

    return 0;
}