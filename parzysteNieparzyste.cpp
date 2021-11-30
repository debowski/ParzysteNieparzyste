#include <iostream>
#include <string>

using namespace std;

string przypisanie() {
	int ileLiczb;
	cin >> ileLiczb;
	string par = "";
	string npar = "";
	int liczba;

	for (int k = 1; k <= ileLiczb; k++) {
		cin >> liczba;
		if (k % 2 == 0) { par += to_string(liczba) + " "; }
		else npar += to_string(liczba) + " ";
	}
	return par + npar;
}

int main(int argc, char** argv) {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) cout << przypisanie();

	return 0;
}