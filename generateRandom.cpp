#include <iostream>
#include <random>
using namespace std;

int main() {
     int guess, randomValue; 
    random_device rd;              // seed source
    mt19937 gen(rd());             // Mersenne Twister engine
    uniform_int_distribution<> dist(1, 100);  // range [1, 100]

    randomValue = dist(gen);

    cout << "Enter your guess : "; 
    cin >> guess ; 
    
    if (guess == randomValue)
        cout << "You guessed the number correctly. ";
    else if (guess > randomValue)
        cout << "You guessed  high. ";
    else 
        cout << "You guessed low.";
    cout << randomValue;
    return 0;
}