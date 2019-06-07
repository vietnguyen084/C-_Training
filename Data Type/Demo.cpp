#include<iostream>
#include <cstdlib>
using namespace std;

class test{
    public:
        int member = 1;
         const int* count(int &a) const {a++;}
         void get();
};

int main(){
    test t;
    t.count(t.member);
    cout << t.member << endl;
    return 0;
}

