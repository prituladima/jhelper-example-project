#include <iostream>

typedef long long int ll;

ll binpow (ll a, ll n) {
    ll res = 1;
    while (n) {
        if (n & 1)
            res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}
