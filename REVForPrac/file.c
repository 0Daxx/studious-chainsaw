#include <stdio.h>

int writeFile(){

    FILE *ptr;
    ptr = fopen("justAVent.txt","w");


    // check if exists
    if (ptr == NULL) return printf("Error opening file\n");

    fwrite("Placement lagegi 1 cr+ ki \n",sizeof("Placement lagegi 1 cr+ ki "),1,ptr);


    fputs("Placement lagegi 2 cr+ ki \n",ptr);
    fclose(ptr);
}

void readFile(){

    FILE *filePtr = fopen("justAVent.txt","r");

    char str[120];
    fgets(str,100,filePtr);
    // why does it only brings the first line only , not continue till 2nd one
    //      maybe due to \n
    /*
    The reason why the first fgets only prints the first sentence is because of the way fgets works.

fgets reads a line of input from the file and stores it in the buffer str. However, it also includes the newline character (\n) at the end of the string.

Then, when you call printf to print the contents of str, it prints the first line followed by a newline character, which causes the cursor to move to the next line.

However, the file pointer is still at the end of the first line, so the next fgets would read the newline character as an empty line, which is why you don't see the second line printed.
    */
    printf("%s",str);
    fgets(str,100,filePtr);
    printf("%s",str);
}

void readFileAndWrite(){
    FILE *filePtr = fopen("justAVent.txt","r");
    FILE *newFilePtr = fopen("newFile.txt","w");
    char str[120];
    while(fgets(str, 120, filePtr) != NULL){
        printf("%s", str);
        fputs(str, newFilePtr);
    }
    fclose(filePtr);
    fclose(newFilePtr);
}

int main(){

    // writeFile();
    // readFile();
    readFileAndWrite();
    return 0;
}