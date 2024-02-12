#include <iostream>
#include <string>

using namespace std;

int main() {
    string playerName;
    cout << "Welcome to the Text Adventure Game!\n";
    cout << "Enter your name: ";
    cin >> playerName;
    
    cout << "\nHello, " << playerName << "! You find yourself in a dark forest.\n";
    cout << "You have three paths ahead of you. Which path will you choose?\n";
    
    int choice;
    cout << "1. Go left into a cave.\n";
    cout << "2. Go straight through the dense trees.\n";
    cout << "3. Go right towards the river.\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "\nYou entered a dark cave. It's too dark to see anything.\n";
        cout << "What will you do?\n";
        cout << "1. Use a torch to light up the cave.\n";
        cout << "2. Go back to the forest.\n";
        cout << "Enter your choice (1/2): ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "\nThe torch reveals a hidden treasure chest!\n";
            cout << "You've found a pile of gold and precious gems!\n";
            cout << "Congratulations, " << playerName << "! You win!\n";
        } else {
            cout << "\nYou return to the forest. What's your next move?\n";
            // Add more choices and outcomes for this path if needed.
        }
    } else if (choice == 2) {
        cout << "\nYou venture deeper into the forest. It's getting darker.\n";
        cout << "Suddenly, you encounter a wild bear!\n";
        cout << "What will you do?\n";
        cout << "1. Try to slowly back away.\n";
        cout << "2. Climb a tree to escape.\n";
        cout << "Enter your choice (1/2): ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "\nYou manage to back away slowly, and the bear loses interest.\n";
            cout << "You continue your journey through the forest.\n";
            // Add more choices and outcomes for this path if needed.
        } else {
            cout << "\nYou climb a tree, and the bear can't reach you.\n";
            cout << "After a while, it leaves, and you climb down safely.\n";
            cout << "You continue your journey through the forest.\n";
            // Add more choices and outcomes for this path if needed.
        }
    } else if (choice == 3) {
        cout << "\nYou arrive at the riverbank. The water looks calm.\n";
        cout << "What will you do?\n";
        cout << "1. Cross the river by swimming.\n";
        cout << "2. Build a raft to cross safely.\n";
        cout << "Enter your choice (1/2): ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "\nYou attempt to swim across the river but struggle against the current.\n";
            cout << "Unfortunately, you are swept away by the river and cannot continue.\n";
            cout << "Game Over, " << playerName << ".\n";
        } else {
            cout << "\nYou build a sturdy raft and safely cross the river.\n";
            cout << "On the other side, you find a hidden treasure chest!\n";
            cout << "You've found a pile of gold and precious gems!\n";
            cout << "Congratulations, " << playerName << "! You win!\n";
        }
    } else {
        cout << "\nInvalid choice. " << playerName << ", the forest is full of surprises. Choose 1, 2, or 3.\n";
    }
    
    return 0;
}
