// Author: Jack Shields jcs6283@psu.edu
// Collaborator: Jack Scallan jgs5472@psu.edu
// Collaborator: Danielle Alamo dca5244@psu.edu
// Section: 10
// Breakout: 8
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {

  char *grade = readline("Enter your CMPSC 131 grade: ");

  double gradeNum = atof(grade);

  if(gradeNum>=93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(gradeNum<93.0 && gradeNum>=90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(gradeNum<90.0 && gradeNum>=87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(gradeNum<87.0 && gradeNum>=83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(gradeNum<83.0 && gradeNum>=80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(gradeNum<80.0 && gradeNum>=77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(gradeNum<77.0 && gradeNum>=70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(gradeNum<70.0 && gradeNum>=60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if(gradeNum<60.0){
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  
  return 0;
}