#include<Stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

int main()
{
    system("Color 3F");
    int e,n1;
    char ch,ex;
    long int recsize;

    struct task
    {
        char title[40],date[15],time[10];

    } t;

    FILE *fp,*ft;

    fp=fopen("demo.txt","rb+");
    if(fp==NULL)
    {
        fp=fopen("demo.txt","wb+");
        if(fp==NULL)
        {
            printf("Can't open file\n");
            exit(1);
        }
    }
    char tasktitle[40];
    recsize = sizeof(t);

    printf("\n                  :::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n                  ::                                               ::");
    printf("\n                  ::     =====================================     ::");
    printf("\n                  ::     =                                   =     ::");
    printf("\n                  ::     =            WELCOME TO             =     ::");
    printf("\n                  ::     =                                   =     ::");
    printf("\n                  ::     =        PERSONAL ASSISTANT         =     ::");
    printf("\n                  ::     =                                   =     ::");
    printf("\n                  ::     =====================================     ::");
    printf("\n                  ::                                               ::");
    printf("\n                  :::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\n\n\n");

    printf("                               PRESS 1 TO ENTER : ");
    scanf("%d",&n1);
    system("cls");
    while(1)
    {

        printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

        printf("\n\n\n   \xB2\xDB 1. New Task   \n");
        printf("\n\n   \xB2\xDB 2. Added Task   \n");
        printf("\n\n   \xB2\xDB 3. Update Task   \n");
        printf("\n\n   \xB2\xDB 4. Remove/Delete Task   \n");
        printf("\n\n   \xB2\xDB 5. EXIT!!!   \n");
        printf("================================================================================\n");
        printf("================================================================================\n\n");
        printf("   ENTER ANY DIGIT BETWEEN (1-6) :");
        scanf(" %c",&ch);

        switch(ch)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END);
            ex='y';
            while(ex=='y')
            {
                printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 NEW TASK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
                printf("\n\n  \xB2\xDB ENTER TASK TITLE : ");
                scanf("%s",t.title);
                printf("\n  \xB2\xDB ENTER TIME(h:m) : ");
                scanf("%s",t.time);
                printf("\n  \xB2\xDB ENTER DATE(d/m/y) : ");
                scanf("%s",t.date);

                fwrite(&t,recsize,1,fp);

                printf("\nAdd another task?(y/n) : ");
                fflush(stdin);
                ex = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp);

                printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ADDED TASK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
                printf(" TASK TITLE       TIME           DATE\n");
                printf("======================================\n");
            while(fread(&t,recsize,1,fp)==1)
            {
                printf("\n %s      %s        %s",t.title,t.time,t.date);
            }
            getch();
            break;
        case '3':
            system("cls");
            ex = 'y';
            while(ex == 'y')
            {
                printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 UPDATE TASK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
                printf("ENTER THE TASK TITLE TO UPDATE : ");
                scanf("%s", tasktitle);
                rewind(fp);
                while(fread(&t,recsize,1,fp)==1)
                {
                    if(strcmp(t.title,tasktitle) == 0)
                    {
                        printf("\nEnter new time : ");
                        scanf("%s",t.time);
                        printf("\nEnter new date : ");
                        scanf("%s",t.date);
                        fseek(fp,-recsize,SEEK_CUR);
                        fwrite(&t,recsize,1,fp);
                        break;
                    }
                }
                printf("\nModify another task?(y/n)");
                fflush(stdin);
                ex = getche();
            }
            break;
        case '4':
            system("cls");
            ex = 'y';
            while(ex == 'y')
            {
                printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 REMOVE/DELETE TASK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
                printf("\nEnter Task Title to delete: ");
                scanf("%s",tasktitle);
                ft = fopen("demo.txt","wb");
                rewind(fp);
                while(fread(&t,recsize,1,fp) == 1)
                {
                    if(strcmp(t.title,tasktitle) != 0)
                    {
                        fwrite(&t,recsize,1,ft);
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("demo.txt");
                rename("Temp.txt","demo.txt");
                fp = fopen("demo.txt","rb+");
                printf("Delete another task?(y/n)");
                fflush(stdin);
                ex = getche();
            }
            break;
        case '5':
            fclose(fp);
            exit(0);
        }
    }

    return 0;




}


