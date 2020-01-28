#include <iostream>

//overriding concept!!
class Position
{
    public:
        int x = 10;
        int y = 20;
        //operator = pos1 pos = pos2
        Position operator + (Position pos)
        {
            Position new_pos;
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }
        //lvalue required as left operand of assignment 해당 에러는 다시 적어주니까 없어졌다.
        bool operator == (Position pos)
        {
            if(x == pos.x && y == pos.y)
            {
                return true;
            }
            return false;
        }
};

int main()
{
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;
    std::cout << pos3.x << " " << pos3.y << std::endl;
    // if pos2.x = 30; below if statement does not work.
    if(pos1 == pos2)
    {
        std::cout << "They are the same!\n";
        std::cout << "tacos!\n";
        std::cout << "pizza!\n";
    }

    // std::cout << pos3 << std::endl;
    return 0;
}