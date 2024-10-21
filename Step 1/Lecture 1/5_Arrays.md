# 5. Arrays

> Question:- When do we use Arrays **(This is basically a container)**
> If you want to store multiple data items of similar datatypes, we use Arrays
> ### You can't store elements of different datatype in an array

1. If Suppose say we have only 4 variables, we can create and store them simple using the below method
```C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  return 0;
}
```

2. What if suppose i say we have 50 numbers, we can't create separate variables for each numbers. This need a lot of memory for each variable. In order to overcome this problem, we use a concept called **Arrays**
```C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  // This creates an array of 5 integers(int as we declared) starting from index 0
  int arr[5];
  // If suppose say we need to create an array of long long
  long long arr1[5];
  // If suppose say we need a character array
  char arr2[5]; 
}
```



4. Suppose say i create an integer array of 5 integers and i want to store the elements inside it 
```C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[5];
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
  // The below one basically prints the 4th element - element at the index 3
  cout<<arr[3];
  // If so u want to make operations on them, you are allowed to do it
  arr[3] += 10;
  // Now the element at the index 3 value will be added with the number 10
  cout<<arr[3];
  // I can also assign a value to an array 
  arr[2] = 16;
  // Now arr[2] will hold the value 16
  cout<<arr[2];
  return 0;
}
```
[Example](./Example%20For%20Arrays/5_Basic_Program.cpp)   
### You can't store elements of different datatype in an array
* If so you try to use a number like (4.5/4.7/4.9) This will get converted to the floor value     
* (4.5/4.4/4.9) -> will get converted to its floor value(4)



