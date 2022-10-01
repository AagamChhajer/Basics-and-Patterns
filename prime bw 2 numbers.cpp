#include <iostream>
using namespace std;
//finding primes bw 2 numbers

int main(){
    int a,b;
cout << "Enter the numbers"<<endl;
cin >> a>>b;
cout << endl;

    for (int i = a;i <= b;i++){
        int c;//initializing to use at 16
        for(c=2;c <i;c++){
            if (i%c==0){//if non prime break the loop
                break;
            }
        }
        if(c== i){/*if all i are not div by all 
        c print i*/
            cout << i << endl;
        }

    }       
}