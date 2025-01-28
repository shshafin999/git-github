#include<bits/stdc++.h>
using namespace std;
int main () {
	long long int x = 0;
	for (int i = 0; i < 1e10; i++) {
		x++;
		if (i == 1e6) cout << "total 10 lakh operation done" << '\n';
		if (i == 1e7) cout << "total 1 koti operation done" << '\n';
		if (i == 1e8) cout << "total 10 koti operation done" << '\n';
		if (i == 1e9) cout << "total 100 koti operation done" << '\n';
	}
	return 0;
}


