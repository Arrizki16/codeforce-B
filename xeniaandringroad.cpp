#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)
#define fo1(i, k, n) for (i = k; i < n; i++)
#define fo2(i, n) for (i = n; i > 0; i--)
#define ll long long

void getSolve(int n, int m ){
    int arr[m];
    ll sum;
    for (int i=0 ; i<m ; i++){
        cin >> arr[i];
    }
    sum = arr[0]-1;
    for (int i=0 ; i<m-1 ; i++){
        if (arr[i] > arr[i+1]){
            sum += arr[i+1]+n-arr[i];
        }
        else sum += arr[i+1]-arr[i];
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    getSolve (n,m);
    return 0;
}