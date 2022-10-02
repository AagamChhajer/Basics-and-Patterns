#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter n & m"<< endl;
    cin >> n >> m ;
    for (int i = 0;i <= n;i+=1){
        cout << i << " ";

        if (i&1)
        {continue;}
        i++;
    }
    cout << endl;
   for (int j = 1;j <= m;j+= 2){
    cout << j << " ";

    if (j&1){
        continue;
    }
    j++;
   }
}