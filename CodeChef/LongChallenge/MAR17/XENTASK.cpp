#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define R(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
  	int n;
  	s(n);
  	ll a[n],b[n];
  	R(i,n) {sl(a[i]);}
  	R(i,n) {sl(b[i]);}
  	ll sum1=0,sum2=0;
  	R(i,n){
  		if(i%2==0){
  			sum1+=a[i];
  			sum2+=b[i];
  		}
  		else{
  			sum1+=b[i];
  			sum2+=a[i];
  		}
  	}
  	printf("%lld\n",min(sum1,sum2) );
  }	
	return 0;
}
	
	