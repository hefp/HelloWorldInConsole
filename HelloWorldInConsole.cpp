// HelloWorldInConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   // std::cout << "Hello World!\n";
    char sentence[1000];
    strcpy_s(sentence, "Huhu Haha Hehe");
    // creating file pointer to work with files
    FILE* fptr;

    // opening file in writing mode
    errno_t errorvalue = fopen_s(&fptr,"program.txt", "w");

    // exiting program 
    if (errorvalue != NULL) {
        printf("Error!");
        exit(1);
    }
   // printf("Enter a sentence:\n");
   // fgets(sentence, sizeof(sentence), stdin);
   // fprintf(fptr, "%s", sentence);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
