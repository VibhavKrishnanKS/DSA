#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[5];
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
  // The below one basically prints the 4th element - element at the index 3
  cout << arr[3] << " ";
  // If so u want to make operations on them, you are allowed to do it
  arr[3] += 10;
  // Now the element at the index 3 value will be added with the number 10
  cout << arr[3] << " ";
  // I can also assign a value to an array
  arr[2] = 16;
  // Now arr[2] will hold the value 16
  cout << arr[2] << " ";
  return 0;
}