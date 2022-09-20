#include <iostream>
using namespace std;

int main(){

    int row,col,n;
    cout << "enter the no:" << endl;
    cin >> n;
     row = 1;
     while (row <= n){
        col = 1;
        
        while (col <=n){
            int star = n-row+1;
            while (star){
            cout << "*";
            star = star -1;}
            col = col +1;
        cout << endl;
        row = row + 1;}}
        

     }
   
//****
//***
//**
//*