#include<iostream>
using namespace std;
int main(){
    int col,row,i,j;
    cout<<"Enter row :- ";
    cin>>row;
    cout<<"Enter column :- ";
    cin>>col;
    int matrix[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix is\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}