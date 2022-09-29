#include <iostream>
using namespace std;

int main(){
   int n;
   cout << "Enter the Number:"<< endl;
   cin >>n;

   int row = 1;

   while (row <= n){
    //for space 
    int space = n - row;
    while(space){
        cout << " ";
        space = space -1;
    }
    //for 1st tri
    int i = 1;
    while (i <= row){
        cout << i;
        i = i + 1;
    }
    //for 2nd tri
    int j = row - 1;
    while (j){
        cout << j;
        j = j - 1;
    }
    cout << endl;
    row = row + 1;
   }
   }