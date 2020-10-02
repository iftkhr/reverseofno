//Name: Iftakhar Kaunain Ashhar
//Class: A1E
//Faculty no.: 19MEB441
//Enrolment no.: GJ3587
#include <stdio.h>
int reverse(); //reverse function declaration 
int main () //main function
{
    int m, n; //data type declaration
    char c; //data type declaration
    //start program
    printf ("xxxxxxxxxxxxxxxxxxxx[WELCOME TO DIGIT REVERSER v1.0!]xxxxxxxxxxxxxxxxxxxx\n\n\n");
    printf (">>>>> How many digits are in your number?\n");
    printf (">>> ");
    scanf ("%d", &m); //scan user input for no of digits
    if (m>0 && m<=9) //limitations for integer inputs
    {
        printf ("\n\n>>>>> Enter the number:\n");
        printf (">>> ");
        scanf ("%d",&n); //scan user input for the no
        printf ("\n\n>>>>> The reverse of your number is ");
        if (n>0) //calling reverse function for positive nos
        {
            reverse (m, n);
        }
        else if (n<0) //calling reverse function for negative nos
        {
            n=(-1)*n;
            printf ("-");
            reverse (m, n);
        }
        printf (". <<<<<\n");
    }
    else //error for invalid user input
    {
        printf ("\n\n!!!Please enter a positive integer between 1 and 9!!!\n");
        getchar ();
    }
    printf ("\n\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf ("_________(c) IftakharKaunainAshhar|19MEB441|GJ3587|A1E|ZHCET,AMU_________\n\n");
    //end program
    printf ("\n\n>>>>> Want to try again? (Y/N) ");
    scanf ("%c", &c); //scan user input for starting again
    printf ("\n");
    if (c==121 || c==89) //start again
    {
        main ();
        getchar ();
    }
    else if (c==110 || c==78) //do not start again and exit
    {
        printf (">>>>> Press any key to exit! Good Bye!");
        getchar ();
    }
    return 0;
}

int reverse(int m, int n) //reverse function
{
    int exp[10], number[10], i; //data type declaration
    exp[0]=1; //data initialisation
    number[0]=n%10; //data initialisation
    for (i=1;i<m;i++) //separate and store digits in array
    {
        exp[i]=exp[i-1]*10;
        number[i]=(n/exp[i])%10;
    }
    for (i=0;i<m;i++) //print the reverse
    {
        printf ("%d", number[i]);
    }
    getchar ();
    return (number[i]); //return the output
} // (c) Iftakhar Kaunain Ashhar|19MEB441|A1E-41|GJ-3587|ZHCET, AMU


