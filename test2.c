#include<stdio.h>

int main(){
    int i=0;
    for (i=0; i < 5;i++)
        printf("git!!!\n");

    FILE *fp;
    fp = fopen("datafile.dat", "wb");
    fwrite(&i, sizeof(int), 1, fp);

    fclose(fp);
    return;
}