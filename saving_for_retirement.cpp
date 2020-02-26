#include <iostream>
using namespace std;

int main() {
  int b_age, b_retire, b_money;
  int a_age, a_money;

  cin >> b_age >> b_retire >> b_money >> a_age >> a_money;

  int b_total_money = (b_retire - b_age) * b_money;
  
  int a_retire = (b_total_money/a_money) + a_age;

  cout << a_retire + 1;

}
