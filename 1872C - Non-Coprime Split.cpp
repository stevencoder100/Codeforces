/* &&COPYRIGHT © BY @STEVENCODER100 [RAYAR SINGH] */
 
#include <bits/stdc++.h>
#define ll long long int
#define speed_io ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
using namespace std;

int main()
{
    ll t; 
    speed_io;
    cin >> t;

    while(t--)
    {
        ll start, end;
        cin >> start >> end;

        if(end >= 4)
        {
            if(start != end)
            {
                ll num = (int)end / 2;
                cout << num << " " << num << "\n";
            }
            else if(start == end)
            {
                ll n = sqrt(start);
                bool found = false;

                for(ll i = 2; i <= n; i++)
                {
                    if(start % i == 0)
                    {
                        cout << start - i << " " << i << "\n";
                        found = true;
                        break;
                    }
                }
                if(found == false) cout << -1 << "\n";
            }
        }
        else cout << -1 << "\n";
    }
    return 0;
}
