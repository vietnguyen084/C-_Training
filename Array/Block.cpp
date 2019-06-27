#include<iostream>
#include<cstdlib>
using namespace std;

class Block{
    private:
        int name;
        string time;
        int transaction;
    public:
        Block();
        ~Block();

    

};
int main(){
    int v1 = rand();
    cout<<v1<<endl;
    string a = "Nguyen Tien Viet";
    for(int i = 0 ; i < a.length(); i++){
        a[i] = a[i] + v1;
    }
    
    cout<<a<<endl;

    for(int i = 0 ; i < a.length(); i++){
        a[i] = a[i] - v1;
    }

    cout<<a<<endl;

    return 0;
}
