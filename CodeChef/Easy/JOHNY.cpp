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
  int n;
  s(n);
  int a[n];
  for(int i=0;i<n;i++){
  	s(a[i]);
  }
  int k;
  s(k);
  //printf("%d\n",k );
  int count=0;
  for(int i=0;i<n;i++){
  	if(a[i]<a[k-1])
  		count++;
  }
 printf("%d\n",count+1 );

  }
	
	return 0;
}
	