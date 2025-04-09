/**
  * Complete the function so that it finds the average of 
  * the three scores passed to it and returns the letter 
  * value associated with that grade.
  */

// Considera entradas de 0 a 100
char get_grade(int a, int b, int c) {

   const int average = ((a + b + c) / 3);
  
   if (average >= 90) return 'A';
   if (average >= 80) return 'B';
   if (average >= 70) return 'C';
   if (average >= 60) return 'D';
   return 'F';

}
