#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int milage;
    void driving(int distance){
        milage=milage+distance;
    }
    void show_data(){
        cout<<"model of a car is :- "<<model<<endl;
        cout<<"brand of a car is :- "<<brand<<endl;
        cout<<"milage of car is :- "<<milage<<" miles " <<endl;
    }
};
int main(){
    car car1;
    car1.model="Honda";
    car1.brand="accrod";
    car1.milage=20;
    car1.show_data();
    cout<<" "<<endl;
    car car2;
    car2.model="splender";
    car2.brand="abc";
    car2.milage=21;
    car2.show_data();
    
    cout<<" "<<endl;

    car car3;
    car3.model="BMW";
    car3.brand="accrod";
    car3.milage=30;
    car3.show_data();
    return 0;
}