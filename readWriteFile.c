#include <stdio.h>

// Read and Write Data to a File
int main() {
  FILE *fp; // Declare FILE pointer
  char text[300]; // Declare char Array

  // Write into File
  fp = fopen("myfile.txt", "w"); // Open file in write mode
  fputs("Hello Zedro", fp); // Write to file
  fclose(fp); // Close file

  // Read from File
  fp = fopen("myfile.txt", "r"); // Read data from file
  printf("Data from the file: %s", fgets(text, 200, fp));
  fclose(fp);

  return 0;
}