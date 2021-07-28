/*
Dominick Guarino
Falafel Menu C++
3/10/2021
PC codeblocks
*/
#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;
void DisplayMenu();

int main()
{
    const double TAX_RATE = 0.087;
    double subtotal = 0.00;
    double totalPrice;
    double totalTax;
    double price;
    char selection;
    int falafelCount = 0;
    int sodaCount = 0;
    int extraCount = 0;

    DisplayMenu();
    do
    {
        price = 0;
        cout << "Make your selection (FSXT): ";
        cin  >> selection;
        switch ( toupper(selection) )
        {
        case 'F':
            price = 5.15;
            falafelCount ++;
            break;
        case 'S':
            price = 2.24;
            sodaCount ++;
            break;
        case 'X':
            price = 1.57;
            extraCount ++;
            break;
        case 'T':
            break;
        default:
            cout << "Illegal selection, try again." << endl;
        }

       subtotal += price;
       totalTax = subtotal * TAX_RATE;
       totalPrice = totalTax + subtotal;

    } while (selection != 'T' && selection != 't');

    cout << endl;
    cout << "Falafel:" <<  falafelCount << endl;
    cout << "Soda:" <<  sodaCount << endl;
    cout << "Extra:" <<  extraCount << endl;
    cout << fixed << setprecision(2) << "Subtotal $" << subtotal << endl;
    cout << fixed << setprecision(2) << "Tax @8.7% $" << totalTax << endl;
    cout << fixed << setprecision(2) << "Total Price $" << totalPrice << endl;

    return 0;
}

void DisplayMenu()
{
    cout << endl;
    cout << "F = falafel  $5.15" << endl;
    cout << "S = soda     $2.24" << endl;
    cout << "X = extras   $1.57" << endl;
    cout << "T = total" << endl;
}

