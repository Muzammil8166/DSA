#include<stdio.h>

int main (){
	
	int len, input;
	printf("Enter the length of Stack \n>>");
	scanf("%d",&len);
	int stack[len], top=-1, option, exit=1;
	
	do{	
		printf("\nSelect a option");
		printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
		printf("\n>>");
		scanf("%d",&option);
		switch(option){
			case 1:{
				if(top == len-1){
					printf("\nThe Stack is Full");
				}else{
					top++;
					printf("\nEnter Number to Push >>");
					scanf("%d", &input);
					stack[top] = input;
				}
				break;
			}
			case 2:{
				if(top == -1){
					printf("\nStack is Empty");
				}else{
					printf("\n%d is Deleted",stack[top]);
					top--;
				}
				break;
				
			}
			case 3:{
				if(top == -1){
					printf("\nThe Stck is Empty");
				}else{
					for(int i=0; i <= top ; i++){
						printf("\n%d at> %d",i+1,stack[i]);
					}
				}
				
				
				break;
			}
			case 4:{
				exit = 0;
				break;
			}
		}
	}while(exit);
}