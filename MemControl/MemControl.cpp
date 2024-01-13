#include <iostream>
#include <Windows.h>
using namespace std;
template<typename T>
struct Block {
    T* address;
    Block* next;
};
template<typename T>
T* newBlock(T* val)
{
    Block<T> newblock = new Block<T>;
    newblock->address = val;
    newblock->next = nullptr;
    return newblock;
}
template<typename T>
class Head {
public:
    T* item;
};
template <typename T>
void searchBlocks(T Target)
{
    T* i = 0;
    while(i < 0x7fffffff)
    {
        if (*i == Target)
        {

        }
        ++i;
    }
}
int main()
{
    char type[7];
    type[6] = '\0';
    cout << "Enter type of variable: ";
    cin >> type;
    cout << "Enter Value: ";
    if (strcmp(type,"int") == 0)
    {
        int t;
        cin >> t;
        searchBlocks<int>(t);
    }else if (strcmp(type, "float") == 0)
    {
        float t;
        cin >> t;
        searchBlocks<float>(t);
    }else if (strcmp(type, "double") == 0)
    {
        double t;
        cin >> t;
        searchBlocks<double>(t);
    }
    else if (strcmp(type, "char") == 0)
    {
        char t;
        cin >> t;
        searchBlocks<char>(t);
    }
    else {
        cout << "Fail!";
        return 1;
    }
    return 0;
}