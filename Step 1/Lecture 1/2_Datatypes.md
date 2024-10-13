# 2. Datatypes 

> We can use a variety of datatypes in c++

1. Taking a direct example of code and explanation 
```C++
#include<bits/stdc++.h>
using namespace std;

int main(){  
  // Suppose say you want to store integers - you use the int datatype (you can also store negative values)
  int x = 10;
  // But the above datatype has some specific range(if you want to store values beyond that range)
  // We use long
  long long x = 1000000;

  // Suppose say i want to store decimal values 
  // I use float
  float x = 1.0;

  // Suppose say i want to store values that exceeed the range of float - i use double 
  double y = 1;

  // Integer can also be stored in float and double ~ As mentioned above
  return 0;
}
```

2. Suppose say i want to print String datatype  
I have "Hey Striver"  
If i use **cin**, i will be able to print the characters only till i have a space  
In order to print the values after space i use **getline(cin,str1)**
```C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str; // suppose say i give Hey Striver here
  cout<<str<<endl; // This prints hey - only till it encounters a whitespace
  
  // Another method 
  getline(cin,str); // Now if you give the input as Hello vibhav
  cout<<str<<endl; // It prints Hello vibhav till the breakline

  // suppose say you want to declare a character then we use - char 
  char ch;
  // suppose say we need to initialize the value of a char - we initialize it using single quotes 
  char ch1 = 'a';
  cout<<ch1; // This prints the value a
  
  return 0;
}
```

3. Now suppose it is unnecessary to declare a int datatype as long/long long - it occupies a lot of space  
In order to overcome this problem we just remember in simpler terms  
- `int`: -10^8 to 10^8
- `long`: -10^12 to 10^12
- `long long`: -10^18 to 10^18

