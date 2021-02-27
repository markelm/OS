#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main() {
  pid_t pid;

  printf("Eu sou o processo pai: meu PID = %d\n", getpid());
  
  
  if ((pid = fork()) != 0) {
    	while(1);
	printf("Eu sou o processo pai. O PID do filho = %d\n", pid);
    	//wait(NULL);
    	printf("Meu filho morreu... :-(\n");
  } else {
    sleep(2); /* Filho demora um pouco para executar. */
    printf("Eu sou o processo filho: meu PID = %d\n", getpid());
    return 0;
  } 
  return 0;
}  
