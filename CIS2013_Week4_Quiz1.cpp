#include <iostream>
using namespace std;

int main() {
	int count = 1;
	char stay;

	while (count <= 2000) {
		if ((count % 33 == 0) && (count % 50 == 0)) {
			cout << count << " FOO BAR" << endl;
		}
		else if (count % 33 == 0) {
			cout << count << " BAR" << endl;
		}
		else if (count % 50 == 0) {
			cout << count << " FOO" << endl;
		}
		else {
			cout << count << endl;
		}
		count++;
	}
	cin >> stay;

	return 0;

}

