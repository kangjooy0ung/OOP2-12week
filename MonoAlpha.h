#include <string>
using namespace std;
#include <stdio.h>
class MonoAlpha{
    string plain;
    string cipher;
public:
    MonoAlpha();
    void encrypt(const string&, const string& );
    void decrypt(const string& , const string& );
};