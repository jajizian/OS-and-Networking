#include <iostream>
#include <pthread.h>



int count;
int turn = 0;   //  Shared variable used to implement strict alternation


void* myFunction(void* arg)
{
	int actual_arg = *((int*) arg);
    
	for(unsigned int i = 0; i < 10; ++i)
	{
   
    
    while (turn != actual_arg);
    
      //  Beginning of the critical region
      count++;
      std::cout << "Thread #" << actual_arg << " count = " << count << std::endl;
      //  End of the critical region
      
        if(actual_arg==0)
        {
            turn = 1;
        }
        else
        {
            turn= 0;
        }
    
    
    
	}
	pthread_exit(NULL);
}


//  HINT: It is not necessary to make any changes in main()
int main()
{
    int rc[2];
    pthread_t ids[2];
    int args[2];
    
    count = 0;
    for(unsigned int i = 0; i < 2; ++i) {
        args[i] = i;
        rc[i] = pthread_create(&ids[i], NULL, myFunction, (void*) &args[i]);
    }
    
    for(unsigned int i = 0; i < 2; ++i) {
        pthread_join(ids[i], NULL);
    }
    
    std::cout << "Final count = " << count << std::endl;
    pthread_exit(NULL);
}
