#include<iostream>
using namespace std;
//no of 1 bits

int main(){
    int n;
    cin >> n;

    int count = 0;
    while (n != 0){

        if (n&1){
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;
}