/* Test Multi-dimensional Array (Test2DArray.cpp) */
#include <iostream>
using namespace std;

struct Car{
   float price;
   double height;
   int seat ;
   string name; 
};

void PrintArray(string arr[], int size);
void PrintArray(string arr[], int size){
   for(int i = 0 ; i < size ; i++){
      //arr[i]++;
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void PrintArray_Z(int arr[10]);
void PrintArray_Z(int arr[10]){
   //cout<<arr<<endl;
   for(int i = 0 ; i < 10 ; i++){
      arr[i]++;
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

// Sử dụng con trỏ trỏ đến mảng
void PrintArray_P(int *arr, int size);
void PrintArray_P(int *arr, int size){
   for(int i = 0 ; i < size ; i++){
      arr[i]++;
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void PrintArray_Pointer(int *arr[], int size);
void PrintArray_Pointer(int *arr[], int size){
   cout<<"same " << arr << endl;
   for(int i = 0 ; i < size ; i++){
      cout << *arr[i] << endl;
      // cout << *((arr)+i) << endl;
   }
   cout<<endl;
}

int * arrData(int arr[], int size){
   static int arrDa[10]; // nên sử dụng static để khai báo, nhưng có 1 số case vẫn có thể không lỗi do ô nhớ đó chưa sử dụng
   cout<<"arrDA = "<<arrDa<<endl;
   for(int i = 0 ; i < size ; i++){
      arrDa[i] = arr[i];
   }
   return arrDa; // return ra địa chỉ ô nhớ của phần tử đầu tiên của mảng, trả về địa chỉ thế này thì mới truy xuất đến phần tử tiếp theo đc chứ, địa chỉ trùng với địa chỉ truyền vào
}

int arrData1(int arr[], int size){ // Tham trị 
   static int arrDa[10]; // nên sử dụng static để khai báo, nhưng có 1 số case vẫn có thể không lỗi do ô nhớ đó chưa sử dụng
   for(int i = 0 ; i < size ; i++){
      arrDa[i] = arr[i];
   }
   return *arrDa; // return ra giá trị ô nhớ của phần tử đầu tiên của mảng, nhưng giá trị này lại lưu ở một đia chỉ khác không trùng với mảng truyển vào
}

int & arrData2(int arr[], int size){ // THAM CHIẾU ! ĐỊA CHỈ 
   static int arrDa[10]; // nên sử dụng static để khai báo, nhưng có 1 số case vẫn có thể không lỗi do ô nhớ đó chưa sử dụng
   for(int i = 0 ; i < size ; i++){
      arrDa[i] = arr[i];
   }
   return *arrDa; // return ra giá trị ô nhớ của phần tử đầu tiên của mảng 
}



int main() {
   // const int size = 5;
   // int numbers[10];  // array index from 0 to 
   
   // // Index out of bound!
   // // Can compiled and run, but could pose very serious side effect!
   // numbers[12] = 999;
   // cout << numbers[8] << endl;
   // cout << numbers[11] << endl;
   // cout << numbers[12] << endl;

   // cout << &numbers[8] << endl;
   // cout << &numbers[11] << endl;
   // cout << &numbers[12] << endl;
   // cout << &numbers[13] << endl;

   #define MAX_SIZE 16
   int arrDemo1[MAX_SIZE] = {0,1,2,3,4,5,6,7,8,9,1,1,1,1,1,1};
   char Data[] = "Sun-Framgia";
   string Data2[] = {"A","B","C","D"};
   //cout<<arrDemo1<<endl;

   Data[11] = 'm';
   Data2[3] = "a";
   //PrintArray(Data,11);

   PrintArray(Data2,4);
   
   return 0;
   // PrintArray(arrDemo1, MAX_SIZE);
   // int *po;
   // po = arrDemo1;
   // po[1] = 10;

   // PrintArray_Z(arrDemo1);

   return 0;
   // PrintArray(arrDemo1, MAX_SIZE);

   // using pointer to access element of array 
   // int *pDemo = new int(8); // value at address 8
   // cout<<*pDemo<<endl; //
   // pDemo = arrDemo1; // value of pointer = address of array 

   // cout<<*pDemo<<endl;
   // cout<<*arrDemo1<<endl;

   // cout<<&arrDemo1[0]<<endl;
   // cout<<&arrDemo1<<endl;

   // cout<<*(pDemo + 1)<<endl;
   // cout<<*(arrDemo1 + 1)<<endl;

   int *p1 = new int (10);
   int *p2 = new int (11);
   int *p3 = new int (12);
   int *p4 = new int (13);

   int *pDemo1[] = {p1, p2, p3, p4};
   // **pDemo1;
   // pDemo1 = &pDemo;
   // dùng con mảng con trỏ
   //PrintArray_Pointer(pDemo1, 4);

   //PrintArray_P(arrDemo1,MAX_SIZE);
   //PrintArray(arrDemo1, MAX_SIZE);
   cout<<"ahaha : "<<arrDemo1<<endl;
   PrintArray_Z(arrDemo1);
   // int arrDemo11[MAX_SIZE] = {0,1,2,3,4,5,6,7,8,9};

   int *pp;
   pp = arrData(arrDemo1, 10);
   cout<<"pp = "<<pp<<endl;


   // hàm trả về 1 giá trị của mảng 
   cout<<*&arrDemo1<<endl;
   //int b = arrData1(arrDemo1,10)<<endl;
   // cout<<b<<endl; // static, 0 static có thể error 
   // cout<<"add B = "<<&b<<endl;
   // int *p12;
   // p12 = &b;
   // cout<<p12<<"\n"<<&*(p12 + 1);



   // int & p = arrData2(arrDemo11,10) ; 

   // cout<<"p = "<<p<<endl;
   // cout<< &arrData2(arrDemo11,10) << endl;

   // mảng với kiểu non-primitive 
   Car car;
   Car carData[10];
   carData[1].height = 10;
   carData[1].name = "BMW";
   carData[1].price = 10.5;
   carData[1].seat = 4;

   carData[2].height = 105;
   carData[2].name = "BMWi";
   carData[2].price = 100.5;
   carData[2].seat = 41;


   //int arrDemo2[][MAX_SIZE][] = {{{1,2},{2,3},{4,5}}} ;
   


   return 0;
}