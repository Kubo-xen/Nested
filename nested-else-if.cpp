#include <iostream>
using namespace std;

int main() {

    int number = 7;
        
    if (number > 0 && number < 4) {

        if (number == 1) {
            cout << "We're inside the first branch and the first nested condition." << endl;
        }

        if (number == 2) {
            cout << "We're inside the first branch and the second nested condition." << endl;
        }

        if (number == 3) {
            cout << "We're inside the first branch and the third nested condition." << endl;
        }
    }
    
    else if (number > 3 && number < 7) {

        if (number == 4) {
            cout << "We're inside the second branch and the first nested condition." << endl;
        }

        if (number == 5) {
            cout << "We're inside the second branch and the second nested condition." << endl;
        }

        if (number == 6) {
            cout << "We're inside the second branch and the third nested condition." << endl;
        }
    }


    return 0;
}