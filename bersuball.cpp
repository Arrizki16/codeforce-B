#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)

void getSolve(int b){
    int boy[b];
    int g;
    for (int i=0 ; i<b ; i++){
        cin >> boy[i];
    }
    cin >> g;
    int girl [g];
    for (int i=0 ; i<g ; i++){
        cin >> girl[i];
    }
    sort (boy, boy+b);
    sort (girl, girl+g);

    int flag = 0;
    for (int i=0 ; i<b ; i++){
        for (int j=0 ; j<g ; j++){
            if (abs(boy[i]-girl[j])<= 1){
                flag++;
                girl[j] = 102;
                break;
            }
        }
    }
    cout << flag << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b;
    cin >> b;
    getSolve(b);
    return 0;
}