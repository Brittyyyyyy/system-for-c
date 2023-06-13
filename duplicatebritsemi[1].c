#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void search();
void welcome();
void admin();
void record();
void secure();
void input();
void removes();
void verify();
void dels();
struct student{
      char firstname[50];
    char lastname[50];
    char course[50];
    char year[50];
    char number[60];
    char score[50];
    char filename[50];
};
int main(){
    

              
        int choice;
        again:
        	try:
        	printf("\t\t\t\t\t\t\t\t\t===========================\n");
            printf("\t\t\t\t\t\t\t\t\t| WELCOME STUDENT OF BSIT |\n");
            printf("\t\t\t\t\t\t\t\t\t===========================\n");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t[1] EXAM: \n");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t[2] ADMIN: \n");
            
            printf("\n\n\n\t\t\t\t\t\t\t\tOPTION: ");
            scanf("%d", &choice);
            if(choice == 1){
            	system("cls");
            	verify();
			}
			else if(choice ==2){
				system("cls");
                  input();
			}
			else{
				system("cls");
				goto try;
			}
//            switch(choice){
//              case 1: 
//              system("cls");
//                 
//                  break;
//                  case 2:
//                  
//                     break;
//            }
}
void verify(){
		int another;
				repeat:
				printf("\n\n\t\t\t\t\t\tAre you sure you want to proceed?? [1]Enter [2]Exit: ");
				printf("\n\n\n\t\t\t\t\t\tOption: ");
				scanf("%d", &another);
				
				switch (another){
					case 1:
						system("cls");
						welcome();
						break;
						
						
					case 2: 
					system("cls");
					main();
					break;
					default:
						system("cls");
						goto repeat;
				}
				
}
void welcome(void){
    FILE *ftp;
    FILE *record;
    struct student info;
    char filename[50];
    char name[50];
    int another;
          int score = 0;
    int incorrect = 0;
    char bill438;
    char quest2;
    char quest3;
    int i;
    int menu;
    printf("\t\t\t\tCreate Filename: ");
    scanf("%s", &info.filename);
    strcpy(filename,info.filename);
    ftp = fopen(strcat(filename,".txt"), "a");
    record = fopen("record.txt", "a");

            printf("\n\n\t\t\t\t\t\t\tFirstname: ");
            scanf("%s", &info.firstname); 
            fprintf(ftp,"\nFirstname: %s\n", info.firstname);
            // fprintf(record,"Firstname: %s\n\n", info.firstname);

            printf("\n\n\t\t\t\t\t\t\tLastname: ");
            scanf("%s", &info.lastname);
            fprintf(ftp," Lastname: %s\n", info.lastname);
            // fprintf(record," %s\n", info.lastname);

            printf("\n\n\t\t\t\t\t\t\tCourse: ");
            scanf("%s", &info.course);
            fprintf(ftp,"Course: %s\n", info.course);
            // fprintf(record,"Course: %s\n", info.course);

            printf("\n\n\t\t\t\t\t\t\tTest Number: ");
            scanf("%s", &info.number);
            fprintf(ftp,"Testnumber: %s\n", info.number);
            // fprintf(record,"Course: %d\n", info.number);

            printf("\n\n\t\t\t\t\t\t\tYear level: ");
            scanf("%s", &info.year);
            fprintf(ftp,"year: %s\n", info.year);
            // fprintf(record,"Course: %d\n", info.year);

            fwrite(&info,sizeof(struct student),1,record);
			fclose(record);
                 

            printf("\n\n\t\t\t\t\t\t\tExam [1]: ");
            printf("\n\n\t\t\t\t\t\t\tMain[2]: ");
            scanf("%d", &another);

              if(another == 1){
                system("cls");
                goto exam;
              }
              else if(another == 2){
                  system("cls");
                  fclose(ftp);
                  main();
              }

    
    exam:
    system("color 6");
    system("cls");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t1. He is considered by some as a father of the Computer?");
    printf("\n\t\t\t================================================================\n");
	/*Charles Babage 
    
    Charles Babbage (1791-1871) was an English polymath, mathematician, philosopher, inventor, and mechanical engineer.12 He is considered by some to be the "father of the computer" and is credited with conceiving the first automatic digital computer.1 Babbage helped found the Analytical Society in 1812, which aimed to introduce developments from the European continent into English mathematics.0 He is often depicted as the "father" or "pionnier" of the history of computing.1
    
    */
    system("color");
    printf("\t\t[A.] Bill Gates  \t"

           "[B.] Steve Jobs  \t"

           "[C.] Charles Babage  \t"
           "[D.] Ada  \t\n\n"
           "Your answer: ");
    scanf("%s", &bill438);
 
    if (bill438 == 'C' || bill438 == 'c')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest2;
    }
    else if (bill438 != 'C' || bill438 != 'c')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is c.\n\n");
        system("color");
        goto quest2;
        
    }
   

quest2:
    system("color 6");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t2.Which of the following is the lowest level of Computer language?");
    printf("\n\t\t\t================================================================\n");
    //JOSE P. LAUREL
    system("color");
    printf("\t\t[A.] Assembler");
    printf("\t[B.] Machine Language");
    printf("\t[C.] Pascal");
    printf("\t[D.] FORTRAN");
    printf("\nANSWER: ");
    scanf("%s", &quest2);

    if (quest2 == 'B' || quest2 == 'b')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest3;
    }
    else if (quest2 != 'B' || quest2 != 'b')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is B.\n\n");
        system("color");
        goto quest3;
    }

quest3:
    system("color 6");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t3. The term GUI stands for?");
    printf("\n\t\t\t================================================================\n");
    //May 14, 1956
    system("color");
    printf("\t\t[A.] Graphical User Interface");
    printf("\t[B.] Graphical Unused Input");
    printf("\t[C.] Graphical Ultimate Interface\n");
    printf("\t\t[D.] Gorgeous Unidentified Idiot");
    printf("\n\nAnswer: ");
    scanf("%s", &quest3);

    if (quest3 == 'A' || quest3 == 'a')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest4;
    }
    else if (quest3 != 'A' || quest3 != 'a')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is A.\n\n");
        system("color");
        goto quest4;
    }

quest4:
   system("color 6");
   printf("\n\t\t\t================================================================\n");
    printf("\t\t\t\t4. Which of the following is not a databased program?");
    printf("\n\t\t\t================================================================\n");
    //May 14, 1956
    system("color");
    printf("\t\t[A.] MS-Access");
    printf("\t[B.] MS-Word");
    printf("\t[C.] Filmaker-Pro");
    printf("\t[D.] Oracle\n\n");
    printf("ANSWER: ");
    scanf("%s", &quest3);

    if (quest3 == 'B' || quest3 == 'b')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest5;
    }
    else if (quest3 != 'B' || quest3 != 'b')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is B.\n\n");
        system("color");
        goto quest5;
    }

 quest5:

   system("color 6");
   printf("\n\t\t\t================================================================\n");
    printf("\t\t\t\t5. RAM refers as: RANDOM ACCESS MEMORY?");
    printf("\n\t\t\t================================================================\n");
    //May 14, 1956
    system("color");
    printf("\t\t[A.] TRUE");
    printf("\t\t[B.] FALSE");
    printf("\n\nANSWER: ");
    scanf("%s", &quest3);

    if (quest3 == 'A' || quest3 == 'a')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest6;
    }
    else if (quest3 != 'A' || quest3 != 'a')
    {
        system("color 2");
        printf("Correct score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is A.\n\n");
        system("color");
        goto quest6;
    }

    quest6:
   system("color 6");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t\t6. Which of the following is generally used as a Computer Input System?");
    printf("\n\t\t\t================================================================\n");
    system("color");
    printf("\t\t[A.] Speaker");
    printf("\t[B.] Standard Monitor");
    printf("\t[C.] Keyboard");
    printf("\t[D.] Laser Printer");
    printf("\n\nANSWER: ");
    scanf("%s", &quest3);

    if (quest3 == 'C' || quest3 == 'c')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest7;
    }
    else if (quest3 != 'C' || quest3 != 'c')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is C.\n\n");
        system("color");
        goto quest7;
    }
      


quest7:
   system("color 6");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t\t7. What does WWW stands for?\n\n");
    printf("\n\t\t\t================================================================\n");
    system("color");
    printf("\t\t[A.] World Wrestle");
    printf("\t[B.] World Wide Web");
    printf("\t[C.] Where We Were");
    printf("\t[D.] World Youth");
    printf("\n\nANSWER: ");
    scanf("%s", &quest3);

    if (quest3 == 'B' || quest3 == 'b')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest8;
    }
    else if (quest3 != 'B' || quest3 != 'b')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is B.\n\n");
        system("color");
        goto quest8;
    }

    quest8:
      system("color 6");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t\t8. The keyboard designed by SHOLES is?");
    printf("\n\t\t\t================================================================\n");
    system("color");
    printf("\t\t[A.] Qwerty");
    printf("\t[B.] Sholelsay");
    printf("\t[C.] Dvorak");
    printf("\t[D.] Yuiop");
    printf("\n\nANSWER: ");
    scanf("%s", &quest3);

    if (quest3 == 'A' || quest3 == 'a')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest9;
    }
    else if (quest3 != 'A' || quest3 != 'a')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is A.\n\n");
        system("color");
        goto quest9;
    }

    quest9:
      system("color 6");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t\t9. Does ROM refers as READ ONLY MEMORY?");
    printf("\n\t\t\t================================================================\n");
    system("color");
    printf("\t\t[A.] TRUE");
    printf("\t\t[B.] FALSE");
   printf("\n\nANSWER: ");
    scanf("%s", &quest3);

    if (quest3 == 'A' || quest3 == 'a')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        goto quest10;
    }
    else if (quest3 != 'A' || quest3 != 'a')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is A.\n\n");
        system("color");
        goto quest10;
    }

    quest10:
      system("color 6");
    printf("\n\t\t\t================================================================\n");
    printf("\t\t\t\t10. The first IBM PC was released to the public prior to 1985.?\n\n");
    printf("\n\t\t\t================================================================\n");
    system("color");
    printf("\t\t[A.] TRUE");
    printf("\t\t[B.] FALSE");
   printf("\n\nANSWER: ");
    scanf("%s", &quest3);

    if (quest3 == 'A' || quest3 == 'a')
    {
        system("color 2");
        score++;
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        system("color");
        
    }
    else if (quest3 != 'A' || quest3 != 'a')
    {
        system("color 2");
        printf("\t\tCorrect score: %d\n", score);
        system("color 4");
        incorrect++;
        printf("\t\tIncorrect score: %d\n\n", incorrect);
        printf("\t\tIncorrect right answer is A.\n\n");
        system("color");
        
    }
    fprintf(ftp,"Score: %d", score);
//    fprintf(record,"Score: %d", score );
    fclose(ftp);

			system("color 7");
		printf("\n\n\t\t\t\t\t\t\t\t[1] Main Menu\n");
		printf("\n\n\t\t\t\t\t\t\t\tOption: ");
		scanf("%d", &menu);
		if(menu == 1){
			system("cls");
			system("color 7");
			main();
		}
}
	
void admin(void){

            int option;
            repeat:
        	  printf("\n\n\n\n");
              printf("\t\t\t\t\t\t\t\t\t\t|  Welcome admin |\n");
			  printf("\t\t\t\t\t\t====================================================================================\n");
              printf("\t\t\t\t\t\t| search guide[1]\t");
              printf("search student[2]\t");
              printf("Removes[3]\t");
              printf("MAIN MENU[4]        |\t\n");
			  printf("\t\t\t\t\t\t====================================================================================\n");
              printf("\n\n\t\t\t\t\t\t\t\t\t\toption: ");
              scanf("%d", &option);

              switch (option)
              {
              case 1:
              system("cls");
                      record();
                break;
                case 2:
                  system("cls");
                    search();
                break;

                case 3: 
                system("cls");
               dels();
                break;
                
                case 4:
                	system("cls");
                	main();
                	break;
                	
                	default:
                		system("cls");
                		goto repeat;
              }

}

void dels(){
	
	
          FILE *file;

            char name[50];
            char find[50];
			int search;
			int decide;
			
				again:
            printf("\n\n\t\t\t\t\t\t\t\tenter FileName:  ");
            scanf("%s", &name);
            system("cls");

            strcpy(find, name);
            file =fopen(strcat(find,".txt"), "r");
			
            char display;
            if(file == NULL){
            	printf("\n\n\t\t\t\t\t\t\t\tfile not found");
            	goto again;
			}
            while((display =fgetc(file))!=EOF)
            {
            	repeat:
              putchar(display);
            }
            fclose(file);  
            
            printf("\n\n\t\t\t\t\tare you sure you want to delete? [1]delete [2]Back: ");
            printf("\n\n\t\t\t\t\t\toption: ");
            scanf("%d", &decide);
            if(decide == 1){
            	removes();
			}
			else if(decide == 2){
				system("cls");
				admin();
			}
			else{
				system("cls");
				goto repeat;
			}
			back:
				
			printf("\n\n\t\t\t\t\t\t\t\t\t[1] delete");
			printf("\n\n\t\t\t\t\t\t\t\t\t[2] Main");
			printf("\n\n\t\t\t\t\t\t\t\t\tOption: ");
			scanf("%d", &search);
			
			switch(search){
				
				case 1:
					system("cls");
					removes();
					system("cls");
					break;
					
				case 2:
					system("cls");
					admin();
					break;
					default:
						system("cls");
						goto repeat;
			}    
	
}
void removes(){
            
	    FILE *ftp;
		int trail;
		char find[50];
		char name[50];
		
			printf("\n\n\n\t\t\t\t\t\t\t\tverify filename: ");
			scanf("%s", &name);
			strcpy(find,name);
			
	  			remove(strcat(find,".txt"));
	  	 	printf("\n\n\n\t\t\t\t\t\t\t\tfile removed");
				
				printf("\n\n\n\t\t\t\t\t\t\t\t[1] Main Menu: ");
				printf("\n\n\n\t\t\t\t\t\t\t\tOption: ");
				scanf("%d", &trail);
			
			if(trail == 1){
				system("cls");
				admin();
			}
			else{
				system("cls");
				admin();
		}
		
	  	 	fclose(ftp);
			

}
void record(welcome, filename){
            
            int again;
   			struct student info;
            FILE *record;
				
          record = fopen("record.txt", "r"); 
          
          if(record == NULL){
            fprintf(stderr,"file not found: ");
          }
          else{
          	             	printf("\t FILENAME GUIDE\n");
             while(fread(&info,sizeof(struct student),1,record)){
			  printf("\t|================================|\n");
			  printf("\t Filename: %s                  	 \n", info.filename);
              printf("\t NAME: %s %s					 \n", info.firstname,info.lastname);
              printf("\t COURSE: %s                  	 \n", info.course);
//              printf("\t TEST NUMBER: %s              	 \n", info.number);
//              printf("\t YEAR LEVEL: %s              	 \n", info.year);
              printf("\t|================================|\n");
          }
          fclose(record);
          }  
          repeat:
            printf("\n\t[1] to go back menu: ");
            scanf("%d", &again);

            if(again == 1){
              system("cls");
              admin();
            }
            else{
            	system("cls");
            	goto repeat;
			}
}
void search(void){

          FILE *file;

            char name[50];
            char find[50];
			int search;
			back:
				
            printf("\n\n\t\t\t\t\t\t\t\tenter FileName:  ");
            scanf("%s", &name);
            system("cls");

            strcpy(find, name);
            file =fopen(strcat(find,".txt"), "r");

            char display;
            if(file == NULL){
            	printf("\n\n\t\t\t\t\t\t\t\tfile not found");
			}
            while((display =fgetc(file))!=EOF)
            {
              putchar(display);
            }
            fclose(file);  
			repeat:
			printf("\n\n\t\t\t\t\t\t\t\t\t[1] Search");
			printf("\n\n\t\t\t\t\t\t\t\t\t[2] Main");
			printf("\n\n\t\t\t\t\t\t\t\t\tOption: ");
			scanf("%d", &search);
			
			switch(search){
				
				case 1:
					system("cls");
					goto back;
					system("cls");
					break;
					
				case 2:
					system("cls");
					admin();
					break;
					default:
					goto repeat;
			}    
}
void input(){
	
	int another;
				repeat:
				printf("\n\n\t\t\t\t\t\tAre you sure you want to proceed to admin? [1]Enter [2]Exit: ");
				printf("\n\n\n\t\t\t\t\t\tOption: ");
				scanf("%d", &another);
				
				switch (another){
					case 1:
						system("cls");
						secure();
						break;
					
					case 2: 
					system("cls");
					main();
					break;
					default:
						system("cls");
						goto repeat;
				}
					
	
}
void secure(){
			char user[50];
		char password[50];
						 
                    printf("\t\t\t\t\t\t\t\t\t\t==================\n");
					printf("\t\t\t\t\t\t\t\t\t\tADMIN VERIFICATION\n");
					printf("\t\t\t\t\t\t\t\t\t\t==================");
                    printf("\n\t\t\t\t\t\t\t\t\t\tUSER: ");
                    scanf("%s", user);
                    printf("\n\t\t\t\t\t\t\t\t\t\tPASSWORD: ");
                    scanf("%s", password);
					system("cls");
                    if(strcmp(user, "ADMIN")==0){
                     if(strcmp(password, "123")==0){  
                    	
                       admin();
                       
                       }
                        else{
                    input();
                  }  
                    }
                    else{
                    	secure();
					}	
}
//void exam(){
//
//      printf("\n\t\t\t\t\t\t\tFILL UP[1]\t");
//      scanf("%d", &fill);
//      	
//      		
//      if(fill == 1){
//        system("color 7");
//        system("cls");
//        login(score);
//      }
//	FILE *ftp;
//	ftp = fopen("record.txt", "a");
//			char record [50];
//			strcpy(record, score);
////			printf("Score: ");
////			scanf("%d", &score);
//			fprintf(ftp,"\nScore: %s", record);
//		fclose(ftp);
//    
//
//}
