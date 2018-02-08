#include <iostream>
using namespace std;

int main() {
	int count = 1;
	char cont;

	while (count <= 2000) {
		if (count % 50 == 0)
			cout << count << " FOO" << endl;
		else if (count % 33 == 0)
			cout << count << " BAR" << endl;
		else
			cout << count << endl;
		count++;
	}
	cin >> cont;

	return 0;

}

