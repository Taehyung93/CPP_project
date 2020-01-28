#include <iostream>
#include <vector>

class User
{
    std::string status = "sleepy";
    public:
        std::string first_name;
        std::string last_name;
        //getter는 하나의 값을 가져올 때 쓰인다.
        std::string get_status()
        {
            return status;
        }
        //setter는 constructor와 다르게 따로 함수를 만들어줘서 일일히 하나의 값을 넣어주는 함수이다.
        //아래와 같이 하나의 값에 여러 변형을 줄 때 사용하면 좋다.
        void set_status(std::string status)
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "That is not fit for status";
            }
            
            this->status = status;
        }
};

int main()
{
    User me;
    me.set_status("Gold");
    std::cout << me.get_status() << std::endl;
}
