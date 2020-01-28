#include <iostream>

//if below function's argument of size isn't there, array can not be delivery to function to main().
//if it is, it needs pointer.
void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    //array, vector, templatized array
    //array is statically sized array, vector is dynamic sized array, templatized array is object array.

    int guesses[] = {1,2,3,4,5,6};
    int guesses2[20];
    int num_elements = 5;
    std::cout << guesses[0] << std::endl;
    guesses[0] = 10;
    std::cout << guesses[0] << std::endl;
    std::cin >> guesses[0];
    std::cout << guesses[0] << std::endl;

    int size = sizeof(guesses) / sizeof(guesses[0]);
    //using array element is better than int() like datatype. because it always right 
    int size2 = sizeof(guesses) / sizeof(int);
    if (size == size2)
    {
        std::cout << "size is "<< size << ", size2 is " << size2 << std::endl;
    }
    for(int i = 0; i < size ; i++)
    {
        std::cout << guesses[i] << std::endl;
    }
    print_array(guesses,size);
    //just initialize the array, it has random number.
    print_array(guesses2, 20);
    int count = 0;
    for(int i = 0; i < 20; i++)
    {
        //guesses is initialized as integer array data type, so if character is intialized, it fails.
        if(std::cin >> guesses2[i])
        {
            count++;
        }
        else
        {
            break;
        }
        
    }
    print_array(guesses2,count);
    //fail value, character in here, is allocated by right after cin >> character variable. so must be cleaned.
    std::cin.clear();
    //std::cin.ignore(10000, '\n'); -> it ignores character value at 10000 times.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}