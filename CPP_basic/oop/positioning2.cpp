#include <iostream>
#include <vector>

class User
{
    public:
        std::string first_name;
        std::string last_name;
};

//class declare�� ���� ���� �־���Ѵ�.. �Ʒ����� �׷��� class�� ������� �� �ִ�. ��Ȳ������..
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
