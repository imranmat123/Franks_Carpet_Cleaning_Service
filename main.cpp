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

    cout << "\nHow many small rooms would you liked cleaned? ";
    int numberSmallOfRooms {0};
    cin >> numberSmallOfRooms;
    cout << "\nHow many large rooms would you liked cleaned? ";
    int numberLargeOfRooms {0};
    cin >> numberLargeOfRooms;


    const double pricePerSmallRoom{25.0};
    const double pricePerLargeRoom{35.0};
    const double taxRate {0.06};
    const int validFor{30};  //days

    cout << "\nEstimate for carpet cleaning service: \n";
    cout << "Number of small rooms: " << numberSmallOfRooms << endl;
    cout << "Number of small rooms: " << numberLargeOfRooms << endl;
    cout << "Price per small room: £" << pricePerSmallRoom << endl;
    cout << "Price per large room: £" << pricePerLargeRoom << endl;
    cout << "Cost: £" << (numberSmallOfRooms * pricePerSmallRoom) + (numberLargeOfRooms * pricePerLargeRoom) << endl;
    cout << "Tax: £" << (numberLargeOfRooms * pricePerLargeRoom * taxRate) + (numberSmallOfRooms * pricePerSmallRoom * taxRate) << endl;
    cout << "================================" << endl;

    cout << "Total estimate: £" << (pricePerSmallRoom * numberSmallOfRooms) + (numberSmallOfRooms * pricePerSmallRoom * taxRate) +
            (pricePerLargeRoom * numberLargeOfRooms) + (pricePerLargeRoom * numberLargeOfRooms * taxRate) << endl;
    cout << "This estimate is valid for: " << validFor << " days" <<endl;

    return 0;
}
