// Author: Gabrielle Brunner-King gsb5225@psu.edu 
// Collaborator: Mason McGuirk mtm5868@psu.edu
// Collaborator: Yan Lu yfl5541@psu.edu 
// Section: 4
// Breakout: 13

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double grade = atof(readline("Enter your CMPSC 131 grade: "));
  if (grade >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A.\n");
}
else if (grade >= 90.0) {
  printf("Your letter grade for CMPSC 131 is A-.\n");
}
else if (grade >= 87.0) {
  printf("Your letter grade for CMPSC 131 is B+.\n");
}
else if (grade >= 83.0) {
  printf("Your letter grade for CMPSC 131 is B.\n");
}
else if (grade >= 80.0) {
  printf("Your letter grade for CMPSC 131 is B-.\n");
}
else if (grade >= 77.0) {
  printf("Your letter grade for CMPSC 131 is C+.\n");
}
else if (grade >= 70.0) {
  printf("Your letter grade for CMPSC 131 is C.\n");
}
else if (grade >= 60.0) {
  printf("Your letter grade for CMPSC 131 is D.\n");
}
else {
  printf("Your letter grade for CMPSC 131 is F.\n");
}

 return 0;
}