//1 Approcha: value assign
// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//        char name[100];
//        int roll;
//        double cgpa;
// };
// int main(){
//     Student a;
//     a.roll=10;
//     // a.name='MSA';// char string directly access kora zay na. tobe copy kore ba input niye char/string er  value assign kora zay.
//     char temp[20]="MSA";
//     strcpy(a.name,temp);
//     //char/string shudhu matro initialize korar somoy directly value assign kora zay.
//     a.roll=56;
//     cout<<a.roll<<" "<<a.name<<" "<<a.roll<<endl;
//     return 0;
// }

//2 Approach: get inpute and value assign
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
    Student a,b;
    cin>>a.name>>a.roll>>a.cgpa;
    //funct getChar() 'newline'/'enter' input ney.
    getchar();
    //getline 'enter' input ney.
    cin.getline(b.name,100);
    // getchar();
    cin>>b.roll>>b.cgpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa;
    return 0;
}