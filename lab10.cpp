#include <iostream>
#include <windows.h>
using namespace std;

int sumOfDigits(int);


int main() {
    int  number;
	int  sum = 0;
	cout << "Enter number: ";
	cin >> number;
	if (!cin) {
		cout << "error"; Sleep(1000); return 1; 
	}
	cout << "sum: " << sumOfDigits(number);
	for (int digit; number > 0; number = (number - number % 10)/10 ) {
		digit = number % 10;
		sum += digit;
	}                                             //аег пейспяхх
	cout << "sum: " << sum;
	return 0;
}


int sumOfDigits(int number) {
	if (number == 0) return 0;
	else return number % 10 + sumOfDigits((number - number % 10) / 10); //пейспяхъ
}