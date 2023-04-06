





#include <iostream>
#include <iomanip>  //to use function setw

using namespace std;

int main()
{
    const int s = 10;  //initializing a variable with size of array
    int id[s];  //decalring an array for student id
    int total[s]; //declaring an array for total grade
    char grade[s];  //decalring an array for letter grade

    for (int i = 0; i < s; i++) {  //looping 10 times to get the user's input
        cout << "Enter Student ID and their total grade: ";  //promting the user to enter id and total grade
        cin >>id[i]; //getting input of student id from the user

        do { //do-while loop to validate that the input for the total grade is between 0-100
            cin >> total[i]; //storing the total grades
        } while (total[i] > 100 || total[i] < 0);  //while loop with condition of making the user enter the total grade again

        //different cases of total grades with if statements to get the letter grade and storing it in the array
        if (total[i] >= 90)
            grade[i] = 'A';
        else if (total[i] >= 80)
            grade[i] = 'B';
        else if (total[i] >= 70)
            grade[i] = 'C';
        else if (total[i] >= 60)
            grade[i] = 'D';
        else grade[i] = 'F';
    }
    cout << '\n'; //printing new line
    //priting the header for the output table
    cout << "ID" << setw(18) << "Total Grade" << setw(18) << "Letter Grade" << '\n'; 
    cout << "======================================" << '\n';
    //for loop to iritate 10 times to output the student id, total grade, and letter grade in the table
    //using setw to space the table correctly with creating a new line after every row
    for (int j = 0; j < s; j++) {
        cout << id[j] << setw(10) << total[j] << setw(16) << grade[j] << '\n';

    }

    return 0;
}


