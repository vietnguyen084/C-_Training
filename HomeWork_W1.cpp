#include<iostream>
#include <string>
using namespace std;

string reverse(string str) 
{   
     string results;
   for (int i=str.length()-1; i>=0; i--){
        results += str[i]; 
   }
   return results;
} 

string CalculateBigNumber(string a, string b);
string CalculateBigNumber(string num1, string num2){

    int size1 = num1.length();
    int size2 = num2.length();
    int size;
    int size12 = 0;

    if(size1 == size2){
        size = size1;
    }else{
        if(size1 > size2){
            size = size1;
            size12 = size1 - size2;
            string string12;
            for(int i = 0 ; i < size12 ; i++){
                string12 += "0";
            }
            num2 = string12 + num2;
        }else{
            size = size2;
            size12 = size2 - size1;
            string string21;
            for(int i = 0 ; i < size12 ; i++){
                string21 += "0";
            }
            num1 = string21 + num1;
        }
    }

    string results;
    for(int i = size - 1 ; i >= 0 ; i-- ){
        char data2 = num1[i];
        char data4 = num2[i];
        int data = data2 - 48 + data4 - 48;
        string datastring = to_string(data);
        if(data>=10){
            results += datastring[1];
            num1[i-1] += 1;  
        }else{
            results += datastring;
        }
    }
    results = reverse(results);

    return results;
}


int main(){
    string num1 = "567890000000000";
    string num2 = "98745632545848"; 

    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;

    cout<<"Results : "<<CalculateBigNumber(num1,num2)<<endl;

    return 0;
}