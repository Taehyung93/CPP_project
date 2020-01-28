#include <iostream>

int main()
{
    //if statement
    int age;
    std::cout << "what is your age?\n";
    std::cin >> age;
    if(age < 13)
    {
        std::cout << "You're not old enough\n";
        //return -1; means end the main() function anyway
    }
    else if(age < 19)
    {
        std::cout << "You're illegal\n";
    }
    else
    {
        std::cout << "Always twice";
    }
    //logical && ||!
    //comparison == != < > <= >=

    //switch statement
    switch(age)
    {
        case 17:
            std::cout << "You are age is 17 \n";
            break;
        default:
            std::cout << "This is default \n";
            break;
    }

    enum season{summer, spring, fall, winter};
    season know = winter;
    switch(know)
    {
        case summer:
            std::cout << "what is this happening?";
            break;
        case spring:
            break;
        case fall:
            break;
        case winter:
            std::cout << "Stay warm!\n";
            break;
    }
    //first character of class name is always capital.
    //it must be compiled by c++11.
    
    /*
    enum class Season{summer, spring, fall, winter};
    Season now = Season::winter;
    switch(now)
    {
        case Season::summer:
            std::cout << "what is this happening?";
            break;
        case Season::spring:
            break;
        case Season::fall:
            break;
        case Season::winter:
            std::cout << "Stay hungry, stay foolish!\n";
            break;
    }
    */
    return 0;
}