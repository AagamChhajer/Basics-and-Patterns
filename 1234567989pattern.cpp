#include <iostream>
using namespace std;

int main(){
    int row,col,n,a;
    cin>>n;
    row=1;
a=1;
    while(row <=n){
        col=1;
        
        while (col<=n){
            
            cout << a << "  ";
            a=a+1;
            col=col+1;
        }
        cout << endl;
        row=row+1;

    }
}





