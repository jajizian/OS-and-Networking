//
//  Processes.cpp
//  ITSC 3146
//
//  Created by Bahamon, Julio on 1/12/17.
//


/*
 @file Processes.cpp
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @author student name, student@uncc.edu
 @description: <ADD DESCRIPTION>
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */


#ifndef Processes_cpp
#define Processes_cpp

#include "Processes.h"


using namespace std;


// Part 1: Working With Process IDs
pid_t getProcessID(void)
{
   pid_t id = getpid();
   return id;
   
}


// Part 2: Working With Multiple Processes
string createNewProcess(void)
{
   pid_t id = fork();
   
   // DO NOT CHANGE THIS LINE OF CODE
   process_id = id;
   
   
   if(id == -1)
   {
      return "Error creating process";
   }
   else if (id == 0)
   {
      cout<< "I am a child process!";
      return "\nI am bored of my parent, switching programs now";
   }
   else
   {
      cout << "\nI just became a parent!" << endl;
      int x=0;
      wait(&x);
      return "My child process just terminated!";
   }
}


// Part 3: Working With External Commands"
void replaceProcess(char * args[])
{
   // Spawn a process to execute the user's command.
   pid_t id = fork();
   int x = 0;
   
   if(id==-1)
   {
      cout << "Error creating process\n";
   }
   else if(id == 0)
   {
      execvp(*args, args);
   }
   else
   {
      wait(&x);
   }
}

#endif /* TestProg_cpp */
