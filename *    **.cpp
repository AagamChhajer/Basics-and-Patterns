#include <iostream>
using namespace std;

int main(){

    int row,col,n;
    cout << "enter the no:" << endl;
    cin >> n;
     row = 1;

    while (row <=n){

    int space = n - row;
     while (space){
        cout << "  ";
        space = space - 1;
     }
        col = 1;

        while (col <= row){

         cout <<  "*";
         col = col+1;
         
    }
    cout << endl;
    row =row +1;}
}