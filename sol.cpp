#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m;
	cin >> n >> m;
	// simply follow the equation in the problem statement
	long long new_n = pow(2, n);
	cout << m % new_n << '\n';
	return 0;
}
