#include <iostream>
#include <Windows.h>
using namespace std;
template<typename T>
struct Block {
    T* address;
    Block* next;
};
template<typename T>
T* newBlock(T *val)
{
    Block<T> newblock = new Block<T>;
    newblock->address = val;
    newblock->next = nullptr;
    return newBlock;
}
int main()
{
    char type[7];
    cout << "Enter type of variable: ";
    cin >> type;
    cout << "Enter Value: ";
    if (strcmp(type,"int") == 0)
    {
        
    }else if (strcmp(type, "float") == 0)
    {
        
    }else if (strcmp(type, "double") == 0)
    {
        
    }
    else if (strcmp(type, "char"))
    {
        
    }
    else {
        cout << "Fail!";
        return 1;
    }
    return 0;
}