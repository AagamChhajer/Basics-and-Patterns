#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int row =1;

    while (row <= n){
    //for 1 tri
    int j = n-row+1;
    int i = 1;
    while (i <= j){
        cout << i;
        i = i+1;
        }
        //for 2nd tri
        int star  = (row *2)-2;
        
        while (star){
            cout << "*";
        star = star - 1;
        }
        //for 3rd tri
        int p = n - row + 1;
        while (p){
        cout << p;
        p = p - 1;}
    cout << endl;
    row++;
    }
    }