/*
union:
1.mem chỉ cấp cho union 1 address để lưu trữ data (sau khi khai báo biến mới cấp)=> size = max size in members
struct:
1. mem cấp cho các thành viên trong struct, mỗi thành viên 1 vùng nhớ để lưu data=> size của struct là tổng size của các member


Struct: 
* là kiểu noprimitive mà người dùng tự định nghĩa, trong đó chứa tập hợp các phần tử có cùng kiểu hoặc khác kiểu để mô tả một đối tượng nào đó
- Bộ nhớ của struct sẽ được cấp cho mỗi member trong struct, kích thước sẽ bằng tổng size các member => sort đc các membẻ cũng sẽ save đc mem 
- khi khởi khai báo biến kiểu struct thì nó mới đc cấp mem
- các phần tử đc sort liên tiếp nhau trong bộ nhớ same struct

* truy suất
- (.) truy suất bình thường
- (->) dùng thông qua con trỏ

* Sử dụng với funtion
- truyển vào hàm như bình thường với cùng kiểu param

* bit field (chỉ định số bit sử dụng cho các member trong struct)
- check xem range của value cần dùng là bn rồi tính số bit cần sử dụng
vd: value = 100; 2^6 = 128 bit ok => dùng 6 bít ( gần 1 byte) đỡ phải khai báo int tận 4 byte (32 bit)

* Kế thừa - tái sử dụng lại các member => sinh ra tinh da hinh 
    - Đơn kế thừa, đa kế thừa 
    - có thể truy suất đc all các member trong struct của mình đã kế thừa 
    - size of struct cũng tăng lên vì thế.

* Anonymous struct 
    - 

* Nested struct 
    - struct lồng nhau 
 */


#include<iostream>
using namespace std;


// struct 
struct BlockHeader_s {
    float version[2];
    int  last_block;
    string transaction;
    string time;
    string target; 
};

struct BlockHeader_s bl;

// the members in union only init length const, because can not control length orther element
union BlockHeader_u {
    float version;
    int  last_block;
};


// Anonymous Union, Struct 
struct Block_ {
    union {
        int values;
        char fee;
    };
};


union Block_1 {
    struct {
        int values;
        char fee;
    };
    int trans;
};

//nested struct and union
struct chain1{
    int block1;
    struct trans1{
        int num_tran1;
    } tra;
};

struct chain2{
    int block2;
    union trans2{
        int num_tran3;
    };
};

union chain3{
    int block3;
    struct trans3{
        int num_tran3;
    };
};

union chain4{
    int block4;
    union trans4{
        int num_tran4;
    };
};

// extend : struct can not extend union 
struct chain5 : chain1{
    int block5;
};
// union can not extend union, class
union chain6  {
    int block6;
};

/*
    int n; // non-static data member
    int& r; // non-static data member of reference type

 */



void PrintStruct(struct BlockHeader_s bs);
void PrintStruct(struct BlockHeader_s bs){
    cout<<"Values of Element in Struct"<<endl;
    cout<<bs.version[0]<<endl;
    cout<<bs.version[1]<<endl;
    cout<<bs.last_block<<endl;
    cout<<bs.transaction<<endl;
    cout<<bs.time<<endl;
    cout<<bs.target<<endl;
}

struct BlockHeader_ {
    float version;
    int  last_block;
    string transaction;
    string time;
    string target; 
} b2 = {1.2, 450, "50 trans", "10:15" , "00121"} ;

struct Transaction {
    string transaction_hash;
    int status;
    int block;
    string timestamp;
    string from;
    string to;
    double value;
    float transaction_fee;
    double gas_limit;
    double gas_used;
    string nonce;
};

struct bf_day
{
    unsigned int date : 5;  //1->31
    unsigned int month : 4;  //1->12
    unsigned int year : 12;    //0->4000
};

/*
Trường date có giá trị từ 1 -> 31. Do vậy, bạn chỉ cần dùng 5 bit (2^5 – 1 = 31) để biểu diễn trường date
Trường month có giá trị từ 1 -> 12. Do vậy, bạn chỉ cần dùng 4 bit (2^4 – 1 = 15) để biểu diễn trường month
Trường year có giá trị từ 0 -> 4000. Do vậy, bạn chỉ cần dùng 12 bit(2^12 – 1 = 4095) để biểu diễn trường year.
 */
int main(){


    cout << sizeof(chain5) <<endl;

    return 0;


    BlockHeader_s bs;
    BlockHeader_ b;
    BlockHeader_u bu;
    //int *p = &bs; // cannot convert ‘BlockHeader_s*’ to ‘int*’ in initialization
    BlockHeader_s *bss = &bs;
    BlockHeader_u *buu = &bu;

    bs.version[0] = 1.0;
    bs.version[1] = 1.0;

    bu.version = 1.1;
    bu.last_block = 150;



    // the elements in struct sorted is sequences same array 
    cout<<&bs<<endl;
    cout<<&bs.version[0]<<endl;
    cout<<&bs.version[1]<<endl;
    cout<<&bs.last_block<<endl;

    // union only init one address in memory for storage data 
    cout<<&bu<<endl;
    cout<<&bu.version<<endl;
    cout<<&bu.last_block<<endl;

    bs.version[0] = 1.1;
    bs.version[1] = b2.version;
    bs.last_block = 9;
    bs.transaction = "50 trans";
    bs.time = "25/6/2019 11:35:18";
    bs.target = "00000000000111111";

    PrintStruct(bs);

    // b2.version = 1.0;
    // b2.last_block = 110;
    // b2.transaction = "70 trans";
    // b2.time = "25/6/2019 11:36:18";
    // b2.target = "00000000000111211";

    buu->version = 1.1;
    buu->last_block = 12;
    // bu.transaction = "30 trans";
    // bu.time = "27/6/2019 11:35:18";
    // bu.target = "00000004444444";


    // cout<<bu.version<<endl;
    // cout<<bu.last_block<<endl;
    // cout<<bu.transaction<<endl;
    // cout<<bu.time<<endl;
    // cout<<bu.target<<endl;


    struct Block_ block;
    block.values = 65;

    cout<<"================\n"<<block.values<<endl;
        
    cout<<block.fee<<endl;

    cout<<"================\n";
    Block_1 block1;

    block1.fee = 10;
    block1.values = 25;
    block1.trans = 40;

    cout<<block1.values<<endl;
    cout<<block1.fee<<endl;

    cout<<block1.trans<<endl;

    cout<<block1.fee<<endl;

    cout<<&block1.values<<endl;
    cout<<&block1.fee<<endl;
    
    cout<<&block1.trans<<endl;

    cout<<&block1.fee<<endl;

    bl.target = 10;


    union st_day
    {
        unsigned int date; //ngay
        unsigned int month; //thang
        unsigned int year; //nam
    };

    union bf_day
    {
        unsigned int date : 5;  //1->31
        unsigned int month : 4;  //1->12
        unsigned int year : 12;    //0->4000
    };
    st_day sd;
    bf_day bd;

    cout<<sizeof(sd)<<"============"<<sizeof(bd)<<endl;

    cout<<"================nested"<<endl;

    //chain1.tra.num_tran1 = 10; truy xuat 
    chain1 chain1;
    chain1::trans1 trans_1;
    chain1.block1 = 10;
    trans_1.num_tran1 = 15;

    chain5 chain_5;
    chain1.block1 = 12;
    chain_5.block1 = 10;

    chain6 chain6;
    chain6.block6 = 10;
    //chain6.block4 = 12;
    
    return 0;
}