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

int setTheKthBit(int n, int k)
{
    // 10(1010) | 100 == (14)1110
    return (n | (1 << k));
}

char convertSmallToUpper(char ch)
{
    return ((ch - 'a') + 'A');
}
int getDigitCount(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}

bool isArmstrong(int n)
{
    int digitsCount = getDigitCount(n);
    int result = 0, num = n, rem;
    while (n)
    {
        rem = n % 10;
        result = result + round(pow(rem, digitsCount));
        n = n / 10;
    }

    if (num == result)
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

    /**
     *  TODO: set the kth bit
     *  link :: https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1
     */
    // cout << "change 2 bit of 10 (1010) to 1 results in 14(1110) :: " << setTheKthBit(14, 2) << endl;
    // return 0;

    /*
     * TODO: reverse integer
     * link: https://leetcode.com/problems/reverse-integer/
     */

    /*
     * TODO: Add digit
     * link: https://leetcode.com/problems/add-digits/
     */

    /*
     * TODO: Leap Year
     * link: https://practice.geeksforgeeks.org/problems/leap-year0943/1
     */

    /*
     * TODO: Power of Two
     * link: https://leetcode.com/problems/power-of-two/
     */

    /*
     * TODO: Palindrome Number
     * link: https://leetcode.com/problems/palindrome-number
     */

    /*
     * TODO: Complement of Base 10 Integer
     * link: https://leetcode.com/problems/palindrome-number
     */

    /* Convert small case char to uppercase char */
    // cout << convertSmallToUpper('d') << endl;
    // cout << convertSmallToUpper('g') << endl;

    /* is Armstorng  eg=153 == 1^3+5^3+3^3 */
    // cout << isArmstrong(153) << endl;
    // cout << isArmstrong(258) << endl;
    // cout << isArmstrong(2) << endl;

    /*
     * TODO: Trailing zeroes in factorial
     * link: https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1
     */

    /*
     * TODO: Total Moves For Bishop!
     * link: https://www.interviewbit.com/problems/total-moves-for-bishop/
     */

    /*
     * TODO: Nim Game
     * link: https://leetcode.com/problems/nim-game/description/
     */
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