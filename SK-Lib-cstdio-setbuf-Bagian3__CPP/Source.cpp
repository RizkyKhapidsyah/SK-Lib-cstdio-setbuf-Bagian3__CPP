#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    char str[] = "Unbuffered Stream";
    char strFromFile[20];

    FILE* fp;
    fp = fopen("test.txt", "wb+");

    setbuf(fp, NULL);
    fwrite(str, sizeof(str), 1, fp);
    fflush(fp);

    /* We need to rewind the file pointer and read the file because
    the data from test.txt isn't saved in any buffer */
    rewind(fp);
    fread(strFromFile, sizeof(strFromFile), 1, fp);

    fclose(fp);

    cout << strFromFile;
    
    _getch();
    return 0;
}