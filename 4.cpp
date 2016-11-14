#include <bits/stdc++.h>
#define MAX 5002
#define lli long long
#define MOD 1000000007
using namespace std;
lli C[MAX][MAX];
lli fact[MAX];
lli dp[MAX];
lli fast_pow(lli a, lli b)
{
	lli res = 1;
	while ( b > 0 ) {
		if ( b & 1 ) res = (res * a)%MOD;
		a = (a * a)%MOD;
		b >>= 1;
	}
	return res;
}
void pre()
{
	C[0][0] = 1LL;
	fact[0] = 1LL;
	for ( int i = 1; i <= MAX - 2; i++ ) {
		fact[i] = (fact[i - 1]*(lli)i)%MOD;
		for ( int j = 0; j <= i; j++ ) {
			if ( j == 0 || i == j ) C[i][j] = 1;
			else {
				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
				if ( C[i][j] >= MOD ) C[i][j] -= MOD;
			}
		}
	}
	return;
}
int main()
{
	pre();
	int n, m;
	cin >> n >> m;
	assert(n >= 1 && n <= 1000000000);
	assert(m >= 1 && m <= 5000);
	
	dp[1] = 1;
	
	for ( int i = 2; i <= m; i++ ) {
		dp[i] = fast_pow(i, n);
		for ( int j = 1; j < i; j++ ) {
			dp[i] -= (C[i][j]*dp[j])%MOD;
			if ( dp[i] < 0 ) dp[i] += MOD;
		}
	}
	
	for ( int i = 1; i <= m; i++ ) cout << (dp[i]*C[m][i])%MOD << " ";
	
	return 0;
}
