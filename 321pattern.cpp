#include <iostream>
using namespace std;

int main(){
    int row,col,n;
    cin>>n;
    row=1;

    while(row <=n){
        col=1;
        while (col<=n){
            cout << n-col+1 << "  ";
            col=col+1;
        }
        cout << endl;
        row=row+1;

    }
}