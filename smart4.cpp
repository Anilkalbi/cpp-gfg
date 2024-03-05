#include<iostream>
template<class T>
class SP
{
    T*ptr;
    public:
    SP(T*p=NULL)
    {
        ptr=p;
    }
    ~SP()
    {
        delete ptr;
    }
    T &operator*()
    {
        return *ptr;
    }
    T *operator->()
    {
        return ptr;
    }
};
int main()
{
    SP<int>SP(new int());
    *SP=20;
    std::cout<<*SP;
    return 0;
}