#include <iostream>
using namespace std;

int main() {
    char choice = 'a';
    while(true) {
        cout << "Welcome to Caesar's Rock Paper Scissor Game:\n";
        cout << "q for quit, r for rock, p for paper, s for scissor\n";
        cin >> choice;
        if(choice == 'q'){
			break;
        }
        srand(time(0));
        int computer_choice = rand() % 3;
		//0 for rock, 1 for paper, 2 for scissor
        if(choice != 'r' && choice != 'p' && choice != 's') {
            cout << "invalid choice\n";
            continue;
        }
        if(
			choice == 'r' && computer_choice == 2 ||
			choice == 'p' && computer_choice == 0 ||
			choice == 's' && computer_choice == 1) {
            cout << "You win!\n";
        } else if(
			choice == 'r' && computer_choice == 1 ||
			choice == 'p' && computer_choice == 2 ||
            choice == 's' && computer_choice == 0) {
            cout << "Computer wins!\n";
        } else {
            cout << "It's a tie!\n";
        }
    }
    return 0;
}