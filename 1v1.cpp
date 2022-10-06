#include <iostream>
using namespace std;
int main() {
   int a_strength,a_health,b_strength,b_health;
   cin >>  a_health >> a_strength >> b_health >> b_strength;
  //no of attacks possible on a and b 
  int anum = a_health/b_strength;
  int bnum = b_health/a_strength;
  //remaining health of both monsters
  int aremain = a_health%b_strength;
  int bremain = b_health%a_strength;
   if(anum != bnum){
       if(anum>bnum){
           cout <<"A wins the Battle\n";
       }
       else cout <<"B wins the Battle\n";
   }
   if (anum == bnum){
    if (aremain != bremain){
       if(aremain>bremain){
           cout <<"A wins the Battle\n";
       }
       else cout << "B wins the Battle\n";
    }
    else cout << "Tie\n";
   }

    return 0;
}