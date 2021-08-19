#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <utility>
#include <time.h>
#define ll long long int
using namespace std;
#define cases() int test_case; cin >> test_case; while(test_case--)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define tr(c, it) for (auto it = (c).begin(); (it) != (c).end(); it++)
#define pres(c, val) ((c).find(val) != (c).end())      // for sets, multisets, maps etc.

const ll mod = (1e9)+7;

/****************
Code for solving.
****************/

ll iter(ll ans, ll x, ll d, ll k){
    //iterative approach

    while(d!=1){
        d--;
        x = (x*(k-1))%mod;
        ans = (ans+x)%mod;
    }
    return ans;
}

ll expo(ll x, ll n){
    //computes (x^n % mod) by binary exponentiation

    ll r=1;
    while(n){
        if(n&1){
            r=(r*x)%mod;
        }
        x = (x*x)%mod;
        n=n>>1;
    }
    return r;
}

ll loga(ll ans, ll x, ll d, ll k){
    //logarithmic approach

    if(k==2){
        return (2*d+ans)%mod;
    }

    ll inv = expo(k-2, mod-2); //equivalent to (k-2)^-1 mod 1e9+7 by FLT
    ll r = expo(k-1, d); // = (k-1)^(d) mod 1e9+7
    r = (r-1+mod)%mod;
    x = (x*r)%mod;
    x = (x*inv)%mod;
    ans = (ans+x)%mod;
    return ans;
}

void solve(void){
    
    freopen("test.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);

    int TEST_CASES;
    cin>>TEST_CASES;
    cout<<TEST_CASES<<'\n';

    ll a[TEST_CASES];

    for(int i=0; i<TEST_CASES; i++){
        ll n, k, d;
        cin>>n>>k>>d;
        cout<<n<<' '<<k<<' '<<d<<'\n';

        if(n-1>=k || d==1){
            a[i]=n;
            continue;
        }
    
        if(k==1){
            a[i]=(ll)2;
            continue;
        }

        //ll ans = (n*(k-(n-1))%mod + n)%mod; //for iterative approach
        ll x = (n*(k-(n-1)))%mod;
        d--;

        //cout<<iter(ans, x, d, k)<<'\n';

        //for logarithmic approach
        a[i]=loga(n, x, d, k);
    }

    fclose(stdin);

    cout<<"\n\n\n";
    for(int i=0; i<TEST_CASES; i++){
        cout<<a[i]<<'\n';
    }

    fclose(stdout);
    remove("test.txt");
    
}

/*************************
Code for generating input.
*************************/

#define NMAX 200000
#define KMAX 200000
#define DMAX 10000000
#define TMAX 100000

void gen(){

    freopen("test.txt", "w", stdout);

    srand(time(0));
    ll TESTS=1+(rand())%TMAX;
    cout<<TESTS<<'\n';
    set < tuple<ll, ll, ll> > s;

    while(1){

        ll n=1+((rand()%32767)*(rand()%32767))%NMAX;
        ll k=1+((rand()%32767)*(rand()%32767))%KMAX;
        ll d=1+((rand()%32767)*(rand()%32767))%DMAX;

        if(s.find(make_tuple(n, k, d))==s.end()){
            s.insert(make_tuple(n, k, d));
            cout<<n<<' '<<k<<' '<<d<<'\n';
            TESTS--;
        }

        if(TESTS==0){
            break;
        }
    }

    fclose(stdout);

}

int main(void)
{

    gen();
    solve();
    
    return 0;
}

