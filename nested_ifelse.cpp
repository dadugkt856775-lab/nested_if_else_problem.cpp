#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    // a>b and b>c -> a>c -> a greatest
    if(a>b){ // b can never be the greatest
        if(a>c){
            cout<<a<<" Is greatest";
        }
        else{ // c>a , a>b -> c>ab
            cout<<c<<" Is largest";            
        }
    }
    else{ // b>a
        if(b>c){
            cout<<b<<" Is largest";
        }
        else{ // c > b, c>b>a
            cout<<c<<" Is largest";
        }
    }
}