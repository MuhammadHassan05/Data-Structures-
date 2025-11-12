#include<iostream>
#include<cstring>
using namespace std;
class RomanNumber
{
private:
    int MaxPossibleLength = 20;
    char* Roman; // To store Roman num string

    // Arrays of Roman numeral values and their symbols
    const int values[13] = { 1000, 900, 500, 400, 100,  90,  50,  40, 10,   9,   5,   4,   1 };
    const char* symbols[13] = { "M",  "CM","D", "CD", "C","XC","L", "XL","X", "IX","V", "IV","I" };
public:
    // Default constructor
    RomanNumber()
    {
        Roman = new char[1];
        Roman[0] = '\0';
    }
    // Constructor from const char*
    RomanNumber(const char* r)
    {
        Roman = new char[MaxPossibleLength];
        int Length = strlen(r);
        for (int i = 0; i < Length; i++)
        {
            Roman[i] = r[i];
        }
        Roman[Length] = '\0';
    }
    // Copy constructor
    RomanNumber(const RomanNumber& other)
    {
        Roman = new char[MaxPossibleLength];
        strcpy(Roman, other.Roman);
    }
    // Convert single Roman char to integer
    static int CharToInt(char c)
    {
        if (c == 'I')
        {
            return 1;
        }
        if (c == 'V')
        {
            return 5;
        }
        if (c == 'X')
        {
            return 10;
        }
        if (c == 'L')
        {
            return 50;
        }
        if (c == 'C')
        {
            return 100;
        }
        if (c == 'D')
        {
            return 500;
        }
        if (c == 'M')
        {
            return 1000;
        }
        return 0;
    }
    // Convert Roman string to integer
    int RomanToInt() const
    {
        int Total = 0;
        for (int i = 0; Roman[i] != '\0'; i++)
        {
            int current = CharToInt(Roman[i]);
            int Next = CharToInt(Roman[i + 1]);
            if (Next > current)
            {
                Total += (Next - current);
                i++;
            }
            else
            {
                Total += current;
            }
        }
        return Total;
    }
    // Convert integer to Roman string
    char* IntToNumber(int Number)
    {
        char* ResultNum = new char[MaxPossibleLength];
        ResultNum[0] = '\0';
        for (int i = 0; i < 13; i++)
        {
            while (Number >= values[i])
            {
                strcat(ResultNum, symbols[i]);
                Number -= values[i];
            }
        }
        return ResultNum;
    }
    // Operator overloading: +
    RomanNumber operator+(const RomanNumber& other)
    {
        int Number1 = this->RomanToInt();
        int Number2 = other.RomanToInt();
        int Sum = Number1 + Number2;
        char* ResultantNumber = IntToNumber(Sum);
        RomanNumber Result(ResultantNumber);
        delete[] ResultantNumber;
        return Result;
    }
    // Operator overloading: -
    RomanNumber operator-(const RomanNumber& other)
    {
        int Number1 = this->RomanToInt();
        int Number2 = other.RomanToInt();
        int Difference = 0;
        if (Number1 > Number2) {
            Difference = Number1 - Number2;
        }
        else
        {
            Difference = Number2 - Number1;
        }
        char* ResultantNumber = IntToNumber(Difference);
        RomanNumber Result(ResultantNumber);
        delete[] ResultantNumber;
        return Result;
    }
    // Operator overloading: *
    RomanNumber operator*(const RomanNumber& other)
    {
        int Number1 = this->RomanToInt();
        int Number2 = other.RomanToInt();
        int Product = Number1 * Number2;
        char* ResultantNumber = IntToNumber(Product);
        RomanNumber Result(ResultantNumber);
        delete[] ResultantNumber;
        return Result;
    }
    // Operator overloading: /
    RomanNumber operator/(const RomanNumber& other)
    {
        int Number1 = this->RomanToInt();
        int Number2 = other.RomanToInt();
        int DIV = Number1 / Number2;
        char* ResultantNumber = IntToNumber(DIV);
        RomanNumber Result(ResultantNumber);
        delete[] ResultantNumber;
        return Result;
    }
    // Comparison operators
    friend bool operator==(const RomanNumber& U, const RomanNumber& V);
    friend bool operator!=(const RomanNumber& U, const RomanNumber& V);
    friend bool operator>(const RomanNumber& U, const RomanNumber& V);
    friend bool operator<(const RomanNumber& U, const RomanNumber& V);
    // Pre-increment
    RomanNumber& operator++()
    {
        int Number = this->RomanToInt();
        Number++;
        char* Updated = IntToNumber(Number);
        delete[]Roman;
        Roman = new char[MaxPossibleLength];
        strcpy(Roman, Updated);
        delete[]Updated;
        return *this;
    }
    // Post-increment
    RomanNumber operator++(int)
    {
        RomanNumber Temp(*this);
        ++(*this);
        return Temp;
    }
    // Pre-decrement
    RomanNumber& operator--()
    {
        int Number = this->RomanToInt();
        if (Number > 1)
        {
            Number--;
        }
        char* Updated = IntToNumber(Number);
        delete[]Roman;
        Roman = new char[MaxPossibleLength];
        strcpy(Roman, Updated);
        delete[]Updated;
        return *this;
    }

    // Post-decrement
    RomanNumber operator--(int)
    {
        RomanNumber Temp(*this);
        --(*this);
        return Temp;
    }
};
// Comparison operator definitions
bool operator==(const RomanNumber& U, const RomanNumber& V)
{
    int Number1 = U.RomanToInt();
    int Number2 = V.RomanToInt();
    if (Number1 == Number2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator!=(const RomanNumber& U, const RomanNumber& V)
{
    int Number1 = U.RomanToInt();
    int Number2 = V.RomanToInt();
    if (Number1 != Number2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator>(const RomanNumber& U, const RomanNumber& V)
{
    int Number1 = U.RomanToInt();
    int Number2 = V.RomanToInt();
    if (Number1 > Number2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator<(const RomanNumber& U, const RomanNumber& V)
{
    int Number1 = U.RomanToInt();
    int Number2 = V.RomanToInt();
    if (Number1 < Number2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    RomanNumber A("X");   // 10
    RomanNumber B("V");   // 5
    RomanNumber C = A + B;     // XV
    RomanNumber D = A - B;     // V
    RomanNumber E = A * B;     // L
    RomanNumber F = A / B;     // II
    RomanNumber G = A++;       // Post-increment
    RomanNumber H = ++A;       // Pre-increment
    RomanNumber I = B--;       // Post-decrement
    RomanNumber J = --B;       // Pre-decrement
    cout << "All operations done successfully.\n";
    return 0;
}