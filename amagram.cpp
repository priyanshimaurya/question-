#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int sort(char na[]){
    int temp,i,j,n;
    n=strlen(na);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(na[i]>na[j]){
                temp=na[i];
                na[i]=na[j];
                na[j]=temp;
            }
        }
    }
    return temp;
}
int main(){
    char c1[100],c2[100];
    cout<<"Enter char 1:- ";
    cin>>c1;
    cout<<"Enter char 2:- ";
    cin>>c2;
    sort(c1);
    sort(c2);
    if(strcmp(c1,c2)==0){
        cout<<"this is anagram";
    }
    else{
        cout<<"This is not anagram";
    }
    return 0;
}