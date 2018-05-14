#include <stdio.h> 
#include <stdlib.h> 

#include "board_print_plain.h"
#include "board.h"




int main(int argc, char *argv[]){
  InitBoard();
char xod[16];
while(1){
scanf("%s",xod);
printf("%s",xod);
moves(xod);
print_board();
}


return 0;
}
