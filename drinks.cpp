#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long ll;
double PI = acos(-1);
int INF = 1000000005;
#define arr array
#define RESET(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define f first
#define s second

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)
#define fo1(i, k, n) for (i = k; i < n; i++)
#define fo2(i, n) for (i = n; i > 0; i--)

void getSolve(int n){
    int i=0;
    int value;
    double sum = 0;
    fo (i,n){
        cin >> value;
        sum += value;
    }
    cout << double(sum/(n*100)*100) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    getSolve (n);

    return 0;
}