#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int randBelow(int max) {
    int result = rand() % max;
    return result;
}

int main() {
    srand(time(NULL));

    while (true) {
        int x = randBelow(10);
        int y = randBelow(10 - x);
        int answer;

        while (true) {
            cout << x << " + " << y << " = " << flush;
            cin >> answer;
            cin.clear();
            cin.ignore();

            if (answer == (x + y)) {
                cout << "...CORRECT!\n" << endl;
                break;
            }
            cout << "...TRY AGAIN!\n" << endl;
        }
        
    }
    return 0;
}