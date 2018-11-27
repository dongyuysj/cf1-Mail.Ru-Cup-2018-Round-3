#include<bits/stdc++.h>
using namespace std;
int n;
int ans[105][105];
bool f[105];
int main()
{
    while(cin >> n)
    {
        memset(f, true, sizeof(f));
        for(int i = 1; i <= n; i ++){
            cin >> ans[i][1];
            for(int j = 2; j <= ans[i][1] + 1; j ++){
                cin >> ans[i][j];
            }
        }
        for(int k = 2; k <= ans[1][1] + 1; k ++){
            int tmp = ans[1][k];
             for(int i = 2; i <= n; i ++){
                int num = ans[i][1];
                int flag = 0;
                for(int j = 2; j <= num + 1; j ++){
                    if(ans[i][j] == tmp){
                        flag = 1;
                        break;
                    }
                }
                if(!flag){
                    f[k] = false;
                    break;
                }
            }
        }
        for(int i = 2; i <= ans[1][1] + 1; i ++){
            if(f[i]) cout << ans[1][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
