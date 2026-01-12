#include <iostream>
using namespace std;

int& referenceOf(int& val) {
   return val;
}

int main() {
   int a = 20;
   referenceOf(a) += 5;  // addTen(int& val = a) += 5;
   cout << a << endl;

   return 0;
}
