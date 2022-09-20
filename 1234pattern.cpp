#include <iostream>
using namespace std;

int main(){

    int row,column,c;
cout << "enter the no" << endl;
cin >> c ;
row =1;
    while (row <= c){
        column=1;
        while (column <=c){
            cout << column;
            column  = column +1;
        }
        cout << endl;
        row = row +1;


    }
}