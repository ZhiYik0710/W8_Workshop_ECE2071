#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,a,b,c;

int main(){
    a=2;
    cin >> n;
    for (ll i=1;i<n;i++){
        a=a<<1;
        if (a<=pow(10,9)+7){
            continue;
        }
        else{
            a=a-pow(10,9)-7;
        }
    }
    cout << a;
}