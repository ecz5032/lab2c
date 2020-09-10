//Author: Eric Zhang ecz5032@psu.edu
//Collaborator: Ajith Obili ako5278@psu.edu
//Collaborator: Craig John cxj5287@psu.edu
//Collaborator: Sai pal sqp5889@psu.edu
//Section 5
//Breakout Room 2
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *grade_num = readline("Enter your CMPSC 131 grade: ");
  double grade =atof(grade_num);
  char *letter = " ";
  if (grade >= 93) {
    letter = "A";
  }
  else if(grade >= 90.0){
    letter = "A-";
  }
  else if(grade >= 87.0){
    letter = "B+";
  }
  else if(grade >= 83.0){
    letter = "B";
  }
  else if(grade >= 80.0){
    letter = "B-";
  }
  else if(grade >= 77.0){
    letter = "C+";
  }
  else if(grade >= 70.0){
    letter = "C";
  }
  else if(grade >= 60.0){
    letter = "D";
  }
  else {
    letter = "F";
  }

  printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  return 0;
}