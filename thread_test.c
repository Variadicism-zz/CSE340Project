#include "threads.h"

//Global variables
struct Queue* run_queue;

int x = 0;

void counter(){
	do {
		x++;
	} while (true);
} 

void printEven(){
	do {
		if ((x % 2) == 0){
			printf("%d", x);
		}
	} while (true);
}

void printOdd(){
	do {
		if ((x % 2) == 1){
			printf("%d", x);
		}
	} while (true);
}

void main (){
	//initialize the run queue
	run_queue = newQueue();

	//start threads
	start_thread(counter);
	start_thread(printEven);
	start_thread(printOdd);

	run();
	
}
