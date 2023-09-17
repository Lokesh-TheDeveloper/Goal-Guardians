#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  double inflation = 5.00;
  double years = 5.00;
  double total_money = 5000000.00;
  double in_hand_amount = 10000.00;

  double x = 1.00 + (inflation)/100.00;

  double v = pow(x,years);
  double total_amount = ((total_money))*(v);
  double increase_yearly = 5.00;
  double returns_yearly = 10.00;
  double savings_increase_rate = (increase_yearly)+(returns_yearly);
  double y = 1.00+(savings_increase_rate)/100.00;
  double t = pow(y,years);
  double z = total_amount/t;
  double monthly_amount = (z - in_hand_amount)/12.00;
         cout << monthly_amount << endl; 
return 0;
}