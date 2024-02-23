#include<iostream>
using namespace std;
int main(){
    int row1,col1,j,i,row2,col2;
    cout<<"Enter size of row:- ";
    cin>>row1;
    cout<<"Enter size if coloumn :- ";
    cin>>col1;
    int matrix1[row1][col1];
    cout<<"Enter element :- "<<endl;
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<" first matrix element :\n";
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Second matrix "<<endl;
    cout<<"Enter size of row:- ";
    cin>>row2;
    cout<<"Enter size if coloumn :- ";
    cin>>col2;
    int matrix2[row2][col2];
    cout<<"Enter element :- "<<endl;
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<" first matrix element :\n";
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}