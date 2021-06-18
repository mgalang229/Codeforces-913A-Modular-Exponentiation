#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	// If 'n' is greater than or equal to 31, then the answer is always equal to 'm'.
	// For example, x mod y = x will always be true iff x is less than y. Since
	// the limit of 'm' in the problem statement is equal to 10 ^ 8 it means that 2 with
	// an exponent of numbers from 31 and above would always be greater than 'm'.
	// Otherwise, simply follow the equation in the problem statement ('n' <= 30)
	cout << (n >= 31 ? m : m % (1 << n)) << '\n';
	return 0;
}
