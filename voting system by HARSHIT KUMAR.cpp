#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
    char name[100];
    char gender; 
    int a = 0, b = 0, c = 0, d = 0,choice,age;
	printf("--------------------VOTE FOR INDIA--------------------\n");
	start:
    while (1) 
	{
		printf("\nVoter's Information ");
        printf("\nEnter Voter's Name: ");
        scanf("%s", name);

        printf("Enter Voter's Age: ");
        scanf("%d", &age);

        printf("Enter Voter's Gender (M/F): ");
        scanf(" %c",&gender);
        printf("\n*****************VERIFICATION*****************\n");
		if (gender=='M')
		{printf(" NAME: Mr. %s ", name);}
		else if(gender=='F')
		{printf(" Voter Name is : Ms. %s ", name);}
		else
		{
			printf("Wrong gender choice !!!");
		    goto start;
		}
		printf("\n Voter Age is : %d \n",age);	
        if (age < 18)
			{
            printf("Sorry, %s, you are not eligible to vote.\n", name);
        	} 
		else 
			{
    			printf("\nPolitical Parties:\n");
    			printf("1-> BHARATIYA JANATA PARTY (B.J.P.)\n");
    			printf("2-> AAM AADMI PARTY (A.A.P.)\n");
    			printf("3-> Communist Party Of India (C.P.I.)\n");
    			printf("4-> Nationalist Congress Party (N.C.P.)\n");
            	printf("Give the vote : ");
            	scanf("%d", &choice);

            	switch (choice) 
				{
                	case 1:
                    	a++;
                    	break;
               		case 2:
                    	b++;
                    	break;
                	case 3:
                    	c++;
                    	break;
                	case 4:
                    	d++;
                    	break;
                	default:
                    	printf("WRONG!!!\n");
            	}
        	}
        printf("Do you want to continue (Y/N): ");
        char ch = getch();
        if (ch !='Y') 
			{
            break;
        	}
    }
    printf("\n\nB.J.P VOTES : %d",a);
    printf("\nA.A.P. VOTES : %d",b);
    printf("\nC.P.I. VOTES : %d",c);
    printf("\nN.C.P. VOTES : %d \n",d);
    if (a>b && a>c && a>d) {
        printf("\n :WINNER PARTY IS:  (B.J.P.)\n");
    } else if (b>a && b>c && b>d) {
        printf("\n :WINNER PARTY IS:  (A.A.P.)\n");
    } else if (c>a && c>b && c>d) {
        printf("\n :WINNER PARTY IS:  (C.P.I.)\n");
    } else if (d>a && d>b && d>c) {
        printf("\n :WINNER PARTY IS:  ()\n");
    } else {
        printf("\n Either NO RESULTS or Its a tie ");
    }
    printf("\n-------Thank for vote---------\n");
    return 0;   
}

