

//Student List by Justin He -
//Organize students with commands ADD, PRINT, DELETE, and QUIT
//ADD prompts input for name, id, gpa
//PRINT prints out every student currently stored
//DELETE prompts input to delete entry by student id
//QUIT exits the program

#include <iostream>
#include <string.h>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

struct student{
  char firstname[50]; //initialize struct
  char lastname[50];
  int  id;
  float GPA;

};

void addStudent(vector<student*>*); //define functions
void printStudent(vector<student*>*);
void deleteStudent(vector<student*>*);


int main(){

  string in;
  int running = 1;
  
  vector<student*>* studentList = NULL;
  studentList = new vector<student*>;
  
  while(running == 1){
    
    cout<<"enter command:[ADD,PRINT,DELETE,QUIT] "<<endl;
    cin>>in;
    if(in=="ADD"){
      addStudent(studentList);
    }
    if(in=="PRINT"){
      printStudent(studentList);
    }
    if(in=="DELETE"){
      deleteStudent(studentList);
    }
    if(in=="QUIT"){
      running = 0;
    }
    
  }
}

// add a student
void addStudent(vector<student*>* studentList) {

    student* oneStudent;
    oneStudent = new(student);
    
    cout<<"Enter first name: ";
    cin >> oneStudent->firstname;
    
    cout<<"Enter last name: ";
    cin >> oneStudent->lastname;

    cout<<"Enter student id (a number): ";
    cin>> oneStudent->id;
    cin.ignore();
    
    cout<<"Enter gpa: ";
    cin>> oneStudent->GPA;
    cin.ignore();

    //add inputs into vector
    studentList->push_back(oneStudent);
    cout << "Student added." << endl << endl;
}

// print student list
void printStudent( vector<student*>* studentList) {

  cout << "Total number of students: " << studentList->size() << endl;

  //if student size is 0 return
  if(studentList->size() == 0){
    return;
  }

  //iterate through vector and output name, id, GPA
  for (vector<student*>::iterator v = studentList->begin(); v < studentList->end(); v++) {
    cout << (*v)->firstname << " " << (*v)->lastname << ", ";
    cout << (*v)->id << ", ";

    // set precision to 2 digits after the decimal point
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << (*v)->GPA << endl;
   }

  cout << endl;
}

// delete a student from the vector

void deleteStudent(vector<student*>* studentList) {
  int input;
  cout<<"which student id should be deleted?" << endl;
  cin >> input;
  cin.ignore();
  //loop through vector to find id and erase/delete it
  for(vector<student*>::iterator i = studentList->begin(); i<studentList->end(); i++)
    {
      if ((*i)->id == input){
	delete (*i);
	studentList->erase(i);
	i--;
      }
    }

  cout << "Student deleted." << endl << endl;
  
}
