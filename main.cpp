#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);
	int f = 0; 
	int i = 0;
	for (int &e : v) {
		cin >> e;
		f += (e == i++);
	}

	if (f == n || f == n - 2) {
		cout << n;
		return 0;
	}

	i = 0;
	for (int e : v) {
		if (e == i) {i++; continue; }
		if (e == v[v[e]]) {
			f++; break;
		}
		i++;
	}
	f++;

	cout << f;
	return 0;
}
