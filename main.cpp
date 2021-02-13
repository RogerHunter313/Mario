#include <iostream>
using namespace std;

int main() {
	int height = -1;
	int counter = 1;

	// only input values between 1 and 8 inclusive
	while (height < 1 || height > 8) {  
		cout << "How tall is your pyramid ? >" << flush;
		cin >> height;
	}

	for (int i = 1; i < height + 1; i++) {
		// print decrementing spaces each loop
		for (int j = 0; j < height - i; j++) {  
			cout << " ";
		}

		// print incrementing hashes each loop
		for (int j = 0; j < counter; j++) {
			cout << "#";
		}

		// print static double space each loop
		cout << "  ";

		// repeat the incrementing hashes from before
		for (int j = 0; j < counter; j++) {
			cout << "#";
		}
		cout << endl;
		counter++;
	}

	return 0;

}