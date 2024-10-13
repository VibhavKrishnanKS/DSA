# Basics of C++


### Generic Skeleton of c++ code 
```C++
#include<iostream>

int main(){
  return 0;
}
```

1. First in order to take an input (or) take an output we use a library in c++
```C++
// In order to use this library in c++ we can use the #include
#include<iostream>
```
> whatever library that you use you have to **#include** it 

2. In order to print an output in c++, we call the cout library that is present in std
```c++
#include<iostream>
int main(){
  std::cout<<"Hey Vibhav";
  return 0;
}
```

3. suppose say i wan't to print the output on different lines 
```c++
#include<iostream>
int main(){
  // The below code prints the output in different lines
  std::cout<<"Hey Vibhav"<<"\n";
  std::cout<<"Hey Vibhav";
  return 0;
}
```
### This approach is compartively faster 
  - Instead of "\n" we can also use **std::endl** in order to **print the output in the next line** 

4. Suppose say you want to take input in C++
```C++
#include<iostream>
// Here we are telling c++, the program uses std for all the function 
// No need to use std::cout
using namespace std;

int main(){
  int x;
  cin>>x;
  cout<<"Value of x:"<<x;
  return 0;
}
```

5. Suppose say i want to take two variables as input 
```C++
#include<iostream>
// Here we are telling c++, the program uses std for all the function 
// No need to use std::cout
using namespace std;

int main(){
  int x,y;
  cin>>x>>y;
  cout<<"Value of x:"<<x<<"and value of y:"<<y;
  return 0;
}
```

6. If you want to include all the libraries that are in c++
```C++
// You simple add the library 
#include<bits/stdc++.h>
// Because adding each library like this takes a lot of time so we go with the above method
#include<string>
#include<algorithm>
```



