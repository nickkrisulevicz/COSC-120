#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int QUIZSIZE = 10;
const int LABSIZE = 10;
const int PROJSIZE = 3;
const int EXAMSIZE = 3;


// define a function (function definition
// header of a function: return type (float), function name (getAverage), input parameters(arr, size)
float getAverage(int arr [ ], int size )
{
    int total = 0;
    // body of the function
    for (int i = 0; i < size; i++){
        total = total + arr[i];
    }

    return static_cast<float>(total)/size;

}
// define a function
// header of a function: return type (void), function name (readGrade)
// input parameters(input, arr, size),
 void readGrade(ifstream input, int arr [ ], int size ){

   for (int i = 0; i < size; i++){
    input >> arr[i];
   }

 }



int main()
{
    ifstream dataIn; //cin
    string heading;
    string firstName, lastName;
    int quiz[QUIZSIZE];
    int lab[LABSIZE];
    int project[PROJSIZE];
    int exam[EXAMSIZE];
    int final;
    double attendance;

    int counter = 1;

    dataIn.open("grade120.dat");

    if (dataIn){
        cout << "File found" << endl;
    }
    else {
        cout << "File found" << endl;
        return 0;
    }

    while (!dataIn.eof()){

        if (counter == 1 || counter == 2) {
            getline(dataIn, heading);
            cout << heading << endl;
        }
        else {
            dataIn >> firstName;
            dataIn >> lastName;

            // Call function readGrade to read quiz data
            readGrade(dataIn, quiz, QUIZSIZE);

            for (int i=0; i<QUIZSIZE;i++){
                dataIn >> quiz[i]; // index
            }
            for (int i=0; i<LABSIZE;i++){
                dataIn >> lab[i]; // index
            }
            for (int i=0; i<PROJSIZE;i++){
                dataIn >> project[i]; // index
            }
            for (int i=0; i<EXAMSIZE;i++){
                dataIn >> exam[i]; // index
            }
            dataIn >> final;
            dataIn >> attendance;

            /*int total = 0;

            for (int i = 0; i < QUIZSIZE; i++){
                total = total + quiz[i];
            }
            cout << "Average quiz grade is " << static_cast<float>(total)/QUIZSIZE;

            total = 0;

            for (int i = 0; i < LABSIZE; i++){
                total = total + lab[i];
            }
            */
           double quizAverage, labAverage, projAverage, examAverage;

            // call function getAverage
           quizAverage = getAverage(quiz, QUIIZSIZE);
           cout << "Average quiz grade is " <<  quizAverage<< endl;
             // call function getAverage
           labAverage = getAverage(lab, LABSIZE);
          cout << "Average lab grade is " <<  labAverage<< endl;
            projAverage = getAverage(project, PROJSIZE);
            examAverage = getAverage(exam, EXAMSIZE);


       /*     cout <<  firstName << " ";
            cout << lastName << " ";

            for (int i=0; i<QUIZSIZE;i++){
                cout << quiz[i] << " "; // index
            }
            for (int i=0; i<LABSIZE;i++){
                cout << lab[i]<< " ";
            }
            for (int i=0; i<PROJSIZE;i++){
                cout << project[i]<< " ";
            }
            for (int i=0; i<EXAMSIZE;i++){
                cout << exam[i]<< " ";
            }
            cout << final<< " ";
            cout << attendance << endl; */

        }
        counter++;

    }


    dataIn.close();

    return 0;
}
