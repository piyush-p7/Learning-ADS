#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    pid_t process_id;
    pid_t p_process_id;

    process_id = getpid();
    p_process_id = getpid();

    printf("The process id :%d\n",process_id);
    sleep(3);
    printf("The process id of Parent function:%d\n",p_process_id);

}