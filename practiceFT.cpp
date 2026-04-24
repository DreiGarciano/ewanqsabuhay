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

    double average = 0;

    for (double i = 0; i < n; i++) {
        average += data[i];
    }

    cout << endl;
    cout << "\nThe Largest Number is: " << largest;
    cout << "\nThe Smallest Number is: " << smallest;

    cout << endl;

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