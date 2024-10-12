//Daniel A Sanchez
//S01368279
//3/1/22
//This program ask the user for two differents amount of money
//and determines if the two different amount of money are equal , smaller than or greater than  
#include <iostream>
using namespace std;

class AltMoney
{
public:
    //public functions
    AltMoney();
    AltMoney(int d, int c);
    friend AltMoney add(AltMoney m1, AltMoney m2);
    void display_money();

    //Overloading Operators friend functions
    friend bool operator> (const AltMoney& m1, const AltMoney& m2);
    friend bool operator< (const AltMoney& m1, const AltMoney& m2);
    friend bool operator== (const AltMoney& m1, const AltMoney& m2);

private:
    //private variables
    int dollars;
    int cents;
};

void read_money(int& d, int& c);

int main()
{
    int d, c;
    AltMoney m1, m2, sum;

    sum = AltMoney(0, 0);
    read_money(d, c);
    m1 = AltMoney(d, c);
    cout << "The first money is: ";
    m1.display_money();

    read_money(d, c);
    m2 = AltMoney(d, c);
    cout << "The second money is: ";
    m2.display_money();

    sum = add(m1, m2);
    cout << "The sum is: ";
    sum.display_money();

    cout << '\n';

    //if statement determines if object m1 is greater than object m2
    if (m1 > m2) {
        m1.display_money();
        cout << "is greater than ";
        m2.display_money();
    }

    //if statement determines if object m1 is smaller than object m2
    if (m1 < m2) {
        m1.display_money();
        cout << "is less than ";
        m2.display_money();
    }

    //if statement determines if object m1 is equal to object m2
    if (m1 == m2) {
        cout << "Both amount are equal" << endl;
    }

    else {
        cout << "Both amount are not equal" << endl;
    }

    return 0;
}

AltMoney::AltMoney()
{
}

AltMoney::AltMoney(int d, int c)
{
    dollars = d;
    cents = c;
}

void AltMoney::display_money()
{
    cout << "$" << dollars << ".";
    if (cents <= 9)
        cout << "0";  //to display a 0 on the left for numbers less than 10
    cout << cents << endl;
}

AltMoney add(AltMoney m1, AltMoney m2)
{
    AltMoney temp;
    int extra = 0;
    temp.cents = m1.cents + m2.cents;
    if (temp.cents >= 100)
    {
        temp.cents = temp.cents - 100;
        extra = 1;
    }
    temp.dollars = m1.dollars + m2.dollars + extra;

    return temp;
}

void read_money(int& d, int& c)
{
    cout << "Enter dollar \n";
    cin >> d;
    cout << "Enter cents \n";
    cin >> c;
    if (d < 0 || c < 0)
    {
        cout << "Invalid dollars and cents, negative values\n";
        exit(1);
    }
}

//declaring operator greater than (>)
bool  operator > (const AltMoney& m1, const AltMoney& m2)
{
    if (m1.dollars == m2.dollars)
    {
        return m1.cents > m2.cents;
    }

    else {
        return m1.dollars > m2.dollars;
    }
}

//declaring operator smaller than (<)
bool  operator < (const AltMoney& m1, const AltMoney& m2)
{

    if (m1.dollars == m2.dollars)
    {
        return m1.cents < m2.cents;
    }

    else {
        return m1.dollars < m2.dollars;
    }
}

//declaring operator equal (==)
bool  operator == (const AltMoney& m1, const AltMoney& m2)
{
    return m1.dollars == m2.dollars && m1.cents == m2.cents;
}