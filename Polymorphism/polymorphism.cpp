/*
Abtract class 
+ Không cho phép tạo đối tượng của lớp, trừ kiểu con trỏ và tham chiếu abtract class có thế tạo ra
+ có thể có function bình thường và biến cùng với một hàm ảo thuần tuý.
+ Lớp kế thừa một abstract class phải thực hiện tất cả các function thuần ảo, nếu không nó cũng sẽ trờ thành một abstract class

 */


/*
Trong OOP và cụ thể là trọng ngôn ngữ C++ thì Polymorphism có 2 dạng:

Dạng 1 – Compile time Polymorphism: Một class có nhiều hàm cùng tên nhưng khác nhau về số lượng tham số hoặc kiểu dữ liệu của tham số. Khi call hàm cùng tên đó thì trong quá trình biên dịch, compiler sẽ quyết định hàm nào (trong số các hàm cùng tên) sẽ được call dựa trên số lượng tham số và kiểu dữ liệu của tham số truyển vào hàm. Việc định nghĩa các hàm cùng tên được gọi là overloading – nạp chồng hàm.

#include <iostream>
using namespace std;
 
class PrintData {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }

    void print(double  f) {
        cout << "Printing float: " << f << endl;
    }
    
    void print(char* c) {
        cout << "Printing character: " << c << endl;
    }
};

int main(void) {
    PrintData pd;

    pd.print(5);// Call print to print integer
    pd.print(500.263);// Call print to print float
    pd.print("Hello C++");// Call print to print character

    return 0;
    */
/*
Dạng 2 – Runtime Polymorphism: Cùng một class có thể cho ra nhiều biến thể, không phải được định nghĩa bởi lớp đó, mà bởi các lớp con của nó. Đây là một phương pháp để định nghĩa lại hành vi của lớp cơ sở mà không phải sửa code (còn gọi là implementation) của lớp cơ sở. Nếu call hàm của đối tượng của lớp dẫn xuất thông qua con trỏ của lớp cơ sở thì việc hàm nào (của lớp cơ sở hay). Runtime Polymorphism được thực hiện bằng phương pháp overriding – ghi đè phương thức.
*/

#include <iostream>
using namespace std;
 
class Pet {
protected:
    string Name;
public:
    Pet(string n) { Name = n; }
    virtual string getSound() { return "die";}; // hàm này được khai báo là hàm ảo (virtual) ở class cha, điều đó cho phép các class con như Cat, Dog định nghĩa lại (overriding) hàm này cho phù hợp với đặc điểm riêng của chúng. không có virtual các class con sẽ gọi hàm của lớp cha
    void makeSound(void) { cout << Name << "says: " << getSound() << endl; }
};
 
class Cat : public Pet {
public:
    Cat(string n) : Pet(n) { }
    string getSound() { return "Meow! Meow!";};
};
 
class Dog : public Pet {
public:
    Dog(string n) : Pet(n) { }
    string getSound() { return "Woof! Woof!";};
};
 
int main(void) {
    Pet *a_pet = new Cat("Kitty");;
    a_pet->makeSound();
    delete a_pet;
 
    a_pet = new Dog("Doggie");
    a_pet->makeSound();
    delete a_pet;
 
    return 0;
}




/*
#include<iostream>
using namespace std;

class Block{
    protected:
        float version;
        int  last_block;
        string transaction;
        string time;
        string target;
    public:
        Block();
        Block(float ver, int last_b, string tran, string ti, string tar){
            version = ver;
            last_block = last_b;
            transaction = tran;
            time = ti;
            target = tar;
        } 
};

class Transaction : public Block{
    private:

    public:
        Transaction(float ver, int last_b, string tran, string ti, string tar):Block(ver,last_b, tran, ti, tar){}
};
*/