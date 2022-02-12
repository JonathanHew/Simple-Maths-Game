/*Program designed to simulate a mathematics quiz game including various features such as a main menu, allowing the user to choose how many questions, displaying the score of the previous game and an exit function.
Designed by: Jonathan Hew
Date: 29/10/2019
Compiler: Borland Compiler
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int menu=0;
    int questions=0;
    int q1,q2,q3,q4,q5 = 0;
    int correct=0;
    int incorrect=0;
    int startcounter=0;
    
    
    //displaying menu atleast once using do while loop
    do
    {
        //asking user to input an option from the main menu
        printf("\n\n------------------------------------------------------------------------------------------------------------------------");
        printf("\n**********MAIN MENU********** \n\n");
        printf("1. Enter the number of questions to be asked for this round of the quiz. (Max 5) \n");
        printf("2. Start Game (Must Set Amount of Questions First) \n");
        printf("3. Display the number of correct and incorrect answers in the previous round. (Must Play The Game First) \n");
        printf("4. END GAME \n\n");
        printf("------------------------------------------------------------------------------------------------------------------------ \n\n");
        scanf("%d", &menu);
        
        //checking option entered by user using a switch statement
        switch(menu) 
            {
              case 1 :
              {     
                    //checking to see if the input of amount of question is between 1-5
                    do 
                    {
                        //asking user how many questions they would like to get asked
                        printf("\n You entered option one. How many questions would you like to get asked?(MAX 5)\n" );
                        scanf("%d", &questions);
                        //printing the number of questions that will be asked
                        if (questions > 0 && questions < 6)
                        {
                            printf("You will be asked %d question/s. \n\n", questions);
                        }//end if
                        //telling the user that the input is invalid (not between 1-5)
                        else
                        {
                            printf("Invalid amount of questions.");
                            questions = 0;
                        }//end else
                    }//end do
                    //ending the loop when input is valid
                    while (!(questions > 0 && questions < 6));
                    break;
              }//end case
              case 2 :
              {
                    //checking to see if user has chosen how many questions they would like to be asked (option 1)
                    if (questions > 0)
                    {
                        correct = 0;
                        incorrect = 0;
                        startcounter = startcounter + 1;
                        //asking the user the amount of questions they have chosen
                        switch (questions)
                        {
                            case 1:
                            {
                                printf("What is 9+10 ? \n");
                                scanf("%d", &q1);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q1 == 19)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if 
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 19. \n", q1);
                                    incorrect = incorrect + 1;
                                }//end else 
                                break;
                            }//end case
                                
                            case 2:
                            {
                                printf("What is 9+10 ? \n");
                                scanf("%d", &q1);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q1 == 19)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if 
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 19. \n", q1);
                                    incorrect = incorrect + 1;
                                }//end else 
                                printf("What is 15-5 ? \n");
                                scanf("%d", &q2);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q2 == 10)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else 
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 10. \n", q2);
                                    incorrect == incorrect + 1;
                                }//end else
                                break;
                            }//end case
                                
                            case 3:
                            {
                                printf("What is 9+10 ? \n");
                                scanf("%d", &q1);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q1 == 19)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if 
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 19. \n", q1);
                                    incorrect = incorrect + 1;
                                }//end else 
                                printf("What is 15-5 ? \n");
                                scanf("%d", &q2);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q2 == 10)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else 
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 10. \n", q2);
                                    incorrect == incorrect + 1;
                                }//end else
                                printf("What is 2*2 ? \n");
                                scanf("%d", &q3);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q3 == 4)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 4.  \n", q3);
                                    incorrect = incorrect +1;
                                }//end else
                                break;
                            }//end case
                                
                            case 4:
                            {
                                printf("What is 9+10 ? \n");
                                scanf("%d", &q1);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q1 == 19)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if 
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 19. \n", q1);
                                    incorrect = incorrect + 1;
                                }//end else 
                                printf("What is 15-5 ? \n");
                                scanf("%d", &q2);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q2 == 10)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else 
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 10. \n", q2);
                                    incorrect == incorrect + 1;
                                }//end else
                                printf("What is 2*2 ? \n");
                                scanf("%d", &q3);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q3 == 4)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 4.  \n", q3);
                                    incorrect = incorrect +1;
                                }//end else
                                printf("What is 10/2 ? \n");
                                scanf("%d", &q4);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q4 == 5)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 5. \n", q4);
                                    incorrect = incorrect + 1;
                                }//end else
                                break;
                            }//end case
                            
                            case 5:
                            {
                                printf("What is 9+10 ? \n");
                                scanf("%d", &q1);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q1 == 19)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if 
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 19. \n", q1);
                                    incorrect = incorrect + 1;
                                }//end else 
                                printf("What is 15-5 ? \n");
                                scanf("%d", &q2);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q2 == 10)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else 
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 10. \n", q2);
                                    incorrect == incorrect + 1;
                                }//end else
                                printf("What is 2*2 ? \n");
                                scanf("%d", &q3);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q3 == 4)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 4.  \n", q3);
                                    incorrect = incorrect +1;
                                }//end else
                                printf("What is 10/2 ? \n");
                                scanf("%d", &q4);
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q4 == 5)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 5. \n", q4);
                                    incorrect = incorrect + 1;
                                }//end else
                                printf(" What is 5%4 ? \n");
                                scanf("%d", &q5);
                                flushall();
                                //checking if the answer is correct or incorrect and incrementing the corresponding counter
                                if (q5 == 1)
                                {
                                    printf("You are correct! \n");
                                    correct = correct + 1;
                                }//end if
                                else 
                                {
                                    printf("You are incorrect! You entered %d. The correct answer is 1. \n", q5);
                                    incorrect = incorrect + 1;
                                }//end else
                                break ;
                            }//end case
                        }//end switch
                        printf("\n You have completed the game! Please enter option 3 in the main menu to see your score. \n");
                    }//end if
                    else 
                    {
                        printf("You have not entered how many questions you would like to answer yet.");
                    }// end else
                    break;
                }//end case
              case 3 :
                { 
                    //checking tosee if the game has been played yet
                    if (startcounter > 0)
                    {
                        printf("You entered 3. \n");
                        printf("In the previous game you answered %d correct and %d incorrect. \n\n", correct, incorrect);
                    }//end if 
                    else
                    {
                        printf("You have not played the game yet.");
                    }//end else
                    break;
                }//end case
              case 4 :
                {
                    printf("You entered 4. Goodbye! \n" );
                    exit(0);
                    break;
                }//end case
              default :
                {
                    printf("Invalid option. Please enter a valid option. \n" );
                }//end default
           }//end switch
       }//end do
       while (!(menu == 4));
    
       
    getchar();
    
    return 0;
}//end main