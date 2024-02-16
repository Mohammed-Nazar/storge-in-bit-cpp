#include <iostream>

using namespace std;

int main()
{
    /* Write C++ code to ask the user the size of his computer storage disk in Megabyte and calculate
        and display the size in bits. Note: 1 Megabyte = 1024 Kilobyte ; 1 Kilobyte = 1024 byte; 1 byte = 8 bit */

    int storage, storageInBit;


    cout << "Please enter Your Computer storage in MB: ";
    cin >> storage;

     storageInBit = storage * 1024 * 1024 * 8;

     cout << "Your computer storage in bit is: " << storageInBit << endl;

    return 0;
}
