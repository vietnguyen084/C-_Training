#include<iostream>
#include <cstdlib>
using namespace std;

// if statement
// if else statement
// if else ladder statement
// if else nested statement
// switch case statement 
// switch case nested statement


int main(){
    
    bool b1 = 1 < 2;
    bool b2 = 5 > 10;
    bool b3 = (1 + 1 == 2);

    int a = 2, b = 4;
    bool b4 = (a * 3 != b);

    cout << b1 << " " << b2 << " " << b3 << " " << b4 << endl;

    /*
    // if statement
    int i1 = 10; 
   
        if (i1 > 15) 
        { 
           cout<<"10 is less than 15"<<endl; 
        }     
         
        cout<<"I1 am Not in if"<<endl; 

    // if else statement

    int i2 = 20; 
   
        if (i2 < 15) 
            cout<<"i2 is smaller than 15"<<endl; 
        else
            cout<<"i2 is greater than 15"<<endl;
    
    // if else ladder statement

    int i3 = 20; 
   
    if (i3 == 10) 
        cout<<"i3 is 10"<<endl; 
    else if (i3 == 15) 
        cout<<"i3 is 15"<<endl; 
    else if (i3 == 20) 
        cout<<"i3 is 20"<<endl; 
    else
        cout<<"i3 is not present"<<endl; 
    

    // if nested statement

    int i4 = 10; 
   
        if (i4 == 10) 
        { 
            // First if statement 
            if (i4 < 15) 
               cout<<"i4 is smaller than 15"<<endl; 
   
            // Nested - if statement 
            // Will only be executed if statement above 
            // it is true 
            if (i4 < 12) 
                cout<<"i4 is smaller than 12 too"<<endl; 
            else
                cout<<"i4 is greater than 15"<<endl; 
        } 

    // switch case statement 
    int num;
    cout<<"Enter a Number between 1 and 7:";
    cin>>num;
    
    switch(num)
    {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        // optional
        default:
            cout<<"Invalid Input";
    }
    // end of switch case


    // switch case nested statement
    int a2 = 100;
    int b1 = 200;
    
    switch(a2) {
        case 100: 
            cout << "Day la mot phan cua lenh switch ben ngoai" << endl;
            switch(b1) {
                case 200:
                cout << "Day la mot phan cua lenh switch ben trong" << endl;
            }
    }
    cout << "Gia tri chinh xac cua a2 la: " << a2 << endl;
    cout << "Gia tri chinh xac cua b1 la: " << b1 << endl;



    // Local variable declaration:
   int demoGoto = 10;

   // do loop execution
   LOOP:do {
      if( demoGoto == 15) {
         // skip the iteration.
         demoGoto = demoGoto + 1;
         goto LOOP;
      }
      cout << "value of demoGoto: " << demoGoto << endl;
      demoGoto = demoGoto + 1;
   } 
   while( demoGoto < 20 );

    */

    cout << "This line is printed out." << endl;
	//exit(-1); //Terminate and return -1 to operating system. 
	cout << "This line will never be printed out." << endl;

	system("pause");

    // cout<<"\n"<<endl;
    // int x,y,z;
    // do{
    //     cout<<"x = ";
    //     cin>>x;
    //     if(x > 5){
    //         cout<<"\ny = ";
    //         cin>>y;
    //         if(y > 5){
    //             cout<<"\nIF1"<<endl;
    //         }    
    //     }   
    //     else{
    //         cout<<"ELSE1"<<endl;
    //     }
    //     cout<<"z = ";
    //     cin>>z;
    // }while(z == 0);

    // cout<<"\n"<<endl;
    // int x,y,z;
    // do{
    //     cout<<"x = ";
    //     cin>>x;
    //     if(x > 5)
    //         cout<<"y = ";
    //         cin>>y;
    //         if(y > 5)
    //             cout<<"IF1"<<endl;
    //     else
    //         cout<<"ELSE1"<<endl;
    //         cout<<"z = ";
    //     cin>>z;
    // }while(z == 0);

    // block code
    // int variable = 1;
	// {
	// 	int variable = 10;
	// 	cout << "The variable inside this block is not concerning the variable above" << endl;
	// 	cout << "We print the value of the second variable: " << variable << endl;
	// }
	// cout << "We print the value of the first variable: " << variable << endl;

    // if(5>4)
    //     cout<<"a0";         cout<<"a1";    
    // else
    //     cout<<"b0";


    // switch(4){
    //     case 4: 
    //         cout<<"b0"<<endl;
    //     case 5:
    //         cout<<"b1"<<endl;
    // }

    int a11 = 30;
    goto SWIT;
    cout<<"SWIT"<<endl;
    a11++;
    SWIT:
    switch(a11){
        default:
            cout<<"default"<<endl;
            break;
        case 4:
            cout<<"default4"<<endl;
            break;
        case 3:
            cout<<"default3"<<endl;
            break;
        case 5:
            cout<<"\ndefault5"<<endl;
            break;
    }
     cout<<"end program"<<endl;

    return 0;
}