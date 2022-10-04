//subtract the product and sum of all digits of an  integer
#include  <iostream>
using namespace std;

int main(){
    int n;
   cout << " Enter the number: "<< endl;
   cin >> n;
int product = 1;
int sum = 0;
   while (n != 0){
   int digit = n % 10; //last digit
    product = product * digit;
    sum = sum + digit;
    n = n/10;
   } 
   cout << product - sum << endl;
}
