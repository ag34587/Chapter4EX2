
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string roman;

    cout << "Please enter a number (1 through 10): ";
    cin >> number;

    // Use a switch to set the string without repeating cout or break on every line
    switch (number) {
    case 1:  roman = "I";    break;
    case 2:  roman = "II";   break;
    case 3:  roman = "III";  break;
    case 4:  roman = "IV";   break;
    case 5:  roman = "V";    break;
    case 6:  roman = "VI";   break;
    case 7:  roman = "VII";  break;
    case 8:  roman = "VIII"; break;
    case 9:  roman = "IX";   break;
    case 10: roman = "X";    break;
    default: roman = "Error"; break;
    }

    if (roman == "Error") {
        cout << "Error: The number must be between 1 and 10." << endl;
    }
    else {
        cout << "The Roman numeral version of that number is " << roman << endl;
    }

    return 0;
}
