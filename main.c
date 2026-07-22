#include <stdio.h>
#include <string.h>


int main(){

char fileName[50];
printf("Save As: ");
scanf("%49s", fileName);

strcat(fileName, ".ino");

FILE *ardPoint=fopen(fileName, "w");

if (ardPoint == NULL)
    {
        printf("Couldn't create file.\n");
        return 1;
    }

    printf("Created %s\n", fileName);

/*---------------------------------------------------------*/
int output, blinkDur;
printf("Enter Pin Index: ");
scanf("%d",&output);
printf("Enter Delay (in seconds): ");
scanf("%d",&blinkDur);
fprintf(ardPoint, "void setup(){ \n pinMode(%d, OUTPUT); \n } \n void loop(){ \n digitalWrite(%d, HIGH); \n delay(%d); \n digitalWrite(%d, LOW); \n delay(%d); \n}",output,output,blinkDur,output,blinkDur);

/*---------------------------------------------------------*/

    fclose(ardPoint);


return 0;
}
