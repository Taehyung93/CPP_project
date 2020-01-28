#include <iostream>
#include <vector>

class User
{
    std::string status = "sleepy";
    //class 밖에서 initialize할 때까지 memory가 할당되지 않는다.
    //memory 관리에 탁월하다.
    static int user_count;

    public:
        static int get_user_count()
        {
            return user_count;
        }
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
        User()
        {
            user_count++;
            //std::cout << user_count << std::endl;
        }
        User(std::string first_name, std::string last_name, std::string status)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        ~User()
        {
            user_count--;
            //std::cout << user_count << std::endl;
        }

};

int User::user_count = 0;

int main()
{
    User user1, user2, user3, user4, user5;
    std::cout << User::get_user_count() << std::endl;
    user1.~User();
    std::cout << User::get_user_count() << std::endl;
}
