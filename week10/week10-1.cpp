///week10-1.cpp
#include <iostream>
using namespace std;
///你在寫class Cat{寫完大括號,他會幫你補完;再多打2個Enter
class Cat{///貓的類別
public:
    void print(){
        cout<<"I am a cat. meow meow\n";
    }
};

class Mouse{
public:
    void printf(){
        cout<<"I am a mouse. chi chi\n";
    }
};

int main()
{///大寫 小寫
    Cat cat1,cat2;///cat1 cat2都是 Cat
    cat1.print();
    cat2.print();
}
