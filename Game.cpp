//include the array and if condition
#include <iostream>
#include <array>
#include <windows.h>
#if 1
int main() {
	int points = 0;
	double answers[5];
	double  question[5][5] = {
	{2, 4 , 8 , 16 , 32},
	{1 , 1, 2, 3, 5},
	{1, 4, 7, 10, 13},
	{89,178,267,534,801},
	{90,270,810, 2.430 , 7.290} };

	std::cout << "Type the missing number\n";
	std::cout << "sequesnce 1: ";
	std::cout << "(2| 4 | 8 | 16 | ?)\n";
	std::cin >> answers[0];
	if (answers[0] == question[0][4]) {
		std::cout << "Correct answer!\n";
		points += 10;
	}
	else {
		std::cout << "Wrong answer sadly\n";
		Sleep(1000);
		std::cout << "Bs, You have got another chance, bud\n";
		std::cout << "here is little clue\nthe first digit is 3\n";
		std::cout << "insert your answer \"Last chance\"\n";
		std::cin >> answers[0];
		if (answers[0] == question[0][4]) {
			std::cout << "Correct answer!\n";
			points += 5;
	}else{
        std::cout << "You have lost all your chances,sorry.\n";
    } 
}
	std::cout << "sequesnce 2: ";
	std::cout << "(1 | 1 | 2 | 3 | ?)\n";
	std::cin >> answers[1];
	if (answers[1] == question[1][4]) {
		std::cout << "Correct answer!\n";
		points += 10;
	}
	else{
		std::cout << "Wrong answer sadly\n";
		//Sleep(1000);
		std::cout << "Bs, You have got another chance, bud\n";
		std::cout << "here is little clue\nit is between (1 - 10)\n";
		std::cout << "insert your answer \"Last chance\"\n";
		std::cin >> answers[1];
		if (answers[1] == question[1][4]) {
			points += 5;
			std::cout << "Correct answer!\n";
	}else{
        std::cout << "You have lost all your chances,sorry.\n";
    } 

}

	std::cout << "sequesnce 3: ";
	std::cout << "(1 | 4 | 7 | 10 | ?)\n";
	std::cin >> answers[2];
	if (answers[2] == question[2][4]) {
		std::cout << "Correct answer!\n";
		points += 10;
	}
	else{
		std::cout << "Wrong answer sadly\n";
		Sleep(1000);
		std::cout << "Bs, You have got another chance, bud\n";
		std::cout << "here is little clue\nthe first digit is 1\n";
		std::cout << "insert your answer \"Last chance\"\n";
		std::cin >> answers[2];
		if (answers[2] == question[2][4]) {
			points += 5;
			std::cout << "Correct answer!\n";

	}else{
        std::cout << "You have lost all your chances,sorry.\n";
    } 
}
	std::cout << "sequesnce 4: ";
	std::cout << "(89 | 178 | 267 | 534 | ?)\n";
	std::cin >> answers[3];
	if (answers[3] == question[3][4]) {
		std::cout << "Correct answer!\n";
		points += 10;
	}
	else{
		std::cout << "Wrong answer sadly\n";
		Sleep(1000);
		std::cout << "Bs, You have got another chance, bud\n";
		std::cout << "here is little clue\nit is above 800 \n";
		std::cout << "insert your answer \"Last chance\"\n";
		std::cin >> answers[3];
		if (answers[3] == question[3][4]) {
			points += 5;
			std::cout << "Correct answer!\n";

	}else{
        std::cout << "You have lost all your chances,sorry.\n";
    } 
}
	std::cout << "sequesnce 5: ";
	std::cout << "(90 | 270 | 810,2 | 430,7 | ?)\n";
	std::cin >> answers[4];
	if (answers[4] == question[4][4]) {
		std::cout << "Correct answer!\n";
		points += 10;
	}
	else{
		std::cout << "Wrong answer sadly\n";
		Sleep(1000);
		std::cout << "Bs, You have got another chance, bud\n";
		std::cout << "here is little clue\nYou gotta think alot aout it,it is higher than 6500\n";
		std::cout << "insert your answer \"Last chance\"\n";
		std::cin >> answers[4];
		if (answers[4] == question[4][4]) {
			points += 5;
			std::cout << "Correct answer!\n";
	}else{
        std::cout << "You have lost all your chances,sorry.\n";
    } 
}

	std::cout << "Your points are: " << points << " out of 50" << std::endl;
	return 0;
}
#endif