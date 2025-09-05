//g++ nested.cpp -o nested && ./nested

#include<iostream>
using namespace std;

int main() {

int n,m;

cout<<"enter the no of rows:"<<endl;
cin>>n;

cout<<"enter no of stars:"<< endl;
cin>>m;

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++)
       cout<<"*";
    cout<<endl;
}

}
