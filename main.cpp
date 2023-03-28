#include <iostream>

/* pseudocode
prompt the user for number of rooms
display number of rooms
display price per room
display cost per room (number of rooms * price per room)
display tax per room (number of rooms * price per room) + (number of rooms * price per room * tax rate)
display estimate expiration time */

using namespace std;
int main() {
    cout << "Hey, welcome to franks carpet cleaning service!" << std::endl;

    cout << "\nHow many rooms would you liked cleaned? ";
    int numberOfRooms {0};

    const double pricePerRoom{30.0};
    const double taxRate {0.06};
    const int validFor{30};  //days

    cin >> numberOfRooms;
    cout << "\nEstimate for carpet cleaning service: \n";
    cout << "Number of rooms: " << numberOfRooms << endl;
    cout << "Price per room: £" << pricePerRoom << endl;
    cout << "Cost: £" << pricePerRoom * numberOfRooms << endl;
    cout << "Tax: £" << numberOfRooms * pricePerRoom * taxRate << endl;
    cout << "================================" << endl;

    cout << "Total estimate: £" << (pricePerRoom * numberOfRooms) + (numberOfRooms * pricePerRoom * taxRate) << endl;
    cout << "This estimate is valid for: " << validFor << " days" <<endl;

    return 0;
}
