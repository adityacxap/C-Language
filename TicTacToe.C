#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int num, i, c=0, move[9]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	char p1[100], p2[100], xo[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("Welcome to the TicTacToe game!\n");
	printf("Enter Player 1 name: ");
	scanf("%[^\n]%*c", &p1);
	printf("Enter Player 2 name: ");
	scanf("%[^\n]%*c", &p2);
	while(c<9){
		if(c%2==0){
			printf("\n\t %c | %c | %c \n\t-----------\n", xo[0], xo[1], xo[2]);
			printf("\t %c | %c | %c \n\t-----------\n", xo[3], xo[4], xo[5]);
			printf("\t %c | %c | %c \n", xo[6], xo[7], xo[8]);
			printf("\n%s""'s turn - Select the no. position for move\n", p1);
			{
				wagainX:
					printf("Select number: ");
					scanf("%d", &num);
					if(num>9 || num<1){
						printf("Invalid Position! Enter again\n");
						goto wagainX;
					}
					else if(xo[num-1] == 'X' || xo[num-1] == 'O'){
						printf("Acquired Position! Enter again\n");
						goto wagainX;
					}
					else{
						for(i=0;i<9;i++){
							if(num == move[i]){
								xo[i] = 'X';
							}
						}
					}
			}
			if((xo[0]==xo[1] && xo[1]==xo[2]) || (xo[0]==xo[3] && xo[3]==xo[6]) || (xo[4]==xo[0] && xo[4]==xo[8]) || (xo[1]==xo[4] && xo[4]==xo[7]) || (xo[2]==xo[5] && xo[5]==xo[8]) || (xo[2]==xo[4] && xo[4]==xo[6]) || (xo[3]==xo[4] && xo[4]==xo[5]) || (xo[6]==xo[7] && xo[7]==xo[8])){
				printf("\n\t %c | %c | %c \n\t-----------\n\t %c | %c | %c \n\t-----------\n\t %c | %c | %c \n", xo[0], xo[1], xo[2], xo[3], xo[4], xo[5], xo[6], xo[7], xo[8]);
				printf("\n%s is the winner!", p1);
				break;
			}
		}
		else{
			printf("\n\t %c | %c | %c \n\t-----------\n", xo[0], xo[1], xo[2]);
			printf("\t %c | %c | %c \n\t-----------\n", xo[3], xo[4], xo[5]);
			printf("\t %c | %c | %c \n", xo[6], xo[7], xo[8]);
			printf("\n%s""'s turn - Select the no. position for move\n", p2);
			{
				wagainO:
					printf("Select number: ");
					scanf("%d", &num);
					if(num>9 || num<1){
						printf("Invalid Position! Enter again\n");
						goto wagainO;
					}
					else if(xo[num-1] == 'X' || xo[num-1] == 'O'){
						printf("Acquired Position!\n");
						goto wagainO;
					}
					else{
						for(i=0;i<9;i++){
							if(num == move[i]){
								xo[i] = 'O';
							}
						}
					}
			}
			if((xo[0]==xo[1] && xo[1]==xo[2]) || (xo[0]==xo[3] && xo[3]==xo[6]) || (xo[4]==xo[0] && xo[4]==xo[8]) || (xo[1]==xo[4] && xo[4]==xo[7]) || (xo[2]==xo[5] && xo[5]==xo[8]) || (xo[2]==xo[4] && xo[4]==xo[6]) || (xo[3]==xo[4] && xo[4]==xo[5]) || (xo[6]==xo[7] && xo[7]==xo[8])){
				printf("\n\t %c | %c | %c \n\t-----------\n\t %c | %c | %c \n\t-----------\n\t %c | %c | %c \n", xo[0], xo[1], xo[2], xo[3], xo[4], xo[5], xo[6], xo[7], xo[8]);
				printf("\n%s is the winner!", p2);
				break;
			}
		}
		c++;
	}
}