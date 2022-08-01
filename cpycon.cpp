#include<iostream>
using namespace std;
class Findage
{
    int age;
    public:
    Findage(int a)
    {
        age=a;
        cout<<"\n Age:"<<age;
    }
    Findage(Findage &new_age)
    {
        age=new_age.age;
        cout<<"\n Age:"<<age;
    }
};
int main()
{
    Findage person1(20);
    Findage person2(person1);
    return 0;
}