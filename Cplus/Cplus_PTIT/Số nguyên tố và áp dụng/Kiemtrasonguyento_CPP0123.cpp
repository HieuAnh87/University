#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return false;
    return true;   
}

int main(){
    int n; cin >> n;
    if(snt(n)) cout << "YES" << endl;
    else       cout << "NO" << endl;
}