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

//global array initialization:
const char *my_messages[4] = {"English: Hello!" , "French: Bonjour!",
                              "Spanish: Hola!", "German: Guten Tag!"};
                              

//pthread function
void *printMessage(void *param)
{
   //explicit type casting 
   int *index = (int *)param;
   
   //static int for global array message tracking
   static int x = 0;
   
   cout << "Thread is running..." <<  my_messages[x++] << endl;
   return 0;
}

int main()
{
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   
   //MODIFIED ID TO ARRAY for tracking of threads
   pthread_t id[4];
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc;
   
   
   // Create thread(s) via loop
   for (int x=0; x < 4; x++)
   {
   rc = pthread_create(&id[x], NULL, printMessage, (void *)&x);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   }

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
