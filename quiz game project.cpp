#include<stdio.h>  
#include<stdlib.h>  
#include<conio.h>
#include<string.h>  
  
struct play {  
            char name[20];  
            int score;  
            int rat;   
            }p;  
 void high_score();  
 void start(); 
 void easy();
 void hard(); 
 void help();
 int main()  
{  
   int chc=0; 
     printf("\n\t\t            ******************************************** \n");  
     printf("\t\t\t                  << QUIZ GAME >>\n");
     printf("\n\t\t            ******************************************** \n");
     printf("\n\t\t            ######### Welcome to Quiztopher   #############  \n") ;
     printf("\n\t\t           ________________________________________________");
     printf("\n\t\t           ________________________________________________");
     printf("\n\t\t            Win a chance to get the precious awards of this game'!!!!!!!!!!!\n") ;
     printf("\n\t\t           ________________________________________________");
     printf("\n\t\t           ________________________________________________\n");                                                    
     printf("                              PRESS 1 to start the Game \n");  
	 printf("                              PRESS 2 to see High Scores \n");
	 printf("                              PRESS 3 to see game Help\n");
	 printf("                              PRESS 0 to Exit \n  ");  
	 
     scanf("%d",&chc);  
      switch(chc)  
    {  
        case 1:  
        start();  
        break;  
        case 2:  
        high_score();  
        break;  
        case 3:  
        help();  
        break;  
        default:  
          exit(1);   
	 }  
    
}  

void help()  
{  int ch,stage;  
 system("cls");
     printf("\n\n                                 * GAME HELP *");  
     printf("\n            -------------------------------------------------------------------------\n");  
     printf("\n            .................... C program Quiz Game ....................\n"); 
	 printf("\n                >> There are 2 stages of Gameplay");
	 printf("\n                    (1)Easy       (2)Hard "); 
	 //scanf("%d",&stage);
	 
	 printf("\n                >> Each gameplay has 10 Questions");
     printf("\n                >> There will be a total of 20 Questions");  
     printf("\n                >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");  
     printf("\n                   right option");  
     printf("\n                >> Each Question will carry 5 points");
     printf("\n                >> Easy gameplay has no negative marking for wrong answer");
	 printf("\n                >> Hard Gameplay has negative marks for wrong ansers");  
     printf("\n                >> You will be asked questions continuously.");  
       
     printf("\n\n                              ***** BEST OF LUCK ***** \n\n");  
     printf("\nContinue playing ? (1 - Yes and 0 - No) : ");  
    scanf("%d",&ch);  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }    
}
void easy(int mode)
{int ans; 
   int Easy,Hard,ch; 
   system("cls");
   int count=0;  
   char rating[20];  
       FILE *fp;  
      if((fp=fopen("game.txt","a"))==NULL)  
             {  
                 printf("\n");  
             }  
        printf("\n          Please enter your Name: ");  
        scanf("%s",p.name);  
	
	printf("\n\t\t         ********** Welcome \" %s \"  to C Quiz Game **********  \n\n", p.name);  
        printf("  Q(1).Grand Central Terminal, Park Avenue, New York is the world's \n 1.largest railway station \t\t2.highest railway station\n 3.longest railway station\t\t 4.None of the above\n\n");  
        printf("Your answer: ");   scanf("%d",&ans);  
		  if(ans==1)  
        {   printf("Correct! +10 points\n\n");  
            ++count;   }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.largest railway station\n\n");  
        }    printf("  Q(2) Entomology is the science that studies \n 1.Behavior of human beings\t\t2.Insects \n3.The origin and history of technical and scientific terms\n4.The formation of rocks\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +10 points\n\n");   ++count;  
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Insects\n\n");  
        }  
  
        printf("  Q(3) Eritrea, which became the 182nd member of the UN in 1993, is in the continent of \n1.Asia\t\t2.Africa\n3.Europe\t4.Australia\n\n"); printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==2)  
        {   printf("Correct! +10 points\n\n");   ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Africa\n\n");  
        }printf("  Q(4).Garampani sanctuary is located at \n1.Junagarh, Gujarat\t2.Diphu, Assam\n3.Kohima, Nagaland\t4.Gangtok, Sikkim\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Diphu, Assam\n\n");  
        }   printf("  Q(5).For which of the following disciplines is Nobel Prize awarded? \n1.Physics and Chemistry\t2.Physiology or Medicine\n3.Literature, Peace and Economics\t4.All of the above\n\n");  
            printf("Your answer: ");  
            scanf("%d",&ans);  
        if(ans==4)  
        {  printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  printf("Wrong answer! Correct answer is 4.All of the above\n\n");  
        }  printf("  Q(6).Hitler party which came into power in 1933 is known as \n1.Labour Party\t2.Nazi Party\n3.Ku-Klux-Klan\t4.Democratic Party\n\n");  
           printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Nazi Party\n\n");  
        }  printf("  Q(7). FFC stands for \n1.Foreign Finance Corporation\t2.Film Finance Corporation\n3.Federation of Football Council\t4.None of the above\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        { printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        { printf("Wrong answer! Correct answer is 2.Film Finance Corporation\n\n");  
        } printf("  Q(8). Fastest shorthand writer was \n1.Dr. G. D. Bist\t2. J.R.D. Tata\n3. J.M. Tagore\t4. Khudada Khan\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Dr. G. D. Bist\n\n");  
        }printf("  Q(9). Epsom (England) is the place associated with \n1.Horse racing\t2.Polo\n3.Shooting\t4.Snooker\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        { 
             printf("Wrong answer! Correct answer is 1.Horse racing\n\n");   
        }
        printf("  Q(10). First human heart transplant operation conducted by Dr. Christian Bernard on Louis Washkansky, was conducted in \n1.1967\t2.1968\n3.1958\t4.1922\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. 1967\n\n");
            
        }   
        if(count > 0)  
        {  printf("Thanks for playing, Your scored: %d points \n\t", count*10);  p.score=count*10;  
		 if(p.score ==100)  
                {  
					printf(" Congratulations you are the 'Quiztopher' of this round \n");
					p.rat=10;  
                }
				 if(p.score >=80)  
                {  printf("Rating: * * * * *");
                 p.rat=5;  
			  
                }
                else if(p.score >= 60 && p.score < 80)  
                {  
                    printf("Rating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 40 && p.score < 60)  
                {  
                    printf("Rating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 20 && p.score < 40)  
                {  
                    printf("Rating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 20)  
                {  
                    printf("Rating: *");  
                     p.rat=1;  
                }fprintf(fp,"%s %d %d %d", p.name,mode,p.score,p.rat); fclose(fp);printf("\t");  
        }  
        else  
        {  
            printf("Try again next time");  
        }  
        printf("\nContinue playing ? (1 - Yes and 0 - No) : ");  
        scanf("%d",&ch);  
        if(ch==1)  
       {  
        start();  
       }  
       else  
       {  
        exit(1);  
       }    
  
}
void hard(int mode)
{int ans; 
   int ch,Easy,Hard,wrong; 
   system("cls");
   int count=0;  
   char rating[20];  
       FILE *fp;  
      if((fp=fopen("game.txt","a"))==NULL)  
             {  
                 printf("\n");  
             }  
        printf("\n          Please enter your Name: ");  
        scanf("%s",p.name);  
	
		 printf("\n\t\t         ********** Welcome \" %s \"  to C Quiz Game **********  \n\n", p.name);  
        
        printf("Q(1). Frames from one LAN can be transmitted to another LAN via the device \n1. Router\t2. Bridge\n3. Repeater\t4. Modem\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2. Bridge\n\n"); 
              ++wrong;
        }
         printf("  Q(2). Which of the following condition is used to transmit two packets over a medium at the same time?\n1. Contention\t2.  Collision\n3.   Synchronous\tD. Asynchronous\n\n");  
         printf("Your answer: ");  
         scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2. Collision\n\n");
            ++wrong;
        }
         printf("  Q(3). What are the most commonly used transmission speeds in BPS used in data communication?\n1.   300\t2. 1200\n3.   2400\t4. 9600\n");  
         printf("Your answer: ");  
         scanf("%d",&ans);  
        if(ans==4)  
        {  
            printf("Correct! +5 points\n\n");  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. 9600\n\n"); 
             ++wrong;
        }
         printf("  Q(4).  Which of the following is used for modulation and demodulation?\n1. modem\t2. protocols\n3. gateway\t4. multiplexer\n");  
         printf("Your answer: ");  
         scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.modem\n\n");  
             ++wrong;
        }
         printf("  Q(5). Contention is \n1. One or more conductors that serve as a common connection for a related group of devices\n2.   a continuous frequency capable of being modulated or impressed with a second signal\n3.  the condition when two or more stations attempt to use the same channel at the same time\n4.   a collection of interconnected functional units that provides a data communications service among stations attached to the network\n");  
         printf("Your answer: ");  
         scanf("%d",&ans);  
        if(ans==3)  
        {  
            printf("Correct! +5 points\n\n");  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. the condition when two or more stations attempt to use the same channel at the same time\n\n");  
             ++wrong;
        }
         printf("  Q(6). When you ping the loopback address, a packet is sent where?\n1. On the network\n2. Down through the layers of the IP architecture and then up the layers again\n3. Across the wire\n4. through the loopback dongle\n");  
         printf("Your answer: ");  
         scanf("%d",&ans);
		 if(ans==2)  
        { printf("Correct! +5 points\n\n");
        ++count;  
        }  
        else  
        { printf("Wrong answer! Correct answer is  2. Down through the layers of the IP architecture and then up the layers again\n\n");  
         ++wrong;
        }
         printf(" Q(7). Which of the following TCP/IP protocol is used for transferring electronic mail messages from one machine to another?\n1. FTP\t2.    SNMP\n3. SMTP\t4. RPC\n");  
         printf("Your answer: ");  
         scanf("%d",&ans);
		 if(ans==3)  
        {  
            printf("Correct! +5 points\n\n"); 
            ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. SMTP\n\n");  
             ++wrong;
        }
         printf("  Q(8). Which of the following device is used to connect two systems, especially if the systems use different protocols?\n1. hub\t2. bridge\n3. gateway\t4. repeater\n");  
         printf("Your answer: ");  
         scanf("%d",&ans);  
        if(ans==3)  
        {  
            printf("Correct! +5 points\n\n");
            ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. gateway\n\n"); 
             ++wrong;
        }printf("  Q(9). The slowest transmission speeds are those of\n1. twisted-pair wire\t2. coaxial cable\n3. fiber-optic cable\t4.   microwaves\n");  
        printf("Your answer: "); scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  1. twisted-pair wire\n\n");  
             ++wrong;
        }  printf("  Q(10). What is the port number for NNTP?\n1. 119\t2. 80\n3. 79\t4. 70\n");  
        printf("Your answer: ");   scanf("%d",&ans); 
		 if(ans==1)  
        {  
            printf("Correct! +10 points\n\n");  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  1. 119 \n\n");
             ++wrong;
        }
        if(count > 0)  
        {  printf("Thanks for playing, Your scored: %d points \n\t", count*10);  p.score=count*10-wrong;  
        
		 if(p.score ==100)  
                {  
					printf(" Congratulations you are the 'BRAINSTORMER' \n");
					p.rat=10;  
                }
				 if(p.score >=80)  
                {  printf("Rating: * * * * *");
                 p.rat=5;  
			  
                }
                else if(p.score >= 60 && p.score < 80)  
                {  
                    printf("Rating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 40 && p.score < 60)  
                {  
                    printf("Rating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 20 && p.score < 40)  
                {  
                    printf("Rating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 20)  
                {  
                    printf("Rating: *"); 
                     p.rat=1;  
                }fprintf(fp,"%s %d %d %d\n", p.name,mode,p.score,p.rat); fclose(fp);printf("\t");
        }  
        else  
        {  
            printf("Try again next time");  
        }     
		printf("\nContinue playing ? (1 - Yes and 0 - No) : ");  
        scanf("%d",&ch);  
        if(ch==1)  
       {  
        start();  
       }  
       else  
       {  
        exit(1);  
       }    
               
                
}
void start()
{  int ans,mode; 
   int Easy,Hard; 
   system("cls");
   int count=0;  
   char rating[20];  
       FILE *fp;  
      if((fp=fopen("game.txt","a"))==NULL)  
             {  
                 printf("\n");  
             }    
        printf("\t            Select your difficulty:\n                    (1)easy  \n                    (2)Hard  \n");
        scanf("%d",&mode);
        switch(mode)
      {
        case 1:
        {
         easy(mode);
         break;
	    }
        case 2:
       	{
       		hard(mode);
       		break;
		}
       }
}  
        
void high_score()  
{   int ch,Easy,hard,mode; 
    system("cls"); 
    FILE *fp; if((fp=fopen("game.txt", "r"))==NULL)
	        
          {  printf("\nNo games played yet!\n");  
           }  
            else  
            { printf("\n                                     ** HIGH SCORES **\n\n");  
    printf("                                         NAME          MODE          POINTS         RATING\n");  
    while(fscanf(fp,"%s %d %d %d",p.name,&mode,&p.score, &p.rat) !=EOF)  
    { printf("                                    ____________  ___________   ___________   _________\n");  
      printf("\n                                    %s        %d           %d           %d star(s)\n\n",p.name,mode,p.score,p.rat);  
    }  fclose(fp);  
   }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  if(ch==1)  
    {  
        start();
        system("cls"); 
    }  
    else  
    {  
        exit(0);
    }  
}

