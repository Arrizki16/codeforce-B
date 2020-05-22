#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)

void getSolve(int t){
    int value;
    ll sum;
    ll sum2;
    for (int i=0 ; i<t ; i++){
        cin >> value;
        sum = 0;
        sum2 = 0;
        if ((value/2)%2 != 0){
            cout << "NO" << endl;
        }
        else {
            int flag =2;
            cout << "YES" << endl;
            for (int j=0 ; j<value/2 ; j++){
                cout << flag << " ";
                sum += flag;
                flag+=2;
            }
            int flag2 = 1;
            for (int j=0 ; j<value/2-1 ; j++){
                cout << flag2 << " ";
                sum2 += flag2;
                flag2+=2;
            }
            // deb(sum);
            // deb(sum2);
            cout << sum-(sum2) << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    getSolve(t);
    return 0;
}