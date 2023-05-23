#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
  struct student
  {
    char firstname[50];
    char lastname[50];
    char course[50];
    int year;
    int number;
  };
  
  int login(){

                int another;


            FILE *ftp;
            struct student info;

            ftp = fopen("student.txt", "a");
            printf("\n\n\t\t\t\t\t\t\tFirstname: ");
            scanf("%s", &info.firstname); 
            printf("\n\n\t\t\t\t\t\t\tLastname: ");
            scanf("%s", &info.lastname);
            printf("\n\n\t\t\t\t\t\t\tCourse: ");
            scanf("%s", &info.course);
            printf("\n\n\t\t\t\t\t\t\tTest Number: ");
            scanf("%d", &info.number);
            printf("\n\n\t\t\t\t\t\t\tYear level: ");
            scanf("%d", &info.year);

          if(ftp == NULL){
          	system("cls");
            fprintf(stderr,"\n\n\t\t\t\t\t\t\tcant open file");
          }
          else{
          	system("cls");
            printf("\n\n\t\t\t\t\t\t\tfile stored successfully");
          }

          	fwrite(&info,sizeof(struct student),1,ftp);
            fclose(ftp);
            getch();

            printf("\n\n\t\t\t\t\t\t\tback [1]: ");
            printf("\n\n\t\t\t\t\t\t\texam[2]: ");
            scanf("%d", &another);

              if(another == 1){
                system("cls");
                main();
              }
              else if(another == 2){
                  system("cls");
                  exam();
                  
              }
              
  }
void main(void){

        int choice;
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\tWELCOME STUDENT OF BSIT");
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t[1] LOGIN: \n");
            printf("\n\n\n\t\t\t\t\t\t\t\tOPTION: ");
            scanf("%d", &choice);

            switch(choice){
              case 1: 
              system("cls");
                  login();
                  break;
                  case 2:
                  system("cls");
                     char user[50];
                    char password[50];
                    char ch;
                    int i;

                    printf("\nUSER: ");
                    scanf("%s", &user);

                    printf("\nPASSWORD: ");
                    scanf("%s", &password);
                    system("cls");
                    if(user != "ADMIN" || password != "amorabritmichael@gmail.com"){
                       
                       admin();
                    }
                  else{
                    printf("INVALID ADMIN");
                  }
                      break;
            }
}
void admin(void){

            int option;
              printf("Welcome admin\n");

              printf("\nstudent record[1]");
              printf("\nsearch student[2]");
              printf("\ndelete student[3]");
              printf("\nMAIN MENU[4]");

              printf("\noption: ");
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
                delete();
                break;

                case 4:
                system("cls");
                main();
                break;
              }

}
void record(void){
            
            int again;
   			struct student info;
            FILE *ftp;
          ftp = fopen("student.txt", "r"); 
          
          if(ftp == NULL){
            fprintf(stderr,"file not found: ");
          }
          else{
             while(fread(&info,sizeof(struct student),1,ftp)){

              printf("\nNAME: %s %s", info.firstname,info.lastname);
              printf("\nCOURSE: %s", info.course);
              printf("\nTEST NUMBER: %d", info.number);
              printf("\nYEAR LEVEL: %d\n", info.year);
          }
          fclose(ftp);
          }  
            printf("[1] to go back menu: ");
            scanf("%d", &again);

            if(again == 1){
              system("cls");
              admin();
            }
}
void search(void){

            int choice; 

              struct student info;
              FILE *ftp;

              int number,found =0;

              ftp=fopen("student.txt", "r");
              printf("student record:\n ");
              printf("enter test number: ");
              scanf("%d", &number);

              while(fread(&info,sizeof(struct student),1,ftp)>0){

                if(info.number==number){
                  found = 1;

                  printf("FIRSTNAME: %s\nLASTNAME: %s", info.firstname, info.lastname);
                  printf("\nCOURSE: %s ", info.course);
                  printf("\nNUMBER: %d", info.number);
                  printf("\nYEAR LEVEL: %d\n", info.year);
                }
              }
                fclose(ftp);

                printf("[1] to go back: \n");
                scanf("%d", &choice);

                if(choice == 1){
                  system("cls");
                  admin();
                }
}
void delete(void){
			int again;
          struct student info;

          FILE *ftp, *fp1;

          int number,found=0;

              printf("\nstudent record");

              ftp= fopen("student.txt", "r");
              fp1 = fopen("temp.txt", "w");

              printf("\nenter test number: ");
              scanf("%d", &number);

              if(ftp == NULL){
                fprintf(stderr,"can't open file: ");
                exit(0);
              }
              
              while(fread(&info,sizeof(struct student),1,ftp)){
                if(info.number == number){
                  found = 1;
                
              }
              else{
                fwrite(&info,sizeof(struct student),1,fp1);
              }
              }
      
              if(found){
                printf("record not found: ");
              }
                   fclose(ftp);
        fclose(fp1);
              if(found){
                  remove("student.txt");
                    rename("temp.txt","system.txt");

                    printf("\nrecord delete sucesfully");

                    getch();
              }
              printf("[1] MENU: ");
              scanf("%d", &again);
              
              if(again == 1){
              	system("cls");
              	main();
			  }
        
}
void exam(exam){
      printf("hehe bagsak ko");
}