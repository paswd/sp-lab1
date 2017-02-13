#include <iostream>
#include "mlisp.h"
#include "lab1.h"

using namespace std;

double SmallestDiv(double n) {
	return FindDiv(n, 2);
}

bool Divides(double a, double b) {
	return remainder(b, a) == 0;
}

double SPASquare(double n) {
	return n * n;
}

double FindDiv(double n, double current) {
	if (SPASquare(current) > n) {
		return n;
	} else if (Divides(current, n)) {
		return current;
	} else {
		return FindDiv(n, current + 1);
	}
}

bool Prime(double n) {
	if (n < 2) {
		return false;
	} else {
		return SmallestDiv(n) == n;
	}
}

int main(void) {
	double in = 0;
	cin >> in;
	display(Prime(in));
	display('\n');
}

