include <iostream>
using namespace std;

int main()
{
     int i, j, rows;
     
      
    std::cout<<"Enter number of rows : ";
    std::cin>>rows;

     /* Iterate through rows */
     for(i=1; i<=rows; i++) 
     {
           /* Print leading spaces */
           for(j=i; j<rows; j++)
           {
               std::cout<<" ";
           }

           /* Print star */
           for(j=1; j<=(2*i-1); j++)
           {
               std::cout<<"*";
           }

           /* Move to next line */
           std::cout<<"\n";
     } 
     return 0;
 }
