/*
 @file: pthreads_skeleton.cpp
 
 @author: student name1, student2@uncc.edu
 @author: student name2, student2@uncc.edu
 @author: student name3, student3@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>

using namespace std;

//global array
int myArr[10];

//countNeg function
void *countNegatives(void *arg)
{
  int negs;
   
   for(int x=0; x<10; x++)
   {
      if(myArr[x] < 0)
      {
         negs++;
      }
   }
   
   cout<< "\n" << "Number of negative integers: " << negs << "\n" << endl;
}

//average function
void *average(void *arg)
{
   double avg;
   
   for(int x=0; x<10; x++)
   {
      avg += myArr[x];
   }
   
   cout<<"Average of integers: " << avg/10 << "\n" << endl;
}

void *reverse(void *arg)
{
   for(int x=9; x >=0; x--)
   {
      cout <<"Array reversed: " << myArr[x] << endl;
   }
   
   cout << "\n" << endl;
}

int main()
{
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   //make three separate id's for calling each of the functions
   pthread_t id1, id2, id3;
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc;
   
   
   //loop for user inputs into global array
   for(int x=0; x<10; x++)
   {
       cout << "Please enter integer " << x+1 << endl;
       cin >> myArr[x];
   }
   
   cout << "\n\n" << endl;
   
   // countNeg thread
   rc = pthread_create(&id1, NULL, countNegatives, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   
   //avg thread
   rc = pthread_create(&id2, NULL, average, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   
   
   //reversed thread
   rc = pthread_create(&id3, NULL, reverse, NULL);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   
  
  
   
 
 
    


   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
