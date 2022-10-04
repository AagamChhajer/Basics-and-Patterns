#include <iostream>
using namespace std;
#include<cmath>
int main(){
    int n;
    cout << "Enter the value of n of n*n grid square: "  <<endl;
    cin >> n;
    int a;
      for(int i = 1;i <= n;i++){
            a += pow(i,2); 
     }
    cout << a;
    
}