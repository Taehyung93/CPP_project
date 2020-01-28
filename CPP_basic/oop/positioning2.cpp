#include <iostream>
#include <vector>

class User
{
    public:
        std::string first_name;
        std::string last_name;
};

//class declare가 가장 위에 있어야한다.. 아래에서 그래야 class를 사용해줄 수 있다. 당황스럽다..
std::ostream& operator << (std::ostream& output, User user)
{
    output << user.first_name << user.last_name;
    return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name;
    return input;
}

int main()
{
    User user;
    user.first_name = "ka";
    user.last_name = "ta";
    //overloading for cout!!
    std::cout << user << std::endl;

    std::cin >> user;
    std::cout << user << std::endl;
}
