#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	
	pid_t Tpid;
	Tpid = fork();
	
	if (Tpid > 0) {
		sleep(10);
		printf("pegou?\n");
		
	} 

	else {
		printf("FILHO\n");
		return 0;	
	}	

	return 0;

}
