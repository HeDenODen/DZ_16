#include <iostream>
using namespace std;

void Pow(int, int);
int Sum(int, int);
void SumS(int, int);
void Card(char, int);
void Lucky(int);

int main()
{
    //1
    int bas;
    cout << "Enter number: ";
    cin >> bas;
    int deg;
    cout << "Enter degree: ";
    cin >> deg;
    Pow(bas, deg);
    

    //2
    int fNum;
    cout << "Enter first number: ";
    cin >> fNum;
    int lNum;
    cout << "Enter last number: ";
    cin >> lNum;
    cout << "Sum = " << Sum(fNum, lNum) << "\n\n";
    

    //3
    int fN;
    cout << "Enter first number: ";
    cin >> fN;
    int lN;
    cout << "Enter last number: ";
    cin >> lN;
    SumS(fN, lN);
    cout << "\n\n";
    

    //4
    char m;
    cout << "Enter meaning (1-10, A - Ace, J - Jack, Q - Queen K - King: ";
    cin >> m;
    int s;
    cout << "Enter card suit (1 - Diamonds, 2 - Hearts, 3 - Clubs, 4 - Spades): ";
    cin >> s;
    Card(m, s);
    cout << "\n\n";
    

    //5
    int number;
    cout << "Enter number: ";
    cin >> number;
    Lucky(number);
}

void Pow(int m, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= m;
    }
    cout << "Res = " << res << "\n\n";
}

int Sum(int f, int l)
{
    int sum = 0;
    for (int j = f + 1; j < l; j++) {
        sum += j;
    }
    return sum;

}

void SumS(int fS, int lS)
{
    for (int k = fS; k <= lS; k++) {
        int sumS = 0;
        for (int d = 1; d < k; d++) {
            if (k % d == 0) {
                sumS += d;
            }
        }
        if (sumS == k && sumS) {
            cout << sumS << "\n";
        }
    }
}

void Card(char num, int suit)
{
    cout << "__________" << "\n";
    cout << "|        |" << "\n";
    cout << "|" << num << "       |" << "\n";
    switch (suit)
    {
    case 1:
        cout << "|♦       |" << "\n";
        break;
    case 2:
        cout << "|♥       |" << "\n";
        break;
    case 3:
        cout << "|♣       |" << "\n";
        break;
    case 4:
        cout << "|♠       |" << "\n";
        break;
    default:
        break;
    }
    cout << "|        |" << "\n";
    cout << "|        |" << "\n";
    cout << "|        |" << "\n";
    cout << "----------" << "\n";
}

void Lucky(int numb)
{
    int sum1 = 0;
    int sum2 = 0;
    for (int g = 0; g < 6; g++) {
        if (g < 3) {
            sum1 += numb % 10;
        }
        else if (g >= 3) {
            sum2 += numb % 10;
        }
        numb /= 10;
    }
    if (sum1 == sum2) {
        cout << "It's a lucky number!" << "\n\n";
    }
    else {
        cout << "It's not a lucky number!" << "\n\n";
    }
}