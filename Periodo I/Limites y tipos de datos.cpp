#include <iostream>
#include <limits>

using namespace std;

int main(){

    int imin = numeric_limits<int>::min();
    int imax = numeric_limits<int>::max();
    
    cout << " imin = " << imin << endl;
    cout << " imax = " << imax << "\n";
    cout << " tamanio de int = " << sizeof(int) << endl;
    cout << "\n";
    
    unsigned int uimin = numeric_limits<unsigned int>::min();
    unsigned int uimax = numeric_limits<unsigned int>::max();
    
    cout << " uimin = " << uimin << endl;
    cout << " uimax = " << uimax << "\n";
    cout << " tamanio de unsigned int = " << sizeof(unsigned int) << endl;
    cout << "\n";
    
    signed int simin = numeric_limits<signed int>::min();
    signed int simax = numeric_limits<signed int>::max();
    
    cout << " simin = " << simin << endl;
    cout << " simax = " << simax << "\n";
    cout << " tamanio de signed int = " << sizeof(signed int) << endl;
    cout << "\n";
    
    short int shimin = numeric_limits<short int>::min();
    short int shimax = numeric_limits<short int>::max();
    
    cout << " shimin = " << shimin << endl;
    cout << " shimax = " << shimax << "\n";
    cout << " tamanio de short int = " << sizeof(short int) << endl;
    cout << "\n";
    
    unsigned short int usimin = numeric_limits<unsigned short int>::min();
    unsigned short int usimax = numeric_limits<unsigned short int>::max();
    
    cout << " usimin = " << usimin << endl;
    cout << " usimax = " << usimax << "\n";
    cout << " tamanio de unsigned short int = " << sizeof(unsigned short int) << endl;
    cout << "\n";
    
    signed short int ssimin = numeric_limits<signed short int>::min();
    signed short int ssimax = numeric_limits<signed short int>::max();
    
    cout << " ssimin = " << ssimin << endl;
    cout << " ssimax = " << ssimax << "\n";
    cout << " tamanio de signed short int = " << sizeof(signed short int) << endl;
    cout << "\n";
    
    long int limin = numeric_limits<long int>::min();
    long int limax = numeric_limits<long int>::max();
    
    cout << " limin = " << limin << endl;
    cout << " limax = " << limax << "\n";
    cout << " tamanio de long int = " << sizeof(long int) << endl;
    cout << "\n";
    
    unsigned long int ulimin = numeric_limits<unsigned long int>::min();
    unsigned long int ulimax = numeric_limits<unsigned long int>::max();
    
    cout << " ulimin = " << ulimin << endl;
    cout << " ulimax = " << ulimax << "\n";
    cout << " tamanio de unsigned long int = " << sizeof(unsigned long int) << endl;
    cout << "\n";
    
    signed long int slimin = numeric_limits<signed long int>::min();
    signed long int slimax = numeric_limits<signed long int>::max();
    
    cout << " slimin = " << slimin << endl;
    cout << " slimax = " << slimax << "\n";
    cout << " tamanio de signed long int = " << sizeof(signed long int) << endl;
    cout << "\n";

    float fmin = std::numeric_limits<float>::min();
    float fmax = std::numeric_limits<float>::max();
    
    cout << " fmin = " << fmin << endl;
    cout << " fmax = " << fmax << "\n";
    cout << " tamanio de float = " << sizeof(float) << endl;
    cout << "\n";
    
    char cmin = numeric_limits<char>::min();
    char cmax = numeric_limits<char>::max();
    
    cout << " cmin = " << cmin << endl;
    cout << " cmax = " << cmax << "\n";
    cout << " tamanio de char = " << sizeof(char) << endl;
    cout << "\n";
    
    unsigned char ucmin = numeric_limits<unsigned char>::min();
    unsigned char ucmax = numeric_limits<unsigned char>::max();
    
    cout << " ucmin = " << ucmin << endl;
    cout << " ucmax = " << ucmax << "\n";
    cout << " tamanio de unsigned char = " << sizeof(unsigned char) << endl;
    cout << "\n";
    
    signed char scmin = numeric_limits<signed char>::min();
    signed char scmax = numeric_limits<signed char>::max();
    
    cout << " scmin = " << scmin << endl;
    cout << " scmax = " << scmax << "\n";
    cout << " tamanio de signed char = " << sizeof(signed char) << endl;
    cout << "\n";
    
    double dmin = numeric_limits<double>::min();
    double dmax = numeric_limits<double>::max();
    
    cout << " dmin = " << dmin << endl;
    cout << " dmax = " << dmax << "\n";
    cout << " tamanio de double = " << sizeof(double) << endl;
    cout << "\n";
    
    long double ldmin = numeric_limits<long double>::min();
    long double ldmax = numeric_limits<long double>::max();
    
    cout << " ldmin = " << ldmin << endl;
    cout << " ldmax = " << ldmax << "\n";
    cout << " tamanio de long double = " << sizeof(long double) << endl;
    cout << "\n";
    
    
    wchar_t wmin = numeric_limits<wchar_t>::min();
    wchar_t wmax = numeric_limits<wchar_t>::max();
    
    cout << " wmin = " << wmin << endl;
    cout << " wmax = " << wmax << "\n";
    cout << " tamanio de wchar_t = " << sizeof(wchar_t) << endl;
    cout << "\n";
    
    
    return 0;
    
}
