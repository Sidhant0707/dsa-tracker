//g++ function2.cpp -o function2 && ./function2
#include<iostream>
using namespace std;
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"min of " <<a<< " and " << b << " is :" <<minOfTwo(a,b);
    return 0;
}
