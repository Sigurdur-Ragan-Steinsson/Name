#include <iostream>
#include <string>

using namespace std;

string Name(string First_Name,string Last_Name){
  return "Your name is " + First_Name + ' ' + Last_Name;
}

int main() {
  string first = "Oliver", last = "Smith";
  cout << Name(first, last);
} 