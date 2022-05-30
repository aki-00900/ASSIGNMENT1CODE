/*
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

static void *child(void *ignored){
   // HERE WE HAVE PUT THE CHILD CLASS IN AN INFINITE LOOP TILL AN INPUT IS PASSED
   while (1)
   {
   
   sleep(3);     
   printf("Child is done sleeping 3 seconds.\n");
   //return NULL;
   }
}

int main(int argc, char *argv[]){
   char cha;
   pthread_t child_thread;
   int code;
   
   code = pthread_create(&child_thread, NULL, child, NULL);
   //HERE WE HAVE ASKED FOR AN INPUT FROM THE USER TO EXECUTE AN INPUT AND PRINT OUT A STATEMENT STATING THAT THE SECOND THREAD HAS BEEN KILLED
   
   printf("\n Press Enter\n");
   scanf("%c",&cha);
   pthread_cancel(child_thread);
   printf("\n second thread has been killed \n");

   if(code){
      fprintf(stderr, "pthread_create failed with code %d\n", code);
   }
   //HERE AFTER THE SECOND HAS BEEN KILLED AFTER 5 SECONDS A NEW MESSAGE HAS BEEN PASSED OUT TO STATE THE SUCCESSFUL KILLINF OG THREAD AND PASSING OUT THE MESSAGE.
   sleep(5);
   printf("Parent is done sleeping 5 seconds.\n");
   printf("\nThe second thread has been successfully killed\n");
   return 0;
}





1. Explain what `pthread` is doing in this program. Be specific.
Ans - pthread in this program helps us in creating multiple threads for the steady and continous processing of the threads. Along with this it helps in creating and cancelling threads with the help of pthread.

2. Explain why the sleeping thread can print its periodic messages while the main thread is waiting for keyboard input.
Ans - This happens because the sleeping thread has been called outside the main method which gets executed first and then later the keyboard input has been asked inside the main method.
*/