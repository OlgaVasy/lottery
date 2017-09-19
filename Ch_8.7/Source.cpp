// Lottery
// This program simulates a lottery

#include <iostream>
#include <ctime>
using namespace std;

int main() {
	const int NUM_DIGITS = 5, MIN_VALUE = 0, MAX_VALUE = 9;
	int winningDigits[NUM_DIGITS];
	int player[NUM_DIGITS];
	int count, temp, MATCHING_DIGIT = 0;

	srand(time(NULL));

	for (count = 0; count < NUM_DIGITS; count++) {

		winningDigits[count] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	}
	cout << "Please enter five digits in the range of 0 through 9: \n";

	for (count = 0; count < NUM_DIGITS; count++) {

		cin >> player[count];
		while (player[count] < MIN_VALUE || player[count] > MAX_VALUE) {
			cout << "Invalid number, please enter a number in the range of 0 through 9:\n";
			cin >> player[count];
		}	
			}
	for (count = 0; count < NUM_DIGITS; count++) {
		for (int i = 0; i < NUM_DIGITS; i++) {
			if (winningDigits[i] == player[count]) {
				swap(player[count], player[i]);
			}
		}
	}
	for (count = 0; count < NUM_DIGITS; count++) {		
			if (winningDigits[count] == player[count])
				MATCHING_DIGIT++;		
	}	
	cout << "Winning digits are: ";
	for (count = 0; count < NUM_DIGITS; count++) {
		cout << winningDigits[count];
	}
	cout << endl;

	cout << "The player's digits are: ";
	for (count = 0; count < NUM_DIGITS; count++) {
		cout << player[count];
	}
	cout << endl;

	cout << "Digits matched: " << MATCHING_DIGIT << endl;

	system("PAUSE");
	
	return 0;	
}