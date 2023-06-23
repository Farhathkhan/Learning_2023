//file handling question 2- case handling

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(const char *sourceFileName, const char *targetFileName, char option) {
    FILE *sourceFile, *targetFile;
    char ch;

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        exit(1);
    }

    targetFile = fopen(targetFileName, "w");
    if (targetFile == NULL) {
        printf("Failed to create the target file.\n");
        fclose(sourceFile);
        exit(1);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == 'u') {
            ch = toupper(ch);  // Change content to upper case
        } else if (option == 'l') {
            ch = tolower(ch);  // Change content to lower case
        } else if (option == 's') {
            if (islower(ch)) {
                ch = toupper(ch);  // Change content to purely upper case
            }
        }

        fputc(ch, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);
}

int main(int argc, char *argv[]) {
    char *sourceFileName, *targetFileName;
    char option;

    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <target_file>\n");
        return 1;
    }

    option = argv[1][1];
    sourceFileName = argv[2];
    targetFileName = argv[3];

    copyFile(sourceFileName, targetFileName, option);

    return 0;
}
