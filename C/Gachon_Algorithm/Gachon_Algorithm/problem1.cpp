#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	// Declaring variable and vectors
	int schedule;
	vector<long long> start_time;
	vector<long long> end_time;
	vector<string> str;

	// Test Set
	schedule = 4;
	str.push_back("10:00 12:00 Lectures");
	str.push_back("12:00 13:00 Lunch, like always.");
	str.push_back("13:00 15:00 Boring lectures...");
	str.push_back("16:45 17:45 Reading ( to be or not to be?)");

	// Processing String
	for (int i = 0; i < schedule; i++) {
		int space_cnt = 0;
		for (int j = 0; j < str[i].size(); j++) {
			if (str[i][j] == ' ') {	// Spliting according to space
				if (space_cnt == 0) {	// Start time
					int time_cnt = 0;
					int temp_time = 0;
					for (int k = 0; k < j; k++) {
						int digit = ((int)str[i][k] - 48);
						if (time_cnt == 0) {
							temp_time += digit * 10 * 60;
						}
						else if (time_cnt == 1) {
							temp_time += digit * 60;
						}
						else if (time_cnt == 3) {
							temp_time += digit * 10;
						}
						else if (time_cnt == 4) {
							temp_time += digit;
						}
						time_cnt++;
					}
					start_time.push_back(temp_time);
					space_cnt++;
				}
				else if (space_cnt == 1) {	// End time
					int time_cnt = 0;
					int temp_time = 0;
					for (int k = 0; k < j; k++) {
						int digit = ((int)str[i][k] - 48);
						if (time_cnt == 6) {
							temp_time += digit * 10 * 60;
						}
						else if (time_cnt == 7) {
							temp_time += digit * 60;
						}
						else if (time_cnt == 9) {
							temp_time += digit * 10;
						}
						else if (time_cnt == 10) {
							temp_time += digit;
						}
						time_cnt++;
					}
					end_time.push_back(temp_time);
					space_cnt++;
				}
			}
		}
	}

	// Print Time (start && end)
	/*
	for (int i = 0; i < schedule; i++) {
		cout << start_time[i] << "\t" << end_time[i] << "\n";
	}
	*/

	vector<int> diff;
	int max_value = 0;
	int max_index = 0;
	for (int i = 0; i < schedule - 1; i++) {
		int value = start_time[i + 1] - end_time[i];
		diff.push_back(value);
		if (max_value < value) {
			max_value = value;
			max_index = i;
		}
	}
	cout << "The longest nap starts at " << end_time[max_index] / 60 << ":";
	int refine_min = end_time[max_index] % 60;
	if (refine_min < 10) {
		cout << "0" << end_time[max_index] % 60;
	}
	else {
		cout << end_time[max_index] % 60;
	}
	cout << " and will last for " << max_value / 60 << " hours and ";
	cout << max_value % 60 << " minutes\n";
	return 0;
}