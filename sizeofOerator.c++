#include<iostream>
#include<climits> // climits for integer types and cfloats for floating types
// #include<cfloat>

using namespace std;

int main(){
    cout << "size of information" << endl;
    cout << "============================"<<endl;

    cout << "char "        << sizeof(char)         << " bytes" << endl;
    cout << "int "         << sizeof(int)          << " bytes" << endl;
    cout << "float "       << sizeof(float)        << " bytes" << endl;
    cout << "double "      << sizeof(double)       << " bytes" << endl;
    cout << "unsigned int "<< sizeof(unsigned int) << " bytes" << endl;
    cout << "long "        << sizeof(long)         << " bytes" << endl;
    cout << "============================"<<endl;

    cout << "short "       << sizeof(short)        << " bytes" << endl;
    cout << "long long "   << sizeof(long long)    << " bytes" << endl;
    cout << "long double " << sizeof(long double)  << " bytes" << endl;

    cout << "============================"<<endl;

    cout << "Minimum values"                << endl;
    cout << "char\t"       << CHAR_MIN      << endl;
    cout << "int\t"        << INT_MIN       << endl;
    cout << "short\t"      << SHRT_MIN      << endl;
    cout << "long\t"       << LONG_MIN      << endl;
    cout << "long long\t"  << LONG_LONG_MIN << endl;

    cout << "============================"<<endl;

    cout << "Maximum values"                << endl;
    cout << "char\t"       << CHAR_MAX      << endl;
    cout << "int\t"        << INT_MAX       << endl;
    cout << "short\t"      << SHRT_MAX      << endl;
    cout << "long\t"       << LONG_MAX      << endl;
    cout << "long long\t"  << LONG_LONG_MAX << endl;
    
    cout << "============================"<<endl;

    // size of can also be used with variables names

    cout<< "sizeof using variable names"<<endl;
    int age(21);
    cout<< "int age is "<< sizeof(age) << " bytes"<<endl;

    double wage(22.45);
    cout << "double wage is "<< sizeof wage << " bytes"<< endl;



return 0;

}