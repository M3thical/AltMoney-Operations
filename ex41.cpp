//Daniel A Sanchez
//S01368279
//3/1/22
//This program ask the user to input two different amount of money
//and then both amount are add and subtracted
#include<iostream>
#include<cstdlib>
using namespace std;

class AltMoney {

public:
    //functions prototypes
    AltMoney();
    AltMoney(int d, int c);
    friend AltMoney add(AltMoney m1, AltMoney m2);
    friend AltMoney subtract(AltMoney m1, AltMoney m2);
    void display_money();
    void read_money();

private:
    //Variables
    int dollars;
    int cents;
};

//Main
int main() {

    AltMoney m1, m2, s, m;

    m1.read_money();
    cout << "The first money is: " << endl;
    m1.display_money();
    cout << '\n';
    m2.read_money();
    cout << "The second money is: " << endl;
    m2.display_money();
    cout << '\n';
    s = add(m1, m2);
    cout << "The sum is: " << endl;
    s.display_money();
    cout << '\n';
    m = subtract(m1, m2);
    cout << "subtract" << endl;
    m.display_money();

    return 0;
}

//default constructor
AltMoney::AltMoney()
{
}

//constructor AltMoney initialize dollars and cents
AltMoney::AltMoney(int d, int c)
{
    dollars = d;
    cents = c;
}

//function display_money display the money and cents
void
AltMoney::display_money()
{
    cout << "$" << dollars << ".";
    if (cents <= 9)
        cout << "0";		//to display a 0 in the left for numbers less than 10
    cout << cents << endl;
}

//friend function sum
//this function use the cents and dollars variables of objects m1 and m2 and sum them
AltMoney add(AltMoney m1, AltMoney m2) {
    AltMoney money;		//declaring money object from class AltMoney
    int extra = 0;
    money.cents = m1.cents + m2.cents;
    if (money.cents >= 100)
    {
        money.cents = money.cents - 100;
        extra = 1;
    }
    money.dollars = (m1.dollars + m2.dollars) + extra;
    return money;			// returns the sum values of dollars and cents
}

//friend function subtract 
//this function use the cents and dollars variables of objects m1 and m2 and subtract them
AltMoney subtract(AltMoney m1, AltMoney m2) {
    AltMoney money;		//declaring money object from class AltMoney
    int extra = 0;
    money.cents = m1.cents - m2.cents;
    if (money.cents < 100)
    {
        money.cents = money.cents + 100;
        extra = 1;
    }
    money.dollars = (m1.dollars - m2.dollars) - extra;
    return money;	// returns the subtracted values of dollars and cents
}

//Making read_money function a member of AltMoney 
void AltMoney::read_money() {
    //Since read_money is part of the member of the class AltMoney we can use private variables of the class to initialize them
    cout << "Enter dollar \n";
    cin >> dollars;
    cout << "Enter cents \n";
    cin >> cents;
    if (dollars < 0 || cents < 0)
    {
        cout << "Invalid dollars and cents, negative values\n";
        exit(1);
    }
}