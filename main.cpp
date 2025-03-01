#include <iostream>
#include "MonoAlpha.h"
using namespace std;

int main() {
    int opt;
    cin >> opt;
    string inputfile;
    string outputfile;
    MonoAlpha mono;
    if(opt == 1){
        inputfile = "/Users/inhyuk-ryu/xcode_cpp/Week12-opp2/Week12-opp2/plainFile";
        outputfile = "/Users/inhyuk-ryu/xcode_cpp/Week12-opp2/Week12-opp2/output.txt";
//        inputfile = "plainFile";
//        outputfile = "output.txt";
        mono.encrypt(inputfile, outputfile);
    }
    else if (opt == 2){
        inputfile = "/Users/inhyuk-ryu/xcode_cpp/Week12-opp2/Week12-opp2/cipherFile";
        outputfile = "/Users/inhyuk-ryu/xcode_cpp/Week12-opp2/Week12-opp2/output.txt";
//        inputfile = "chipherFile";
//        outputfile = "output.txt";
        mono.decrypt(inputfile, outputfile);
        
    }
    return 0;
    
}
