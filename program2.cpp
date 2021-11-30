#include "std_lib_facilities.h"
using namespace std;

//function to print every number up to 1000, but only the ones divisible by 5
void printDivisibleByFive(const int div, int nums[]) {
    for(int i = 0; i < 1001; i++) {
        if(nums[i] % div == 0) {
            cout << nums[i];
            cout << "\n";
        }
    }
}

int main() {
    const int divisible_five = 5;
    int numbers[1001];
    //get all the numbers to 1000
    for(int i = 0; i < 1001; i++) {
        numbers[i] = i;
    }
    printDivisibleByFive(divisible_five, numbers);
    //end main
    return 0;
}