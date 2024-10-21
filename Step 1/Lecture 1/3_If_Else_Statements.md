# 3. If else statements 

1. Write a program to print whether you are an **adult** or **not and adult**
```c++
#include<bits/stdc++.h>
using namespace std;

int main(){
  int age;
  cin>>age;
  if(age >= 18){
    cout<<"You are an Adult!!";
  }else{
    cout<<"You are not an Adult!";
  }
  return 0;
}
```

2. Even you can include (if-else if-else)
```c++
// Note if you are having an if ~ it is not mandatory to have an else statement
// if your if condition fails then else is there (then it gets executed)
// if so you have an (else if) then the respective condition is checked and if so it satisfies then the respective statement inside the else-if is executed
#include<bits/stdc++.h>
using namespace std;

int main(){
  int age;
  cin>>age;
  if(age >= 18){
    cout<<"You are an Adult!!";
  }else if(age < 18){
    cout<<"You are not an Adult!";
  }
  return 0;
}
```

3. Writing a basic if else programs with a logic  
[Grade Example](./Examples%20for%20If%20Else/3_A_Grade_Example.cpp)   
[Job Example](./Examples%20for%20If%20Else/3_B_Job_Example.cpp)     
* Basically an example for the Nested-If Statement  
[Job Example Simplfied block](./Examples%20for%20If%20Else/3_B_1_Job_Example_Simplified.cpp)

