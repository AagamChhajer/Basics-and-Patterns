#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int n = a;
 int mask = 0;
    
    //for edge case a = 0
    if(a == 0){
        cout << 1;
    } 
    
    while(a!= 0){
    mask = ((mask << 1) | 1);
    a = a >> 1;
    }
    cout << ((~n) & mask);

/* for 5 binary is 000..101
 mask is 000...111
 ~n is 111...010
~n & mask is 000...010 which is 2 */
}