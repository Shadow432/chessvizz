#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "board_print_plain.h"
#include "board.h"

int moves(char hag[]){
 int l1=hag[0]-'a';
 int d1=hag[1]-'0'-1;
 int l2=hag[3]-'a';
 int d2=hag[4]-'0'-1;
if (board[l1][d1]=='p' || board[l1][d1]=='P'){
	if ((l2 - l1 == 0 && (d2 - d1 == 2 || d2 - d1 == 1))&&(board[l1][d1+1]==' ')&&(board[l1][d1+2]==' ')){
		 board[l2][d2]=board[l1][d1];
 		 board[l1][d1]=' ';
		 printf("\n");
		 return 1;}
	else {printf("\n");
	    //  printf("Wrong move");
	     // printf("\n");
	      return 0;}
}
if (board[l1][d1]=='r' || board[l1][d1]=='R'){
    int check = 0;
    int r;
    if (l2 - l1 == 0)
        for(r=abs(d2-d1)-1; r > 0;r=r-1)
            if (d2>d1){
                if (board[l1][d1+r] != ' ')
                    check = 1;
            } else
                 if (board[l1][d1-r] != ' ')
                    check = 1;
    if (d2 - d1 == 0)
        for(r=abs(l2-l1)-1; r > 0;r=r-1)
            if (l2>l1){
                if (board[l1+r][d1] != ' ')
                    check = 1;
            } else
                 if (board[l1-r][d1] != ' ')
                    check = 1;


	if ((l2 - l1 == 0 || d2 - d1 == 0)&& check == 0){
		 board[l2][d2]=board[l1][d1];
 		 board[l1][d1]=' ';
		 printf("\n");
		 return 1;}
	else {printf("\n");
	      //printf("Wrong move");
	      //printf("\n");
		return 0;}
}
if (board[l1][d1]=='n' || board[l1][d1]=='N'){
	if ((l2 - l1 == 1 || l2 - l1 == 2 || l2 - l1 == -1 || l2 - l1 == -2) && (d2 - d1 == 1 || d2 - d1 == 2 || d2 - d1 == -1 || d2 - d1 == -2)){
		 board[l2][d2]=board[l1][d1];
 		 board[l1][d1]=' ';
		 printf("\n");
		 return 1;}
	else {printf("\n");
	      //printf("Wrong move");
	      //printf("\n");
		return 0;}
}
if (board[l1][d1]=='b' || board[l1][d1]=='B'){
	if (abs(l2 - l1) == abs(d2 - d1)){
		 board[l2][d2]=board[l1][d1];
 		 board[l1][d1]=' ';
		 printf("\n");
		 return 1;}
	else {printf("\n");
	     // printf("Wrong move");
	      //printf("\n");
	      return 0;}
}
if (board[l1][d1]=='k' || board[l1][d1]=='K'){
	if (l2 - l1 <= 1 && d2 - d1 <= 1){
		 board[l2][d2]=board[l1][d1];
 		 board[l1][d1]=' ';
		 printf("\n");
		 return 1;}
	else {printf("\n");
	      //printf("Wrong move");
	      //printf("\n");
 	      return 0;}
}
if (board[l1][d1]=='q' || board[l1][d1]=='Q'){
	if ((l2 - l1 == 0 || d2 - d1 == 0) || (abs(l2 - l1) == abs(d2 - d1))){
		 board[l2][d2]=board[l1][d1];
 		 board[l1][d1]=' ';
		 printf("\n");
		 return 1;}
	else {printf("\n");
	     // printf("Wrong move");
	      //printf("\n");
	      return 0;}
}



return 0;




}
