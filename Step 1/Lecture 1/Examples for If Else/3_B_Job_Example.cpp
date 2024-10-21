// Take the age from the user and then decide accordingly
// 1. If age < 18
//   print -> "not eligible for job"
// 2. if age >= 18 and age <= 54
//   print -> "eligible for job"
// 3. If age >= 55 and age <= 57
//   print -> "eligible for job, but retirement soon."
// 4. If age > 57
//   print -> "retirement time"
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int age;
  cin >> age;
  if (age < 18)
  {
    cout << "Not eligible for job";
  }
  else if (age <= 54)
  {
    cout << "Eligible for job";
  }
  else if (age <= 57)
  {
    cout << "Eligible for job, but retirement soon";
  }
  else
  {
    cout << "Retirement time!!";
  }
  return 0;
}