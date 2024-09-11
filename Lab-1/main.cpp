#include <iostream>

using namespace std;
 
int main() {
    string a, b, c, d, e, f;
    a = "int, 4 bytes, min -2 147 483 648, max 2 147 483 647\n";
    b = "unsigned char, 1 byte, min 0, max 255\n";
    c = "float, 4 bytes, min 1,175494351 E - 38, max 3,402823466 E + 38\n";
    d = "double, 8 bytes, min 1,7E-308, max 1,7E+308\n";
    e = "char, 1 byte, min -128, max 127\n";
    f = "bool, 1 byte, min 0, max 1\n";
    cout << a << b << c << d << e << f;
    int intt1, intt2;
        intt1 = 4; intt2 = 10;
    cout << intt1 + intt2 << endl;
    unsigned char charr1, charr2;
        charr1 = 100; charr2 = 70;
    cout << charr1 + charr2 << endl;
    float float1, float2;
        float1 = 1.2; float2 = 20.23;
    cout << float1 - float2 << endl;
    double double1, double2;
        double1 = 1923142341.1234123; double2 = 123412341.2324;
    cout << double1 - double2 << endl;
    char char1, char2;
        char1 = 100; char2 = -20;
    cout << char1 + char2 << endl;
    bool bool1, bool2;
        bool1 = 1; bool2 = 0;
    cout << bool1 * bool2 << endl;
    
}