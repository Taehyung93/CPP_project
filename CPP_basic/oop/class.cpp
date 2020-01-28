#include <iostream>
#include <vector>

class User
{
    std::string status = "sleepy";
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }
};


int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);

    return users.size() - 1;

}

int main()
{
    std::vector<User> users;

    User user1, user2, user3;
    user1.first_name = "Sung";
    user1.last_name = "hyun";

    user2.first_name = "Kim";
    user2.last_name = "Tae";

    user3.first_name = "Sung";
    user3.last_name = "hyun";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name = "Kim";
    user.last_name = "Hoon";

    //정의되지 않은 것을 넣으면 추가가 된다. 정의된 것은 배열 번호를 리턴한다.
    std::cout << add_user_if_not_exists(users, user) << std::endl;
    std::cout << users.size() << std::endl;
}
