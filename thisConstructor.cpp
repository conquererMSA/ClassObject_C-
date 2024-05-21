#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll;
    int clss;
    double cgpa;
    //ekhane Student ekti constructor function. constructor function automatic call hoy.
    Student(int roll, int clss, int cgpa){
        //this ekti pointer za oi class ke point kore rakhe. this ke derefrence korle *this dile oi class er property/variable access and assign kora zay.
        this->roll=roll;
        this->clss=clss;
        this->cgpa=cgpa;
    }
};
int main(){
    Student msa(23, 9, 4.99);
    cout<<msa.roll<<" "<<msa.clss<<" "<<msa.cgpa<<endl;
    return 0;
}