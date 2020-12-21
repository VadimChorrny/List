#include <iostream>

using namespace std;

static class myClass
{
public:
    static void foo() {
        cout << "Worked" << endl;
    }
};

int main()
{
    myClass t;
    t.foo();
    std::cout << "Hello World!\n";
}