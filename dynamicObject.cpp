#include <bits/stdc++.h>
using namespace std;
class Student {
public:
  int roll;
  int clss;
  double cgpa;
  Student(int roll, int clss, double cgpa) {
    this->roll = roll;
    this->clss = clss;
    this->cgpa = cgpa;
  }
};

Student* fun() {
  Student* msa = new Student(34, 9, 3.94);
  return msa;
}

int main() {
  Student* msaPointer = fun();
  cout << msaPointer->roll << " " << msaPointer->clss << " " << msaPointer->cgpa << endl;
  delete msaPointer;
  return 0;
}
