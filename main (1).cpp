#include <iostream>
#include <random>
#include <limits>
using namespace std;

    int main() {
    random_device rd;
    mt19937 gen(rd());

    int A, B;

    
    while (true) {
        cout << "Enter two integers A and B (A <= B): ";
        cin >> A >> B;

        if (cin.fail() || A > B) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. A should be <= B. Try again.\n";
        } else {
            break;
        }
    }

    
    uniform_int_distribution<> dis(A, B);

    char choice;
    do {
        cout << "Random number: " << dis(gen) << "\n";
        cout << "Generate again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'n');

    return 0;
}




