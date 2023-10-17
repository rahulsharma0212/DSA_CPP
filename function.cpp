#include <iostream>
#include <cmath>
using namespace std;

void passByValue_increase(int n)
{
    cout << "Here the value " << n << " is the copy which is created inside the function" << endl;
    n++; // Here we make an increment in n
    cout << "Increment value :: " << n << endl;
}

void passByRefrence_increase(int &n)
{
    cout << "Here the value " << n << " is the same address at which the value is passed inside the function" << endl;
    n++; // Here we make an increment in n
    cout << "Increment value :: " << n << endl;
}

int add(int val_1, int val_2);
int findMaxBetweenThreeNumber(int val_1, int val_2, int val_3);
void printCountUpto(int n);
char marksToGrade(int marks);
int getSumUpto(int n);

int decimalToBinary_1(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryNo += bit * (float)pow(10, i++);
        n /= 2;
    }
    return binaryNo;
}

int decimalToBinary_2(int n)
{
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        binaryNo += bit * (float)pow(10, i++);
        n = n >> 1;
    }
    return binaryNo;
}

int binaryToDecimal(int n)
{
    int decimalNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimalNo += bit * (float)pow(2, i++);
        n /= 10;
    }
    return decimalNo;
}

float areaOfCircle(float r)
{
    return (3.14 * r * r);
}

bool checkEven(int n)
{
    // return n % 2 == 0 ? true : false;
    return ((n & 1) == 0 ? true : false);
}

int factorial(int n)
{
    int out = 1;
    for (int i = n; i > 1; i--)
    {
        out *= i;
    }
    return out;
}

bool checkPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeUpto(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (checkPrime(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int a = 2;
    /* Pass by value */
    // cout << "Before A :: " << a << endl;
    // passByValue_increase(a);
    // cout << "After A :: " << a << endl;

    /* Pass by Reference */
    // cout << "Before A :: " << a << endl;
    // passByRefrence_increase(a);
    // cout << "After A :: " << a << endl;

    /* Sum of two number */
    // cout << "Sum of 2 and 5 :: " << add(2, 5) << endl;

    /*Maximum of three value*/
    // cout << "Maximum value b/w 2 , 1 and 10 :: " << findMaxBetweenThreeNumber(2, 1, 10) << endl;

    /* Print counting upto*/
    // printCountUpto(100);

    /* Marks to grade */
    // cout << "marks 91 :: Grade " << marksToGrade(91) << endl;
    // cout << "marks 100 :: Grade " << marksToGrade(100) << endl;
    // cout << "marks 75 :: Grade " << marksToGrade(75) << endl;

    /* Get sum upto n */
    // cout << "Get Sum upto 10 :: " << getSumUpto(10) << endl;

    /*Decimal to Binary*/
    // cout << "Binary representation of 10 :: " << decimalToBinary_1(10) << endl;
    // cout << "Binary representation of 23 :: " << decimalToBinary_2(23) << endl;

    /* binary to decimal*/
    // cout << "Decimal representation of 10111 :: " << binaryToDecimal(10111) << endl;
    // cout << "Decimal representation of 1010 :: " << binaryToDecimal(1010) << endl;

    /* Area of circle */
    // cout << "Area of circle of radius 5 :: " << areaOfCircle(5) << endl;
    // cout << "Area of circle of radius 5.365 :: " << areaOfCircle(5.365) << endl;

    /* Check Even */
    // cout << "Is 2 is even :: " << checkEven(2) << endl;
    // cout << "Is 3 is even :: " << checkEven(3) << endl;

    /* Factorial */
    // cout << "Factorial of 5 :: " << factorial(5) << endl;
    // cout << "Factorial of 10 :: " << factorial(10) << endl;

    /* Check prime */
    // cout << "Is 5 is prime :: " << checkPrime(5) << endl;
    // cout << "Is 2 is prime :: " << checkPrime(2) << endl;
    // cout << "Is 6 is prime :: " << checkPrime(6) << endl;
    // cout << "Is 1 is prime :: " << checkPrime(1) << endl;

    /* Print prime upto N */
    // printPrimeUpto(20);

    return 0;
}

int add(int val_1, int val_2)
{
    return val_1 + val_2;
}

int findMaxBetweenThreeNumber(int val_1, int val_2, int val_3)
{
    if (val_1 > val_2 && val_1 > val_3)
    {
        return val_1;
    }
    else if (val_3 > val_1 && val_3 > val_2)
    {
        return val_3;
    }
    else
    {
        return val_2;
    }
}

void printCountUpto(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

char marksToGrade(int marks)
{
    switch (marks / 10)
    {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    default:
        return 'E';
    }
}

int getSumUpto(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}