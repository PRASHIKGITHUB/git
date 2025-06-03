#include<bits/stdc++.h>
using namespace std;

void printsome(){
    cout<<"print function is called"<<endl;
    return;
}
void printMyName(){
    cout<<"print function is called"<<endl;
    return;
}
void printYourName(){
    cout<<"print function is called"<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x=10;
    int y=16;
    cout<<x+y<<endl;
    printsome();
    printMyName();
    printYourName();
    return 0;
}
