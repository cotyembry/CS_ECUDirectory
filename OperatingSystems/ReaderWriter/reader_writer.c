#include <stdio.h>
#include <semaphore.h> 
#include <pthread.h> //this is to include the created threads that will be created in the main thread

sem_t resource; //value starts at 1
sem_t mutex; //value starts at 1
int readcount=0;

void* writer(void *arg); // I need to ask what the * after void stands for
void* reader(void *arg);

//int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
//                          void *(*start_routine) (void *), void *arg);
int main(void) {
    int numberOfReaderThreads;
    int numberOfWriterThreads;
    sem_init(&resource, 0, 1); //initializes the resource semaphore with a false flag meaning no forks will be created and the value is 1
    sem_init(&mutex, 0, 1);
    pthread_t readers_thread[10], writers_thread[10]; //this is allocating the thread arrays so we can fill them with pthreads later
    printf("Enter number of readers threads and writer threads: max of 10\n");
    
    scanf("%d",& numberOfReaderThreads);
    numberOfWriterThreads = numberOfReaderThreads;

int inc = 0;
    for(int i=0; i < numberOfReaderThreads; i++) {
        //1st param points to the new thread address, NULL gives default attributes to the new thread, need to ask about the 3rd and 4th parameter
        pthread_create(&readers_thread[i], NULL, reader, (void*) i);
			inc++;
			printf("in creation of reader and writer threads: %d times\n", inc);
        pthread_join(readers_thread[i], NULL); //Need to ask why this is called
	
		  pthread_create(&writers_thread[i], NULL, writer, (void*) i);
        pthread_join(writers_thread[i], NULL);
    }
/*
    for(int i=0; i < numberOfWriterThreads; i++) {

    }
*/
    sem_destroy(&resource);
    sem_destroy(&mutex);
}

/* Please note that:
   resource.P() is equivalent to wait(resource)
   resource.V() is equivalent to signal(resource)
   mutex.P() is equivalent to wait(mutex)
   mutex.V() is equivalent to signal(mutex)
*/

	void* writer(void * arg) { 
	//  <ENTRY Section>
		 int temp = (int) arg;
		printf("writer %d is trying to write to critical section\n", temp);
		 wait(resource);//Lock the shared file for a writer

	//  <CRITICAL Section>
		 printf("writer %d is writing in critical section.\n", temp);
		 // Writing is done

	//  <EXIT Section>

		 signal(resource); //Release the shared file for use by other readers. Writers are allowed if there are no readers requesting it.
	}

	void* reader(void * arg) {
		 int temp = (int) arg;
	//   <ENTRY Section>
		 wait(mutex); //Ensure that no other reader can execute the <Entry> section while you are in it
		 readcount++;//Indicate that you are a reader trying to enter the Critical Section
		     if (readcount == 1)//Checks if you are the first reader trying to enter CS
		         wait(resource);//If you are the first reader, lock the resource from writers. Resource stays reserved for subsequent readers
		printf("reader %d is trying to read to critical section\n", temp);
		 signal(mutex); //Release <Entry> Section. Let other readers enter the <Entry> section, now that you are done with it. 

	//  <CRITICAL Section>
		 // Do the Reading
		 // (Critical Section Area)
		     printf("reader %d is reading in critical section\n", temp);
	//  <EXIT Section>
		 wait(mutex); //Ensure that no other reader can execute the <Exit> section while you are in it
		     readcount--;//Indicate that you are no longer needing the shared resource. One less readers
		     if (readcount == 0)//Checks if you are the last (only) reader who is reading the shared file
		         signal(resource);//If you are last reader, then you can unlock the resource. This makes it available to writers.
		 signal(mutex); //Let other readers enter the <Exit> section, now that you are done with it.
		 printf("other readers may enter the exit section (solves race condition issue)\n");
	}

