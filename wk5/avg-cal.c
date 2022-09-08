#include <stdio.h>

double average_weight(int data_size_count, int weight[])
// An avg cal function , simple and easy if you were in the class
{
    int i;
    double sum = 0.0;
    
    for (i = 0; i < data_size_count ; i++)
        sum += weight[i];
    return(sum/data_size_count);
}


int main(void)
{
  int weight[1000];  //the rannge of the array can be set arbitrary but should over the data size. 
  int i = 0;
  FILE *file;  //This file pointer is used to hold the file reference once it is open.

  if (file = fopen("H:\\testfile.txt", "r"))  // r means read mode
  /*i use the fopen function to directly open the file and input it into array to make this function work properly, you need to download the txt file the professor provide and then change it to your file path. For example (Windows) ,  if your txt file are torage in Driver D root directory you should change it to D:\\the-file-name.txt */
  {
    while (fscanf(file, "%d", &weight[i]) != EOF)   
    //EOF =  The required filenumber argument is an Integer containing any valid file number.
    {
      i++;
    }
    fclose(file); //close the file after read and input data finished

    weight[i] = '\0';  //use \0 to identify the end of string

    for (i = 0; weight [i] != '\0'; i++)  /* != mean Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true. */
      printf("%d\n", weight[i]);
      printf("test i = %d\n" , i);  
      /*very tricky point, you can see the i = 1000 instead of 999, i infer thats because the \0 is part of the element, but it does not count into data */
    printf("the average weight is %.2f\n\n" , average_weight(i, weight)); 
    //excute the average calculation function
  }

  return 0;
}

