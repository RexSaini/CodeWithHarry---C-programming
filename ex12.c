// Exrecise12
// Automated Recipt Generator
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    ptr1 = fopen("bill.txt", "r");    // File opened in read mode
    ptr2 = fopen("genBill.txt", "a"); // File opened in append mode
    char str[200];
    char name[50], item[50], outlet[50];

    printf("Enter customer name: ");
    gets(name);
    printf("Enter outlet name: ");
    gets(outlet);
    printf("Enter item name: ");
    gets(item);
    fgets(str, 200, ptr1);
    printf("\nThe bill tempelate is in the file 'bill.txt'\n");
    // printf("\nThe given bill template was: %s\n", str);

    // Call the replaceWord function and generate newStr
    char *newStr;
    newStr = replaceWord(str, "{item}", item);
    newStr = replaceWord(newStr, "{outlet}", outlet);
    newStr = replaceWord(newStr, "{name}", name);
    fprintf(ptr2, "\nDate: %s", __DATE__);   // Printing date with the bill
    fprintf(ptr2, "\nTime: %s\n", __TIME__); // Printing time with the bill
    printf("\nThe bill generated is:\n%s", newStr);
    printf("\nThe generated bill has been written to the file 'genBill.txt'");

    fprintf(ptr2, "%s", newStr);
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}