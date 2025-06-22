#include<bits/stdc++.h>
using namespace std;
int n,q,l,r;

void rsq(){
    cin >> n >> q; vector<long long>v(n+1),prf(n+1); v[0]=0;
    for (int i = 1; i <= n; i++){
        cin >> v[i]; prf[i]=prf[i-1]+v[i];
    }while (q--){cin >> l >> r; cout << prf[r]-prf[l-1] << endl;}
}

int main(){
    rsq();
    return 0;
}
