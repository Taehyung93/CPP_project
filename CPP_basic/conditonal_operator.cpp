#include <iostream>

int main()
{
    int answer = 11;
    int guess;
    std::cout << "Guess the number: ";
    std::cin >> guess;
    int points = guess == answer ? 10 : 0 ;
    std::cout << points << std::endl;
    guess == answer ? std::cout << "Good job\n" : std::cout << "Bad job\n";
}
