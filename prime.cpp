#include<iostream>
using namespace std;

int main(){

    int a,b;
cout << "enter the number" << endl;
cin>>a;

b=2;

while(b<a){
    if (a%b==0){
        cout << "not prime for "<<b << endl;
        

    }


    else  {cout << " prime for"<<b << endl;
    }
    b=b+1;

}



}