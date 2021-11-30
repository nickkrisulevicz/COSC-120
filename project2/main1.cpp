#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int QUIZSIZE =10;
const int LABSIZE =10;
int main()
{
    ifstream dataIn; //cin
    string heading;
    string firstName, lastName;
    int quiz[QUIZSIZE];
    int lab[LABSIZE];

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

            for (int i=0; i<QUIZSIZE;i++){
                dataIn >> quiz[i]; // index
            }
            for (int i=0; i<LABSIZE;i++){
                dataIn >> lab[i]; // index
            }



        }
        counter++;

    }


    dataIn.close();

    return 0;
}
