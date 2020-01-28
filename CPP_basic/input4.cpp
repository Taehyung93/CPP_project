#include <iostream>
#include <fstream>
int main() 
{
    //if once get char of txt file, you can not get same value so output is k, iller_queen
    //it can also be opened by exist text file
    std::ifstream file ("tacos.txt");
    char temp = file.get();
    std::cout << temp << "\n";

    std::string line;
    getline(file, line);
    std::cout << line << "\n";
    return 0;
}
