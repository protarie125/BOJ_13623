#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c) {
		cout << '*';
		return 0;
	}

	if (a == b) {
		cout << 'C';
		return 0;
	}

	if (b == c) {
		cout << 'A';
		return 0;
	}

	cout << 'B';
	return 0;
}