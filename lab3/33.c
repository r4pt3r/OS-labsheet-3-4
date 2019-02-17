#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
      pid_t pid;
      pid = fork();
      if(pid > 0){
              wait(NULL);  
              pid_t pid1;
              pid1 = fork();
              if(pid1==0)
                  execl("./33a"," ", NULL);
              else
                  wait(NULL);
      }


      else{
            execl("./33b"," ",NULL);
      } 
      return 0;
}
