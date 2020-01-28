#include <iostream>
#include <vector>


struct User
{
    std::string first_name;
    std::string last_name;
    //if you want to know private value of status, make return method.
    //it only compile with above 11 version.
    std::string get_status()
    {
        return status;
    }
    //if status is private, me.status can not be accessed.
    private:
        std::string status = "Sleepy!!!";
};

class Class_user
{
    //class is by default private
    std::string status = "FuckedUP!!!";
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
    {
        return status;
    }
}; //class also need ;



int main()
{
    User me;
    Class_user class_me;
    me.first_name = "Kim";
    me.last_name = "Taehyung";
    
    class_me.first_name = "Kim";
    class_me.last_name = "Taehyung";

    std::cout << me.first_name + me.last_name << " is " << me.get_status() <<"\n";
    std::cout << class_me.first_name + class_me.last_name << " is " << class_me.get_status() <<"\n";
    
    std::vector<Class_user> class_user;
    //push_back class_me only push into 0 location.
    //push_back Class_user() has none value
    
    class_user.push_back(Class_user());

    std::cout << class_user[0].first_name + class_user[1].first_name + class_user[2].first_name << "\n";

    return 0;
}