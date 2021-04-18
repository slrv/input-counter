#include <iostream>
#include "Store.h"

using namespace std;

int main() {
    cout << "Welcome to my super-duper program!" << endl;
    string input;
    while(input != "exit") {
        cout << "Please enter your word or exit to finish: " << endl;
        cin >> input;
        int num = Store::getResult(input);
        cout << "Asked " + to_string(num) + " times." << endl;
    }
    return 0;
}
