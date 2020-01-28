#include <iostream>

int main()
{
    //for loop
    for (int i = 0 ; i < 10 ; i++)
    {
        std::cout << i << std::endl;
    }
    int fact = 5;
    int factorial = fact;
    for (int i = factorial-1; i > 1; i--)
    {
        factorial *= i;
    }
    std::cout << "factorial of " << fact << ": " << factorial << std::endl;
    
    //while loop
    int factorial2 = fact;
    int i = factorial2 -1;
    while(i>1)
    {
        factorial2 *= i;
        i--;
    }
    std::cout << "factorial of " << fact << ": " << factorial2 << std::endl;

    //do while loop
    //first, just do it! yes, it always execute the code at least once.
    //of course, if below two codes is in do{}, while's guess has no value. it is scope problem.
    std::string password = "hellotacos123";
    std::string guess;
    do
    {
        std::cout << "Guess the password: ";
        std::cin >> guess;
        
    } while (guess != password);

    //index by for loop
    std::string sentence = "Hello my name is Caleb";
    for(int i = 0; i < sentence.size(); i++)
    {
        
        //if 'o' is "o", it invokes error. "o" is String data type and 'o' is char data type. 
        //sentence[i] is char data type, so we need char data type 'o'
        //if comparison char is ' ', this for loop only prints character
        if(sentence[i] == ' ')
        {
            
            //std::cout << "found o! goodbye~!!\n";
            //continue means that do not break entire for loop but only once at this moment.
            continue;
        }
        std::cout << sentence[i] << std::endl;
        
    }

  
        
    return 0;
}