// Hoppock, Zachary
// electricBill2.cpp
// 9/30/2020
// Calculate the rate of an electric bill based on KWH and four different parameters
// Version # 1
#include <iostream>
using namespace std;

int main()
{ 
  /* 0-999 KWH	$0.60
1000-1499 KWH	$0.45
1500-1999 KWH	$0.40
2000 or more KWH	$0.35
*/
  int kwh;
  double total_cost = 0;
  const double RATE_1 = 0.35;
  const double RATE_2 = 0.40;
  const double RATE_3 = 0.45;
  const double RATE_4 = 0.60;
  cout << "Please enter the number of KWH (Kilowatt Hours) used: ";
  cin >> kwh;
  if (kwh >= 2000 )
  {  
    total_cost = kwh * RATE_1;
  }
  else if (kwh < 2000 && kwh >= 1500)
  {
    total_cost = kwh * RATE_2;
  }
  else if (kwh < 1500 && kwh >= 1000)
  {
    total_cost = kwh * RATE_3;
  }
  else if (kwh < 1000 && kwh >= 0)
  {
    total_cost = kwh * RATE_4;
  }
    cout <<"Total electric bill: $" << total_cost << endl;
  return 0;
}
