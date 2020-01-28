#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(int count)
{
    std::ifstream input("best_score.txt");
    if(!input.is_open())
    {
        std::cout << "Unable to read file\n" << std::endl;
        return;
    }
    //best_score has initial value
    int best_score;
    //input value is from best_score.txt and it transfers to best_score variable
    //data flows what arrow indicates
    input >> best_score;
    std::cout << best_score << std::endl;
    std::ofstream output("best_score.txt");
    if(!output.is_open())
    {
        std::cout << "Unable to read file\n" << std::endl;
        return;
    }
    if(count < best_score)
    {
        output << count;
    }
    else
    {
        output << best_score;
    }
}


void print_vector(std::vector<int> vector)
{
    for(int i = 0; i < vector.size() ; i++)
    {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
}


void play_game()
{   
    //if do not modify srand to seed value of rand(), default seed value is 1.
    //so always has same sequence of random value like 12323, 21412, 435
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";

    std::vector<int> guesses;
    
    int count = 0;
    while(true)
    {
        //time is system time that 1970 to now. so it always have different value.
        srand(time(NULL));
        int guess;
        std::cin >> guess;
        guesses.push_back(guess);
        count++;
        if(guess == random)
        {
            std::cout << "You win!\n";
            break;
        }
        else if(guess < random)
        {
            std::cout << "Too low!\n";
        }
        else
        {
            std::cout << "Too high!\n";
        }
    }
    save_score(count);
    print_vector(guesses);
}

int main() 
{   
    int choice;
    do
    {
        std::cout << "0.Quit" << std::endl << "1.Play\n";
        std::cin >> choice;
        //switch only recieve integer arguments.
        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                std::cout << "yo let's play\n";
                play_game();
                break;
        }

    }
    while(choice != 0);
}