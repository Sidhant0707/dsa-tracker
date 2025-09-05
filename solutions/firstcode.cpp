//g++ firstcode.cpp -o firstcode && ./firstcode

#include <iostream>
using namespace std;

int main() {
    int i;
   bool isPrime=true;
   int n;
    cout << "Enter a no:";
    cin>> n;

    for(i = 2; i*i <= n  ; i++){
        if(n % i == 0){
            isPrime = false;
        }
    }
    if(isPrime==true)
        cout<<"Prime no."<<endl;
    else
        cout<<"Not a prime no."<<endl;
}