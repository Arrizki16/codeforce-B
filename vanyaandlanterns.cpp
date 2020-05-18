#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)

void getSolve(int n, int l){
    ll int arr[n];
    double temp=0;
    double max=0;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    sort (arr, arr+n);
    max = arr[0];
    for(int i=0; i<n-1 ; i++){
        temp = arr[i+1]-arr[i];
        if (max<temp/2) max = temp/2;
    }
    if (max < l-arr[n-1]) max = l-arr[n-1];
    cout << fixed << setprecision(9);
    cout << max << endl; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,l;
    cin >> n >> l;
    getSolve(n,l);
    return 0;
}