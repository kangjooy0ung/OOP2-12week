#include "MonoAlpha.h"
#include <iostream>
#include <fstream>
using namespace std;
MonoAlpha::MonoAlpha(){
    string plain_raw = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz .,!?'";
    string cipher_raw = "nXzOTPyD,!meIHJlWFrYkqvEoxL'CcBduQaspMGfVNZwA.Kt h?bjgRUSi";
    plain = plain_raw;
    cipher = cipher_raw;
}
void MonoAlpha::encrypt(const string& inputFile, const string& outputFile){
    ifstream is {inputFile};
    string temp;
    getline(is,temp);
    for(int i=0 ;i<temp.size();i++){
        temp[i] = cipher[plain.find(temp[i])];
    }
    ofstream os {outputFile};
    os << temp;
}
void MonoAlpha::decrypt(const string& inputFile, const string& outputFile){
    ifstream is {inputFile};
    string temp;
    getline(is,temp);
    for(int i=0 ;i<temp.size();i++){
        temp[i] = plain[cipher.find(temp[i])];
    }
    ofstream os {outputFile};
    os << temp;
}
