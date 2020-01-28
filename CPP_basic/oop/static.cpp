#include <iostream>
#include <vector>

class User
{
    std::string status = "sleepy";
    //class �ۿ��� initialize�� ������ memory�� �Ҵ���� �ʴ´�.
    //memory ������ Ź���ϴ�.
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
