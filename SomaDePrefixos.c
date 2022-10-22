#include <stdio.h>
#include <bits/stdc++.h>


const int maxn = 1e5+10;

int v[maxn]; 

long long s[maxn];

int main(void){
	int n, q;
	scanf("%d %d", &n, &q);

	for (int i = 1; i <= n; i++)
		scanf("%d", &v[i]);

	s[1] = v[1];
	for (int i = 2; i <= n; i++){
		s[i] = s[i-1] + 1ll*v[i];
	}
	for (int i = 1; i <= q; i++){
		int l, r;
		scanf("%d %d", &l, &r);
		printf("%lld\n", s[r] - s[l-1]);
	}
	
}
