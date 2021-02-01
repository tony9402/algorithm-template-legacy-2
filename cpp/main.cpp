#define LOCAL
/****************************************************************************************************************************/
/*************************************                 My Template Start                *************************************/
/****************************************************************************************************************************/
#ifndef LOCAL
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#endif

#include<bits/stdc++.h>

#define all(x)          (x).begin(),(x).end()
#define sortall(x)      sort(all(x))
#define reverseall(x)   reverse(all(x))
#define siz(x)          (int)(x).size()
#define rep(i, n)       for(int i=0;i<(n);i++)
#define repi(i, l, r)   for(int i=l;i<=(r);i++)
#define V1(t)           vector<t>
#define V2(t)           vector<vector<t>>>
#define V3(t)           vector<vector<vector<t>>>
#define VV1(t, a)       vector<t>(a)
#define VV2(t, a, b)    vector<vector<t>>(a, VV1(t, b))
#define VV3(t, a, b, c) vector<vector<vector<t>>>(a, VV2(t, b, c))

#define pb push_back
#define eb emplace_back

#define fi first
#define se second

using namespace std;
using ull = unsigned long long;
using ll  = long long;
using ld  = long double;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using pil = pair<int, long long>;
using pli = pair<long long, int>;
using vi  = vector<int>;
using vd  = vector<double>;
using vl  = vector<ll>;
using vii = vector<pii>;
using vll = vector<pll>;

#ifdef LOCAL
template<typename Type> void _DEBUG(Type arg) { cerr << arg; }
template<typename Type, typename... Types> void _DEBUG(Type arg, Types ...args) { cerr << arg << ", "; _DEBUG(args...); }
#define debug(...) cerr << "[ " << #__VA_ARGS__ << " ] : ", _DEBUG(__VA_ARGS__)
void _DEBUG_START() { cerr << "\n<===== DEBUG START ======>\n"; }
void _DEBUG_END()   { cerr << "\n<====== DEBUG END =======>\n"; }

#define debug2(...) _DEBUG_START(), debug(__VA_ARGS__), _DEBUG_END()
#else
#define debug(...)
#define debug2(...)
#endif

constexpr char ln  = '\n';
constexpr char sp  = ' ';
constexpr int dy[] = {-1,1,0,0,-1,-1,1,1};
constexpr int dx[] = {0,0,-1,1,-1,1,-1,1};
const ld PI        = acos((ld)-1);

template<int fp> struct fastio { fastio() { ios::sync_with_stdio(false); cin.tie(0); if(fp)cout<<fixed<<setprecision(fp); } };
template<typename Type> void input(Type &arg){cin >> arg;}
template<typename Type, typename... Types> void input(Type &arg, Types &...args){cin>>arg;input(args...);}
template<typename Type> void output(Type arg){cout<<arg;}
template<typename Type, typename... Types> void output(Type arg, Types ...args){cout<<arg;output(args...);}
template<typename Type> inline ostream& operator<<(ostream &out, const vector<Type> &v) { for(auto &i: v) out<<i<<' '; return out; }
template<typename Type> inline istream& operator>>(istream &in, vector<Type> &v)       { for(auto &i: v) in>>i; return in; }

template<typename T>
T power(T a, T b, T mod=numeric_limits<T>::max()){
    if(b == 0)return 1;
    if(b % 2)return a * power(a, b-1, mod) % mod;
    return power(a * a % mod, b >> 1, mod);
}

/****************************************************************************************************************************/
/*************************************                   My Template End                *************************************/
/****************************************************************************************************************************/

int main(){
    fastio<0>();



    return 0;
}
