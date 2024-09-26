//~ while (clock()<=69*CLOCKS_PER_SEC)
//~ #pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
//~ #pragma GCC target ("avx2")
//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//~ #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
 
#define shandom_ruffle random_shuffle
 
using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
const int nax=107;
 
int n;
int tab[nax];
vi graf[nax];
 
int roz[nax];
 
int dfs1(int v)
{
	roz[v]=1;
	int ret=0;
	for (int i : graf[v])
	{
		ret+=dfs1(i);
		roz[v]+=roz[i];
	}
	if (!(roz[v]&1))
		ret++;
	return ret;
}
 
//~ int los(int a, int b)
//~ {
	//~ return a+rand()%(b-a+1);
//~ }
 
using info=pair<pii,vi>;//{{wybrane, gorny}, rozmiary};
 
void fix(info &v)
{
	vi &wek=v.second;
	sort(wek.begin(), wek.end());
	reverse(wek.begin(), wek.end());
	while(!wek.empty() && !wek.back())
		wek.pop_back();
	reverse(wek.begin(), wek.end());
}
 
vector<info> dp[nax];
 
vi operator +(vi a, vi b)
{
	for (int i : b)
		a.push_back(i);
	return a;
}
 
void dfs2(int v)
{
	for (int i : graf[v])
		dfs2(i);
	vector<info> z, bez;
	z.push_back(info{{1, 0}, {}});
	bez.push_back(info{{0, 1}, {}});
	for (int i : graf[v])
	{
		auto pomz=z;
		auto pombez=bez;
		z.clear();
		bez.clear();
		for (auto a : pomz)
		{
			for (auto b : dp[i])
			{
				int wyb=a.first.first+b.first.first;
				vi trz=a.second+b.second;
				trz.push_back(b.first.second);
				z.push_back({{wyb, 0}, trz});
			}
		}
		for (auto a : pombez)
		{
			for (auto b : dp[i])
			{
				int wyb=a.first.first+b.first.first;
				int gor=a.first.second+b.first.second;
				vi trz=a.second+b.second;
				bez.push_back({{wyb, gor}, trz});
			}
		}
	}
	for (info i : z)
		dp[v].push_back(i);
	for (info i : bez)
		dp[v].push_back(i);
	for (info &i : dp[v])
		fix(i);
	sort(dp[v].begin(), dp[v].end());
	dp[v].resize(unique(dp[v].begin(), dp[v].end())-dp[v].begin());
}
 
set<vi> bylo[nax];
 
int wyn;
 
void rek(int v, vi wek)
{
	sort(wek.begin(), wek.end());
	if (bylo[v].count(wek))
		return;
	bylo[v].insert(wek);
	int niep=0;
	for (int i : wek)
		if (i&1)
			niep++;
	if (niep<=v)
		return;
	for (int &i : wek)
	{
		if (!(i&1))
		{
			swap(i, wek.back());
			int g=wek.back();
			wek.pop_back();
			for (int j=0; j<(int)wek.size(); j++)
			{
				wek[j]+=g;
				rek(v, wek);
				wek[j]-=g;
			}
			return;
		}
	}
	if ((int)wek.size()==v+2)
	{
		//~ debug() << v << " " << wek;
		wyn++;
		return;
	}
	for (int i=0; i<(int)wek.size(); i++)
	{
		for (int j=0; j<i; j++)
		{
			vi now;
			for (int l=0; l<(int)wek.size(); l++)
				if (l!=i && l!=j)
					now.push_back(wek[l]);
			now.push_back(wek[i]+wek[j]);
			rek(v, now);
		}
	}
}
 
int main()
{
	//~ srand(time(0));
	scanf("%d", &n);
	for (int i=2; i<=n; i++)
		scanf("%d", &tab[i]);
		//~ tab[i]=los(1, i-1);
	if (n&1)
	{
		printf("1\n");
		return 0;
	}
	for (int i=2; i<=n; i++)
		graf[tab[i]].push_back(i);
	if (dfs1(1)==n/2)
	{
		printf("0\n");
		return 0;
	}
	dfs2(1);
	for (info i : dp[1])
	{
		if (!i.first.first)
			continue;
		vi wek=i.second;
		if (i.first.second)
			wek.push_back(i.first.second);
		rek(i.first.first, wek);
	}
	printf("%d\n", wyn);
	return 0;
}