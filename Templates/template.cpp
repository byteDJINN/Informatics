
#include <bits/stdc++.h> // get all of the libraries you will need.

int main() {
  // Open files
  FILE * inp = fopen("fileName1.txt","r");
  FILE * out = fopen("fileName2.txt","w");
  // Read from input file
  char * inpName;
  fscanf(inp,"%s",inpName);
  // Code
  char * myName = "bob";
  // Write to output file
  fprintf(out,"Hello %s, my name is %s",inpName,myName);
  // Close files
  fclose(inp);
  fclose(out);
}
  
  
  
