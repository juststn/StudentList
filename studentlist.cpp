#include <iostream>
#include <string.h>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

struct student{
  char firstname [50];
  char lastname [50];
  int id;
  float GPA;

};

int main(){
  vector<student*>* studentList;
  studentList = new(vector<student*>);
  char input[20];
  string input;
  int running = 1;
  int count =0;
  int studentnumber;
  int deletedStudent = 0;

  while(running = 1){
    cout<<"Enter studentnumber, gpa, annd name"<<endl;
    cin>>input;
    cout<<input<<endl;

  }

}
