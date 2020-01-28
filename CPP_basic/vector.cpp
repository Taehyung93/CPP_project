#include <iostream>
#include <vector>

//vecotr array must be compiled by g++ vector.cpp -std=c++11
//run with ./a.out 
//last, save and compile !!
//If you want to update vector items, you can put & infront of items. it will be reference data type.
void print_vector(std::vector<int> &items)
{
    items.push_back(12);
    for(int i = 0; i < items.size(); i++)
    {
        std::cout << items[i] << " ";
    }
    std::cout << std::endl;
}

void two_dimension_vector()
{
    int grades[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    std::cout << "It is pure array" << std::endl;
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            std::cout << grades[r][c] << " ";
        }
        std::cout << std::endl;
    }

    std::vector<std::vector<int>> vector_grades = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    std::cout << "It is vector" << std::endl;
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            std::cout << vector_grades[r][c] << " ";
        }
        std::cout << std::endl;
    }
}

//vector has size(), not pointer to transfer data, dynamic data size
int main()
{
    std::vector<int> items = {1,2,3};
    items.push_back(100);
    std::cout << items.size() << std::endl;
    items.pop_back();
    std::cout << items.size() << std::endl;
    print_vector(items);
    print_vector(items);
    print_vector(items);
    print_vector(items);
    two_dimension_vector();

}