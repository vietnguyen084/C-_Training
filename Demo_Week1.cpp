// Data types and variable types

/* 
    Data type: char, int, long, float, double, word 
    Modifier type: sigend, unsigned // only using with long, int, char, short 
*/

#include <iostream>
using namespace std;

string isBrother(int a , int b); 
string isBrother(int a , int b){
    return a > b ? "OK Brother" : "Not Brother";
}

char inputANumber(char a);
char inputANumber(char a){
    return a;
}

void printChar(char a);
void printInt(char a);

void printChar(char a){
    cout<<"Value char type : "<<a<<endl;
}

void printInt(int a){
    cout<<"Value int type : "<<a<<endl;
}

string CalculateBigNumber(string firstNum, string sencondNum){
    string results;
    for(int i = 0 ; i<firstNum.length();i++){
        
    }




    return results;

}

int main() {
    
    // Declare Data type
    int demoInt = 30;
    bool isViet;
    isViet = true;
    string strTrain = "Started course C++ training";
    double demoDouble = 9.9;

    typedef int demo_typedef;
    demo_typedef test = 10;
    cout<< "\ntest = "<<test<<endl;

    char isChar1  = 'c';
    //char isChar2  = "c";

    //char isChar3 = 'test char'; 
    //char isChar4 = "test char";

    // Declare Modifier type : only using with int, char, short, long types
    unsigned int demo1 = 10; //OK
    //unsigned double demo2 = -10; //ERROR

    signed int demo3 = 10; //OK
    signed long demo4 = -10; //OK

    // type conversion 
    // ex: from double->int: 
    cout<<"\ntype conversion : double->int \n"<<endl;
    double demoConv1 = 9.5;
    cout<< "demoConv1 = "<<demoConv1<<" type is :";
    cout << typeid(demoConv1).name() << endl;

    int demoConv2 ;
    demoConv2 = (int)demoConv1; 
    cout<<"demoConv2  = "<<demoConv2<<" type is :";
    cout << typeid(demoConv2).name() << endl;


    int demoConv3 = 75;
    char demoConv4 = (char)demoConv3;
    int demoConv5 = (int)demoConv4;
    cout<<"demoConv4 : "<<demoConv4<<endl;
    cout<<"demoConv5 : "<<demoConv5<<endl;

    // using in function
    cout<<"\nusing in function "<<endl;
    int ageViet = 23;
    int ageThang = 28;
    string Brother = isBrother(ageViet, ageThang);
    cout<<"\tBrother = "<<Brother<<endl;


    printChar(demoConv3);
    printInt(demoConv3);
    
    // Size of some one data types
    cout<<"\nSize of some one data types in C++ = "<<Brother<<endl;

    cout << "\nSize of char : " << sizeof(char) <<"byte"<< endl;  
    cout << "Size of int : " << sizeof(int) <<"byte"<< endl; 
    cout << "Size of long int : " << sizeof(long int) <<"byte"<< endl;
    cout << "Size of float : " << sizeof(float) <<"byte"<< endl;
    cout << "Size of double : " << sizeof(double) <<"byte"<< endl;
    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl; 
    cout << "Size of unsigned long int : " << sizeof(unsigned long int)  << " bytes" << endl; 

    // demo: input a number in or out of range 
    int numb; 
    char numb1;
    char ans ;
    do{
        cout<<"Please, enter a number(char type) : ";
        cin>>numb;
        char numb1 =  (int)inputANumber(numb);
        if(numb == numb1){
            cout<<"in range"<<endl;
            cout<<"The Number your input :"<<(int)numb1<<endl;
        }else{
            cout<<"out of range"<<endl;
        }
        cout<<"Do you try again?(y/n): ";
        cin>>ans;
    }while(ans=='y');

    return 0;
}
