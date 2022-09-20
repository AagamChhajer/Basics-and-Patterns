#include <iostream>
using namespace std;

int main(){

    int row,col,space,n;
    cout << "Enter the number:" << endl;
    cin >> n;

    row = 1;

    while (row <=n){
        space = n-row;
        col = 1;
        while (space >0){
            cout << " ";
            space = space -1;
            col = col + 1;
        }
        
        while (col <= n){
            cout << row ;
            col=col+1;
        }
       
        cout << endl;
        row = row+1;
    }
}