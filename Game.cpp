#include <iostream>
#include "functions.h"
using namespace std;

int easy[5][6]{
{2, 5, 8, 11, 14, 17},
{10, 8, 6, 4, 2, 0},
{3, 6, 12, 24, 48, 96},
{243, 81, 27, 9, 3, 1},
{1, 2, 3, 5, 8, 13},
};

float medium[5][6]{
{5, 8, 5, 8, 5, 8},
{100, 50, 25, 12.5, 6.25, 3.125},
{1, 4, 9, 16, 25, 36},
{1, 8, 27, 64, 125, 216},
{2, 3, 5, 7, 11, 13},
};

float hard[5][6]{
{1, 2, 6, 24, 120, 720},
{1, 3, 6, 10, 15, 21},
{1, 0.5, 0.833, 0.583, 0.783, .617},
{2, 3, 10, 26, 72, 196},
{2, 5, 0, 7, -4, 11},
};

char again;

int checkanswer(float correctAnswer);


int main(){
char level;
do{
cout << "\033[2m\033[30mType the missing number game\033[0m\n";
cout << "Choose difficulty level:\n";
cout << "E for \"Easy\"\nM for \"Medium\"\nH for \"Hard\"\n";
cin >> level;

level = toupper(level);

if(level == 'E'){
cout << "sequesnce 1: ";
cout << "(2, 5, 8, 11, 14, ?)\n";
checkanswer(easy[0][5]);

cout << "sequesnce 2: ";
cout << "(10, 8, 6, 4, 2, ?)\n";
checkanswer(easy[1][5]);

cout << "sequesnce 3: ";
cout << "(3, 6, 12, 24, 48, ?)\n";
checkanswer(easy[2][5]);

cout << "sequesnce 4: ";
cout << "(243, 81, 27, 9, 3, ?)\n";
checkanswer(easy[3][5]);

cout << "sequesnce 5: ";
cout << "(1, 2, 3, 5, 8, ?)\n";
checkanswer(easy[4][5]);

cout << "Total points: " << points << " out of 50" << '\n';
}

else if(level == 'M'){
cout << "sequesnce 1: ";
cout << "(5, 8, 5, 8, 5, ?)\n";
checkanswer(medium[0][5]);

cout << "sequesnce 2: ";
cout << "(100, 50, 25, 12.5, 6.25, ?)\n";
checkanswer(medium[1][5]);

cout << "sequesnce 3: ";
cout << "(1, 4, 9, 16, 25, ?)\n";
checkanswer(medium[2][5]);

cout << "sequesnce 4: ";
cout << "(243, 81, 27, 9, 3, ?)\n";
checkanswer(medium[3][5]);

cout << "sequesnce 5: ";
cout << "(2, 3, 5, 7, 11, ?)\n";
checkanswer(medium[4][5]);

cout << "Total points: " << points << " out of 50" << '\n';
}

else if(level == 'H'){
cout << "sequesnce 1: ";
cout << "(1, 2, 6, 24, 120, ?)\n";
checkanswer(hard[0][5]);

cout << "sequesnce 2: ";
cout << "(1, 3, 6, 10, 15, ?)\n";
checkanswer(hard[1][5]);

cout << "sequesnce 3: ";
cout << "(1, 0.5, 0.833, 0.583, 0.783, ?)\n";
checkanswer(hard[2][5]);

cout << "sequesnce 4: ";
cout << "(2, 3, 10, 26, 72, ?)\n";
checkanswer(hard[3][5]);

cout << "sequesnce 5: ";
cout << "(2, 5, 0, 7, -4, ?)\n";
checkanswer(hard[4][5]);

cout << "Total points: " << points << " out of 50" << '\n';
}
cout << "You wanna play again (Y/N)\n";
cin >> again;
again = toupper(again);

}while(again == 'Y');

return 0;
}
