//Nick Krisulevicz
//Lab 10.2
//01/25/2021

#include "ThreeDimPt.h"

#include <iostream>

int GetNumbPts();

ThreeDimPt * MakeThreeDimPtArray(int size);

int main()
{
  int nPts = GetNumbPts();
  int i;

  ThreeDimPt * ptArr;

  ptArr = MakeThreeDimPtArray(nPts);


  int x;
  int y;
  int z;

  cout << "Enter the first dimension: ";
  cin >> x;
  cout << "Enter the second dimension: ";
  cin >> y;
  cout << "Enter the third dimension: ";
  cin >> z;
  cout << endl;

  ptArr->SetX(x);
  ptArr->SetY(y);
  ptArr->SetZ(z);

  for(i = 0; i < nPts; i++)
  {
      cout << ptArr[i];
  }


  delete [] ptArr;

  return 0;
}

ThreeDimPt * MakeThreeDimPtArray(int size)
{
    int *threeDimArray = nullptr;
    threeDimArray = new int[size];
    cout << "Three dim array address = " << threeDimArray << endl;
}

int GetNumbPts()
{
  using namespace std;

  int n;

  cout << "How many points? ";
  cin >> n;

  while (n < 0)
    {
      cout << "Number can't be negative" << endl;
      cout << "How many points? ";
      cin >> n;
    }

  return n;
}
