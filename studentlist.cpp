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

void addStudent();
void printStudent();
void deleteStudent();

int main(){
  vector<student*>* studentList;
  studentList = new(vector<student*>);
  char input[20];
  string in;
  int running = 1;
  int count =0;
  int studentnumber;
  int deletedStudent = 0;

  while(running == 1){

    cout<<"enter command:[ADD,PRINT,DELETE,QUIT] "<<endl;
    cin>>in;
    if(in=="ADD"){
      cout<<"add first name"<<endl;
      addStudent();
    }
    if(in=="PRINT"){
      cout<<"printing all students"<<endl;
      printStudent();
    }
    if(in=="DELETE"){
      cout<<"which id to remove?"<<endl;
      deleteStudent();
    }
    if(in=="QUIT"){
      running = 0;
    }

    /*
    cout<<"Enter studentnumber"<<endl;
   cin>>in;
    id = studentnumber;
    cout<<"enter first name"<<endl;
    cin>>in;
    in = firstname[count];
    cout<<"enter last name"<<endl;
    cin>>in;
    in = lastname[count];
    cout<<"enter gpa"<<endl;
    cin>>in;
    in = GPA;
    count++;*/
  }



}

void addStudent()  {

}

void printStudent() {

}

void deleteStudent() {

}
