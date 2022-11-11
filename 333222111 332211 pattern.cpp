#include <iostream>
using namespace std;
int main(){
    int row,col,n;
    cin >> n;
    for(row = 1;row <=n ; row++){
       col = n-row+1;
       int output = n;
       while(output){ 
       for(int i = 1;i <= col;i++){
        cout << output << " ";
       }
       
       output--;
    }
    cout << endl;
    }
}