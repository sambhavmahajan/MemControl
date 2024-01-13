#include <iostream>
#include <Windows.h>
using namespace std;
template<typename T>
struct Block {
    T* address;
    Block* next;
};
int main()
{
    char Type[7];
    cout << "Enter type of variable";
    cin >> Type;
    return 0;
}