
#include <iostream>

void variableToFunction(int i) // new variable
{
    i = 20;
}
void referenceToFunction(int& i) // reference -> no new variable
{
    i = 20;
}

void pointerToFunction(int* i) // new variable -> variable for address
{
    std::cout  << "address: " << i << std::endl;
    std::cout << "value in the address: " << *i << std::endl;
    *i = 0; // modify the value in the memory address
    std::cout << "address: " << i << std::endl;
    std::cout << "value in the address: " << *i << std::endl;
}

void arrayToFunction(int *arrayParameter/*int arrayParameter[]*/)
{
    arrayParameter[0] = 10;
    arrayParameter[1] = 20;
}

int main()
{
    int a = 10;
    int my_array[5] = { 4,7,5,4,3 };
    arrayToFunction(my_array);
    std::cout << my_array << std::endl;
    std::cout << my_array[1] << std::endl;
}
