#include <iostream>
#include <vector> // dynamic array that can grow in size / manipulate data easily
#include <algorithm> // sort function
using namespace std;

int main() {

    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter a Number" << "[" << i << "]: ";
        cin >> data[i];
    }

    cout << "\nThe Stored Numbers are: ";

    for(int i = 0; i < n; i++) {
        sort(data.begin(), data.end()); // used for sorting
        cout << data[i] << " ";
    }

    int largest = data[0];
    int smallest = data[0];

    for(int i = 1; i < n; i++) {
        if(data[i] > largest) {
            largest = data[i];
        }
        if(data[i] < smallest) {
            smallest = data[i];
        }
    }

    int pass = 0;
    int fail = 0;

    for (int i = 0 ; i < n; i++) {
        if (data[i] >= 75) {
            pass++;
        }
        else {
            fail++;
        }
    }

    double average = 0;

    for (double i = 0; i < n; i++) {
        average += data[i];
    }

    cout << endl;
    cout << "\nThe Largest Number is: " << largest;
    cout << "\nThe Smallest Number is: " << smallest << endl;

    cout << "\nPasssed: "<< pass << endl;
    cout << "Failed: " << fail << endl;
    cout << "\nThe Average is: " << average / n;

    /* DATA EXTRACTION */
/*
    int data = 1234; 
    int temp;

    while (data > 0) {
        temp = data % 10;
        data /= 10;
        cout << "Temp: " << temp << " " << "\n";
        cout << "Data: " << data << "\n";
    }
*/
    // Do while
/*
    int n = 5;

    do {
        cout << "input: " << n << endl;
        n++;
    }
    while (n <= 20);
*/
    // Do while pract1
/*
    int correctpin = 17248;
    int pin;
    int attempts = 0;
    int maxattempts = 3;

    do{
        cout << "Enter your Pin: ";
        cin >> pin;
        attempts++;

        if (pin == correctpin) {
            cout << "Acces Granted" << endl;
        }
        else {
            cout << "Inccorect. Remaining Attempts: " << (maxattempts - attempts) << endl;
        }
    }
    while (attempts < maxattempts);
    if(pin != correctpin) {
        cout << "You ran out of attempts. Acces Denied. " << endl;
    }
*/
    // do while pract2
/*
    int secret = 8;
    int guess;
    int attempts = 0;
    int maxattempts = 5;

    do {
        cout << "Guess The Number from 1 - 10: ";
        cin >> guess;
        attempts++;

        if (guess == secret) {
            cout << "tama ka" << endl;
        }
        else {
            cout << "mali ka. natitirang attempts: " << (maxattempts - attempts) << endl;
        }
    }
    while (attempts < maxattempts);
    if (guess != secret) {
        cout << "mali ka bai.";
    }
*/
    // switch case
/*
    int araw;

    cout << "[1] Monday" << endl;
    cout << "[2] Tuesday" << endl;
    cout << "[3] Wednesday" << endl;
    cout << "[4] Thursday" << endl;
    cout << "[5] Friday" << endl;
    cout << "[6] Saturday" << endl;
    cout << "[7] Sunday" << endl;

    cout << "pili ka araw: ";
    cin >> araw;
    switch(araw) {
        case 1: 
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "wednesday";
            break;
        case 4:
            cout << "thursday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6:
            cout << "saturday";
            break;
        case 7:
            cout << "sunday";
            break;
        default:
            cout << "invalid input";
    }
*/

    // DATA EXTRACTION
/*
    int data = 12345;
    int numbers = 0;

    while(data > 0) {
        numbers = data %10;
        data /= 10;
        cout << "Numbers: " << numbers << " " << endl;
        cout << "Data: " << data << endl;
    }
*/

    // FORLOOP MULTIPLICATION TABLE
/*
    int n = 5;

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
*/

    // FORLOOP PYRAMID
/*
    string input;
    int rows;
    int columns;

    cout << "Enter a Character: ";
    cin >> input;

    cout << "Enter the Number of Rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {

        for (int s = 1; s <= rows - i; s++) {
            cout << " ";
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << input;
        }
        cout << endl;
    }
*/
    //athena above all                                                          //athena above all
        //athena above all                                                  //athena above all
            //athena above all                                          //athena above all
                //athena above all                                  //athena above all
                    //athena above all          drie             //athena above all
                        //athena above all                   //athena above all
                            //athena above all     <3    //athena above all
                        //athena above all                  //athena above all
                    //athena above all                          //athena above all
                //athena above all                                  //athena above all
            //athena above all                                          //athena above all
        //athena above all                                                  //athena above all
    //athena above all                                                          //athena above all
}