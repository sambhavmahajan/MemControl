#include <iostream>

using namespace std;

template<typename T>
class Block {
public:
    T* address;
    Block<T>* next;
    Block() : item(nullptr), next(nullptr){}
    ~Block()
    {
        delete item;
        delete next;
    }
};
template <typename T>
Block<T>* searchBlocks(T Target)
{
    Block<T>* head = new Block<T>();
    Block<T>* curr = head;
    T* i = 0;
    while(i < reinterpret_cast<T*>(0x7fffffff))
    {
        if (*i == Target)
        {
            curr->address = i;
            curr->next = new T;
            curr = curr->next;
        }
        ++i;
    }
    return head;
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
        Block<int>* head = searchBlocks<int>(t);
    }else if (strcmp(type, "float") == 0)
    {
        float t;
        cin >> t;
        Block<float>* head = searchBlocks<float>(t);
    }else if (strcmp(type, "double") == 0)
    {
        double t;
        cin >> t;
        Block<double>* head = searchBlocks<double>(t);
    }
    else if (strcmp(type, "char") == 0)
    {
        char t;
        cin >> t;
        Block<char>* head = searchBlocks<char>(t);
    }
    else {
        cout << "Fail!";
        return 1;
    }
    return 0;
}