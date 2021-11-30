
#include <iostream>

using namespace std;

int main()
{
    int n;
    int m = 0;

    cout << "Enter an integer value for n" << endl;
    cin >> n;

    if (n%2 == 0){
        m = (2*n) + 5;
        cout << m;
    }
    else if(n%0 == 1){
        m = (n*n) - n;
        cout << m;
    }
    else{
        cout << "invalid input" << endl;
    }
    return 0;
}
