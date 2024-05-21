#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
       char name[100];
       int roll;
       double cgpa;
};
int main(){
    Student a;
    a.roll=10;
    // a.name='MSA';// char string directly access kora zay na. tobe copy kore ba input niye char/string er  value assign kora zay.
    char temp[20]="MSA";
    strcpy(a.name,temp);
    //char/string shudhu matro initialize korar somoy directly value assign kora zay.
    a.roll=56;
    cout<<a.roll<<" "<<a.name<<" "<<a.roll<<endl;
    return 0;
}