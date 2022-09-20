#include <iostream>
using namespace std;

int main(){

    int row,col,space,n;
    cout << "Enter the number:" << endl;
    cin >> n;

    row = 1;

    while (row <=n){
        space = row-1;
        col = 1;
        while (space >0){
            cout << " ";
            space = space -1;
            col = col + 1;
        }
        
        while (col <= n){
            cout << col ;
            col=col+1;
        }
       
        cout << endl;
        row = row+1;
    }
}