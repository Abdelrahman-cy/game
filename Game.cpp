#include <iostream>
#include "functions.h"
#include <array>
using namespace std;

int main() {
char level;
cout << "Type the missing number game\n";
cout << "Choose difficulty level:\n";
cout << "E for \"Easy\"\nM for \"Medium\"\nH for \"Hard\"\n";
cin >> level;

level = toupper(level);
dif(level);
	return 0;
}