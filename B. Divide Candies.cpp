#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
//如何快速将n分解为a2+b2的形式
int main()
{
    while(cin >> n >> m){
        ll ans = 0;
        ll cnt = n / m;
        ll opt = n % m;
        for(ll i = 0; i < m; i ++){
            for(ll j = 0; j < m; j ++){
                if((i * i + j * j) % m == 0){
                    ll num1 = cnt, num2 = cnt;
                    if(i <= opt && opt && i) num1 ++;
                    if(j <= opt && opt && j) num2 ++;
                    ans += num1 * num2;//两者之间的组合数，反推个数
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
