#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
  ll n,k;
  sl(n);sl(k);
  if(k==0)
  	printf("%lld %lld\n",k,n);
  else
  	printf("%lld %lld\n",n/k,n%k);
  }
	
	return 0;
}
	