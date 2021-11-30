#include "std_lib_facilities.h"
using namespace std;

//function to greet the user. If their name is the same as mine, I'll show them my surprise
void printMessage(const string myName, string friendName) {
    if(friendName == myName) {
        cout << "No way! We have the same name!";
    }
    else {
        cout << "Hello " << friendName << ". Nice to meet you!";
    }
}

int main() {
    //const string for my name
    const string myName = "Luis";
    string friendName;
    //prompt the user for their name
    cout << "Please, tell me what your name is!\n";
    cin >> friendName;
    //now print the appropriate message depending on whether or not their name is the same as mine
    printMessage(myName, friendName);
    //end main
    return 0;
}