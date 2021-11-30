//Nick Krisulevicz
//Lab
//10/19/2020

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int QUIZSIZE = 10;
const int LABSIZE = 10;
const int EXAMSIZE = 3;
const int FINALSIZE = 1;
const int ATTENDANCE = 1;
const double PENALTY = 0.01;
int main()
{
    ifstream dataIn;
    string heading;
    string firstName, lastName;
    int quiz[QUIZSIZE];
    int lab[LABSIZE];
    int exam[EXAMSIZE];
    int finalexam [FINALSIZE];
    int attendance[ATTENDANCE];
    double penalty

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

            for (int i=0; i<QUIZSIZE; i++){
                dataIn >> quiz[i];
                cout << quiz[i] << endl;
            }
            for (int i=0; i<LABSIZE; i++){
                dataIn >> lab[i];
                cout << quiz[i] << endl;
            }
            for (int i=0; i<EXAMSIZE; i++){
                dataIn >> exam[i];
                cout << exam[i] << endl;
            }
            for (int i=0; i<FINALSIZE; i++){
                dataIn >> finalexam[i];
                cout << finalexam;
            }
            for (int i=0; i<ATTENDANCE; i++){
                dataIn >> attendance
            }



        }
        counter++;

    }


    dataIn.close();

    return 0;
}
