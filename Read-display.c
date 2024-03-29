#include<stdio.h>
    #include<conio.h>
        voidmain()
        {
            int id;
            char name[10], address[10], ch;
            FILE *fp;
            fp=fopen("student.dat", "a");
            Do
            {
                printf("\n enter id, name, address");
                scanf("%d %s %s", &id, name, add);
                printf("\n Do you want to add more?");
                scanf("%c", ch);
                while(ch=='Y'|| (ch=='y'))
                printf("\n Data Saved");
            }
            fclose(fp);
            fp=fopen("student.dat", "r");
            while((fscanf, %d %s %s, &id, name, add)!=EOF)
            {
                printf(" \n %d \t %s \t %s \t", id, name, add);
            }
            fclose (fp);
            getch();
        }
