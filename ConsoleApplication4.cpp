#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    cout << "Zadanie 1\n\nLagutin S. A. 221-333" << endl;

    cout << "\nZadanie 2\n\nmin int = " << INT_MIN << "\t\t\tmax int = " << INT_MAX << "\t\t\tbyte size int = " << sizeof(int) << endl;
    cout << "min unsigned int = 0\t\t\tmax unsigned int = " << UINT_MAX << "\t\tbyte size unsigned int = " << sizeof(unsigned int) << endl;
    cout << "min short = " << SHRT_MIN << "\t\t\tmax short = " << SHRT_MAX << "\t\t\tbyte size short = " << sizeof(short) << endl;
    cout << "min unsigned short = 0\t\t\tmax unsigned short = " << USHRT_MAX << "\t\tbyte size unsigned short = " << sizeof(unsigned short) << endl;
    cout << "min long = " << LONG_MIN << "\t\t\tmax long = " << LONG_MAX << "\t\t\tbyte size long = " << sizeof(long) << endl;
    cout << "min long long = " << LLONG_MIN << "\tmax long long = " << LLONG_MAX << "\tbyte size long long = " << sizeof(long long) << endl;
    cout << "min double = " << DBL_MIN << "\t\tmax double = " << DBL_MAX << "\t\tbyte size double = " << sizeof(double) << endl;
    cout << "min char = " << CHAR_MIN << "\t\t\t\tmax char = " << CHAR_MAX << "\t\t\t\tbyte size char = " << sizeof(char) << endl;
    cout << "min bool = " << "false" << "\t\t\tmax bool = " << "true" << "\t\t\t\tbyte size bool = " << sizeof(bool) << endl;

    int num;
    cout << "\nZadanie 3\n\nVvedite chislo: ";
    cin >> num;
    cout << "Bin: 0b" << std::bitset<8 * sizeof(num)>(num) << endl;
    cout << "Hex: 0x" << std::hex << num << endl;
    cout << "Bool: " << bool(num) << endl;
    cout << "Double: " << double(num) << endl;
    cout << "Char: " << char(num) << endl;

    int a, b;
    cout << "Zadanie 4" << endl;
    cout << endl;
    cout << "Vvedite chisla : " << endl;
    cin >> a >> b;
    cout << a << "*x=" << b << endl;
    cout << "x=" << b << '/' << a << endl;
    cout << "x=" << double(b) / a << endl;

    int x1, x2;
    cout << "\nZadanie 5\n\nVvedite koordinaty otrezka: ";
    cin >> x1 >> x2;
    cout << "\nSeredina otrezka: " << (x1 + x2) / 2. << endl;
}