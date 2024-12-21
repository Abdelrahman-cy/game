#include <iostream>
using namespace std;
float answer;
int points;

int checkanswer(float correctAnswer){
    cin >> answer;
    if(correctAnswer == answer){
    cout << "\033[32mCorrect answer!\033[0m\n"; // when the answer is correct it gonna be in green else it gonna be in red 
    points+=10;
 }else {
    cout << "\033[31mWrong answer!\ntry again <3\033[0m\n"; 
    cin >> answer;
    if(answer == correctAnswer){
        cout << "\033[32mCorrect answer!\033[0m\n";
        points +=5;}
    else
        cout << "\033[31mWrong again. Moving to the next question.\033[0m\n";   
}
return points;
}