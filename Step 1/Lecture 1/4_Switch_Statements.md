# Switch Statements 

[Example](./Examples%20for%20Switch/4_A_Corresponding_Day_Number.cpp)

```C++
// Take the day number and print the corresponding day
// for 1 print monday,
// for 2 print tuesday and so on for 7 print Sunday

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int day;
  cin >> day;
  switch (day)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesay";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  // If none of the case is executed then the default value will get executed and this don't need the use of break
  default:
    cout << "Invalid Choice";
  }
  return 0;
}
```

* Break Statement is Mandatory for each case, cause if so not given it executes other statements followed by that particlar case 
* Default is not need but if so you need it you can use, which gets executed if so any of the conditions did not meet 
* And the conditions that you give for case should be a **Static Value** for **Switch Statements**
