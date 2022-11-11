#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    compare:
    if(i < n){
    cout << i << " ";
    i++;
    goto compare;

}
}