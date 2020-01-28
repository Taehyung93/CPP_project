#include <iostream>
#include <vector>
//Friend functions and operator overloading
class User
{
    std::string status = "Gold Finger";
    public:
        std::string first_name;
        std::string last_name;
        friend void output_status(User user);
        //friend member can access private member!!!
        friend std::ostream& operator << (std::ostream& output, User user);

};

//standalone function, user.output_status() never works
void output_status(User user)
{
    std::cout << user.status;
}

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
    
    output_status(user); 

    //std::cout << user.status << std::endl; is not work. before declare friend 
}
