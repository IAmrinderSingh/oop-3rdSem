#include <iostream>
using namespace std;
int main() {
  int array_size, i, temp = 0, isGreatest = 0;
  cout << "Enter number of elements you want to enter in array:";
  cin >> array_size;
  int array[array_size];
  for (i = 1; i <= array_size; i++) {
    cout << "Enter " << i << "th element:";
    cin >> array[i];
  }
  for (i = 1; i <= array_size; i++) {
    if (array[0] < array[i]) {
      array[0] = array[i];
    }
  }
  cout << "Greates element of your array is:" << array[0];
  return 0;
}