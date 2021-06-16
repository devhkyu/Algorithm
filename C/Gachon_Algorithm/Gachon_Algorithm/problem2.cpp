#include <iostream>
#include <vector>

using namespace std;

int main() {
	//vector<int> test1 = { 1, 2, 3, 4, 5 };
	vector<int> test1 = { 5, 4, 3, 2, 1 };
	//vector<int> test1 = { 5, 1, 2, 3, 4 };

	vector<int> input_stack;
	vector<int> temp_stack;
	vector<int> output_stack;

	cout << "test: ";
	for (int i = 0; i < test1.size(); i++) {
		cout << test1[i];
	}
	cout << "\n\n";
	
	cout << "input_stack: ";
	// Insert test to input_stack
	for (int i = 0; i < test1.size(); i++) {
		input_stack.push_back(test1[test1.size() - i - 1]);
		cout << input_stack[i];
	}
	cout << "\n\n";

	// Check whether it is sorted
	for (int i = 0; i < input_stack.size() - 1; i++) {
		if (input_stack[i] < input_stack[i + 1]) {
			// flip
			cout << "i: " << i << "\n";
			for (int j = 0; j < i + 1; j++) {
				temp_stack.push_back(input_stack[i - j]);
				vector<int>::iterator iter = input_stack.begin();
				input_stack.erase(iter);
			}
			for (int j = 0; j < temp_stack.size() - 1; j++) {
				// cout << temp_stack[j];
			}
		}
	}
	cout << "\n\n";

	return 0;
}