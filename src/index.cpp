#include <iostream>

using namespace std;

int main(){
    bool isLeapYear = false;
    int year;
    cout << "Please enter a year: ";
    cin >> year;

    /* Check if year is a leap year or not a leap year. */
    if(year % 4 == 0 && year > 100){
        cout << year << " is a leap year" << endl;
        isLeapYear = true;
    }else if(year % 4 == 0 && year % 100 == 0){
        if(year % 400 == 0){
            cout << year << " is a leap year" << endl;
            isLeapYear = true;
        }else{
            cout << year << " is not a leap year" << endl;
            isLeapYear = false;
        }
    }else if(year % 4 != 0){
        cout << year << " is not a leap year" << endl;
        isLeapYear = false;
    }

    /* Switch statements */
    switch (isLeapYear)
    {
    case true:
        cout << "February month of year " << year << " has 29 days." << endl;
        break;
    
    case false:
        cout << "February month of year " << year << " has 28 days." << endl;
        break;
    }


    /* Take input for month from user and display number of days of that month */
        int i = 1;
        while(i < 2){

            int inputMonth;
            cout << "Enter month (1 - 12) or enter -1 to stop: ";
            cin >> inputMonth;

            if(inputMonth == 1){
                cout << "January has 31 days." << endl;
            }else if(inputMonth == 2){
                if(isLeapYear == true){
                    cout << "February has 29 days." << endl;
                }else if(isLeapYear == false){
                    cout << "February has 28 days." << endl;
                }
            }else if(inputMonth == 3){
                cout << "March has 31 days." << endl;
            }else if(inputMonth == 4){
                cout << "April has 30 days." << endl;
            }else if(inputMonth ==5){
                cout << "May has 31 days." << endl;
            }else if(inputMonth == 6){
                cout << "June has 30 days." << endl;
            }else if(inputMonth == 7){
                cout << "July has 30 days." << endl;
            }else if(inputMonth == 8){
                cout << "August has 31 days." << endl;
            }else if(inputMonth == 9){
                cout << "September has 30 days." << endl;
            }else if(inputMonth == 10){
                cout << "October has 31 days." << endl;
            }else if(inputMonth == 11){
                cout << "November has 30 days." << endl;
            }else if(inputMonth == 12){
                cout << "December has 31 days." << endl;
            }else if(inputMonth == -1){
                i = 2;
            }else if(inputMonth < -1 || inputMonth == 0 || inputMonth > 12){
                cout << "Invalid month!" << endl;
            }

    }

    return 0;

}