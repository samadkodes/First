#include<iostream>

using namespace std;

int main() {
    int userNum = 0;
    int count = 0;

    cout << "Enter a number: ";
    cin >> userNum; 

    for (int i = 1; i < userNum/2; i++){
        if ((userNum % i) == 0){
            count++;
        }
    }

    count++;

    if (count == 2){
        cout << userNum << " is a prime number";
    } else {
        cout << userNum << " is not a prime number";
    }

    return 0;
}