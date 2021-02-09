#include<bits/stdc++.h>
#define ll long int
using namespace std;

void solve()
{
    string pv,pt;
    //pv for pvalue means xx:xx
    cin>>pv>>pt;
    ll n;
    cin>>n;
    if(pt=="PM")
    {
        if(pv[0] == '1' && pv[1] == '2')
        {
            // then no changes require
        }
        else
        {
            // pt == PM but not 12:xx then do this
            int temp = int(pv[0] - 48);
            temp *= 10;
            temp += int(pv[1]-48);
            temp += 12;
            int rem = temp % 10;
            pv[1] = char(rem + 48);
            pv[0] = char(int(temp /10)+48);
        }
    }
    else//pt == AM case
    {
        if(pv[0] == '1' && pv[1] == '2')
        {
            // if pv = 12:xx then we have to subtrace
            int temp = int(pv[0]-48);
            temp *= 10;
            temp += int(pv[1]-48);
            temp -= 12;
            int rem = temp% 10;
            pv[1] = char(rem + 48);
            pv[0] = char(int(temp / 10) + 48);
        }
    }

    // like wise above string conversation is required
    // we take four string a,b,c,d and take input
    // a-> input start value xx:xx
    // b-> input AM or PM
    // c-> input end value xx:xx
    // d-> input end value PM
    string a,b,c,d;
    // loop
    for(ll i = 0;i<n;i++)
    {
        cin>> a >> b >> c>> d;
        if(b == "PM")
        {
            if(a[0] == '1' && a[1] == '2')
            {
            }
            else
            {
                int temp = int(a[0] - 48);
                temp *= 10;
                temp += int(a[1] - 48);
                temp += 12;
                int rem = temp % 10;
                a[1] = char(rem + 48);
                a[0] = char(int(temp/10) + 48);
            }
        }
        else
        {
            if (a[0] == '1'&& a[1]=='2')
            {
                int temp = int(a[0] - 48);
                temp *= 10;
                temp += int(a[1] - 48);
                temp -= 12;
                int rem = temp % 10;
                a[1] = char(rem + 48);
                a[0] = char(int(temp / 10) + 48);
            }
        }
        // this whole if else conversation
        if(d == "PM")
        {
            if(c[0] == '1' && c[1] == '2')
            {
            }
            else
            {
                int temp = int(c[0] - 48);
                temp *= 10;
                temp += int(c[1] - 48);
                temp += 12;
                int rem = temp % 10;
                c[1] = char(rem + 48);
                c[0] = char(int(temp / 10) + 48);
            }
        }
        else
        {
            if(c[0] == '1' && c[1] == '2')
            {
                int temp = int(c[0] - 48);
                temp *= 10;
                temp += int(c[1] - 48);
                temp -= 12;
                int rem = temp % 10;
                c[1] = char(rem + 48);
                c[0] = char(int(temp / 10)+ 48);
            }
        }
        if(pv >= a && pv <= c)
        {
            cout<< "1";
        }
        else
        {
            cout<< "0";
        }
    }
    cout<<"\n";
}

int main(){
#ifndef  ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("ouput.txt","w",stdout);
#endif
    ll t; cin>>t; while(t--)
    {
        solve();
    }
}