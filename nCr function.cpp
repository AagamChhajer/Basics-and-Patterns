#include <iostream>
using namespace std;
//for factorial
         int fac(int n){
        int ans = 1;
        for (int i = 1;i<=n;i++){
            ans = i * ans;
        }
        return ans;
    }
    //for nCr == 8C2 = 8!/2! * 6!
    int nCr(int n,int r){
        int ans2 = fac(n)/(fac(r)*fac(n-r));
       return ans2;
    }

int main(){
    int n,r;
    cin >> n >> r;
int x = nCr(n,r);
cout << "The answer is : "<< x << endl;

}