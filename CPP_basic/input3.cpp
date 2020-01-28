#include <iostream>
#include <fstream>
#include <vector>
// Keyboard -> buffer -> running program
int main()
{
    std::string filename;
    std::cin >> filename;
    //add std::ios::app makes hello.txt exist. so does not make txt file every time.
    std::ofstream file2 (filename.c_str(), std::ios::app);

    if(file2.is_open())
    {
        std::cout << "success n00b\n";
    }
    std::vector<std::string> names2;
    names2.push_back("killer_queen");
    for(std::string name : names2)
    {
        file2 << name << std::endl;
    }
    file2.close();

    std::ifstream file ("tacos.txt");
    std::vector<std::string> names;
    std::string input;
    //input reads file's string.
    //if we declare instead string of char, it reads char type ex) a,b,c...
    while(file >> input)
    {
        names.push_back(input);
    }

    for(std::string name : names)
    {
        std::cout << name << std::endl;
    }

    file.close();
    return 0;
}
