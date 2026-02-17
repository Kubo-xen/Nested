#include <iostream> 
using namespace std;

int main() {
   
    for(int i = 1; i < 6; i++) {

        cout << "Number outside nest " << i << endl;

        for (int j = 1; j < 4; j++) {

            cout << "Number inside nest " << i << endl;

        }

    }


    return 0;
}