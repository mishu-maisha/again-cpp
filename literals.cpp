// C++ Proram to illustrate the use of integer literals
#include <iostream>
using namespace std;

int main() {
    
    // Integer literals of different bases
    int dec= 42;
    int oct= 052;
    int hex= 0x2A;
    int bin= 0b101010;
    long int lint= 42L;
    unsigned int uint= 42U;
    long long int llint= 42LL;
    const char* s = "Hello, GeeksforGeeks!";
  
    cout << s<<endl;
    
    // printing every value
    cout << dec << endl;
    cout << oct << endl;
    cout << hex << endl;
    cout << bin << endl;
    cout << lint << endl;
    cout << uint << endl;
    cout << llint;
  
    return 0;

}
