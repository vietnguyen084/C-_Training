#include<iostream>
using namespace std;

class Block{
    private:
        int self;
        int index;
        time timestamp;
        string data;
        string hash;
        string previous_hash;
    public:
        Block(int se, int ind, time tim, string dat, string has, string pre_hash){
            self = se;
            index = ind;
            time = tim;
            data = dat;
            hash = Hash_Data(has);
            previous_hash = pre_hash;
        }

        string Hash_Data(string hash){
            string newHash;
            for(int i = 0 ; i < hash.length(); i++){
                newHash = hash[i]+;
            }
            return newHash;
        }



};



int main(){



    return 0;
}