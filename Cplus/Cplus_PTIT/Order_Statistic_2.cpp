#include<bits/stdc++.h>
using namespace std;

void run(){
    int n; cin >> n;
    int a[n+1];
    for(int i=0; i<n; i++)  cin >> a[i];
    sort(a,a+n);
    cout << a[n-1] << endl;
}

int main(){
    int t ; cin >> t;
    while(t--) run();
}