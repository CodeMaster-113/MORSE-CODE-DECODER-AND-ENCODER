/**
* @brief MORSE CODE ENCODER AND DECODER. *
* This program is capable of decoding and encoding Morse Code
  The program asks for user input for choice.
  According to entered choice, the program calls either of two functions namely engToMorse() or morseToEng()
  History of every Translation is recorded in a .txt file using File I/O

* Function engToMorse is a void function @param integer count
  This function translates the English sentence entered by user into Morse code
  Along with the original entered statement , the translation is also recorded as history.

* Function morseToEng is a void function @param integer count
  This function translates the Morse Code sentence entered by user into English
  Along with the original entered statement , the translation is also recorded as history.

* @author Sahil Vishwasrao
* @date 14-12-2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void engToMorse(int count) /*function to convert English to Morse code*/
{
    FILE *fp = fopen("morse_history.txt", "a"); /*declaring  file pointer*/
    if (!fp) { printf("Error opening history file!\n"); return; }

    char eng[100];
    while (getchar() != '\n'); /*clear buffer*/

    printf("Enter Text to Encode: "); /*asking for English text*/
    fgets(eng, sizeof(eng), stdin);

    fprintf(fp, "%d. Text: %sMorse: ",count, eng);

    int len = strlen(eng);
    for (int i = 0; i < len; i++) /*accessing each letter and printing the Morse code as well as appending the history*/
        {
        if (eng[i] == 'A' || eng[i] == 'a') { printf(".- "); fprintf(fp,".- "); }
        else if (eng[i] == 'B' || eng[i] == 'b') { printf("-... "); fprintf(fp,"-... "); }
        else if (eng[i] == 'C' || eng[i] == 'c') { printf("-.-. "); fprintf(fp,"-.-. "); }
        else if (eng[i] == 'D' || eng[i] == 'd') { printf("-.. "); fprintf(fp,"-.. "); }
        else if (eng[i] == 'E' || eng[i] == 'e') { printf(". "); fprintf(fp,". "); }
        else if (eng[i] == 'F' || eng[i] == 'f') { printf("..-. "); fprintf(fp,"..-. "); }
        else if (eng[i] == 'G' || eng[i] == 'g') { printf("--. "); fprintf(fp,"--. "); }
        else if (eng[i] == 'H' || eng[i] == 'h') { printf(".... "); fprintf(fp,".... "); }
        else if (eng[i] == 'I' || eng[i] == 'i') { printf(".. "); fprintf(fp,".. "); }
        else if (eng[i] == 'J' || eng[i] == 'j') { printf(".--- "); fprintf(fp,".--- "); }
        else if (eng[i] == 'K' || eng[i] == 'k') { printf("-.- "); fprintf(fp,"-.- "); }
        else if (eng[i] == 'L' || eng[i] == 'l') { printf(".-.. "); fprintf(fp,".-.. "); }
        else if (eng[i] == 'M' || eng[i] == 'm') { printf("-- "); fprintf(fp,"-- "); }
        else if (eng[i] == 'N' || eng[i] == 'n') { printf("-. "); fprintf(fp,"-. "); }
        else if (eng[i] == 'O' || eng[i] == 'o') { printf("--- "); fprintf(fp,"--- "); }
        else if (eng[i] == 'P' || eng[i] == 'p') { printf(".--. "); fprintf(fp,".--. "); }
        else if (eng[i] == 'Q' || eng[i] == 'q') { printf("--.- "); fprintf(fp,"--.- "); }
        else if (eng[i] == 'R' || eng[i] == 'r') { printf(".-. "); fprintf(fp,".-. "); }
        else if (eng[i] == 'S' || eng[i] == 's') { printf("... "); fprintf(fp,"... "); }
        else if (eng[i] == 'T' || eng[i] == 't') { printf("- "); fprintf(fp,"- "); }
        else if (eng[i] == 'U' || eng[i] == 'u') { printf("..- "); fprintf(fp,"..- "); }
        else if (eng[i] == 'V' || eng[i] == 'v') { printf("...- "); fprintf(fp,"...- "); }
        else if (eng[i] == 'W' || eng[i] == 'w') { printf(".-- "); fprintf(fp,".-- "); }
        else if (eng[i] == 'X' || eng[i] == 'x') { printf("-..- "); fprintf(fp,"-..- "); }
        else if (eng[i] == 'Y' || eng[i] == 'y') { printf("-.-- "); fprintf(fp,"-.-- "); }
        else if (eng[i] == 'Z' || eng[i] == 'z') { printf("--.. "); fprintf(fp,"--.. "); }

        else if (eng[i] == '0') { printf("----- "); fprintf(fp,"----- "); }
        else if (eng[i] == '1') { printf(".---- "); fprintf(fp,".---- "); }
        else if (eng[i] == '2') { printf("..--- "); fprintf(fp,"..--- "); }
        else if (eng[i] == '3') { printf("...-- "); fprintf(fp,"...-- "); }
        else if (eng[i] == '4') { printf("....- "); fprintf(fp,"....- "); }
        else if (eng[i] == '5') { printf("..... "); fprintf(fp,"..... "); }
        else if (eng[i] == '6') { printf("-.... "); fprintf(fp,"-.... "); }
        else if (eng[i] == '7') { printf("--... "); fprintf(fp,"--... "); }
        else if (eng[i] == '8') { printf("---.. "); fprintf(fp,"---.. "); }
        else if (eng[i] == '9') { printf("----. "); fprintf(fp,"----. "); }

        else if (eng[i] == '.') { printf(".-.-.- "); fprintf(fp,".-.-.- "); }
        else if (eng[i] == ',') { printf("--..-- "); fprintf(fp,"--..-- "); }
        else if (eng[i] == '?') { printf("..--.. "); fprintf(fp,"..--.. "); }
        else if (eng[i] == '!') { printf("-.-.-- "); fprintf(fp,"-.-.-- "); }
        else if (eng[i] == '/') { printf("-..-. "); fprintf(fp,"-..-. "); }
        else if (eng[i] == '(') { printf("-.--. "); fprintf(fp,"-.--. "); }
        else if (eng[i] == ')') { printf("-.--.- "); fprintf(fp,"-.--.- "); }
        else if (eng[i] == ' ') { printf("/ "); fprintf(fp,"/ "); }

        else if (eng[i] == '\n') { /* do nothing */ }

        else { printf("? "); fprintf(fp,"? "); }
    }
    fprintf(fp,"\n");
    fclose(fp);
}

void morseToEng(int count) /*function to convert Morse code into English*/
{
    FILE *fp = fopen("morse_history.txt", "a"); /*file pointer for history recording*/
    char morse[1000];
    char letter[15];

    if (!fp) { printf("Error opening history file!\n"); return; }

    while (getchar() != '\n'); /*clear buffer*/
    printf("Enter Morse Code to Decode (use / for space): ");/*input for Morse code*/
    fgets(morse, sizeof(morse), stdin);

    fprintf(fp,"%d. Morse: %sEnglish: ",count,morse);

    int len = strlen(morse);
    int i = 0;

    while (i < len)
    {
        int j = 0;
        while (morse[i] != ' ' && morse[i] != '\n' && i < len)
        {
            letter[j++] = morse[i++];
        }
        letter[j] = '\0';
        i++;
        if (strlen(letter) == 0) continue;

        /*using strcmp() to compare each letter of Morse code and print the translation in both console and history*/
        if      (strcmp(letter, ".-") == 0) { printf("A"); fprintf(fp,"A"); }
        else if (strcmp(letter, "-...") == 0) { printf("B"); fprintf(fp,"B"); }
        else if (strcmp(letter, "-.-.") == 0) { printf("C"); fprintf(fp,"C"); }
        else if (strcmp(letter, "-..") == 0) { printf("D"); fprintf(fp,"D"); }
        else if (strcmp(letter, ".") == 0) { printf("E"); fprintf(fp,"E"); }
        else if (strcmp(letter, "..-.") == 0) { printf("F"); fprintf(fp,"F"); }
        else if (strcmp(letter, "--.") == 0) { printf("G"); fprintf(fp,"G"); }
        else if (strcmp(letter, "....") == 0) { printf("H"); fprintf(fp,"H"); }
        else if (strcmp(letter, "..") == 0) { printf("I"); fprintf(fp,"I"); }
        else if (strcmp(letter, ".---") == 0) { printf("J"); fprintf(fp,"J"); }
        else if (strcmp(letter, "-.-") == 0) { printf("K"); fprintf(fp,"K"); }
        else if (strcmp(letter, ".-..") == 0) { printf("L"); fprintf(fp,"L"); }
        else if (strcmp(letter, "--") == 0) { printf("M"); fprintf(fp,"M"); }
        else if (strcmp(letter, "-.") == 0) { printf("N"); fprintf(fp,"N"); }
        else if (strcmp(letter, "---") == 0) { printf("O"); fprintf(fp,"O"); }
        else if (strcmp(letter, ".--.") == 0) { printf("P"); fprintf(fp,"P"); }
        else if (strcmp(letter, "--.-") == 0) { printf("Q"); fprintf(fp,"Q"); }
        else if (strcmp(letter, ".-.") == 0) { printf("R"); fprintf(fp,"R"); }
        else if (strcmp(letter, "...") == 0) { printf("S"); fprintf(fp,"S"); }
        else if (strcmp(letter, "-") == 0) { printf("T"); fprintf(fp,"T"); }
        else if (strcmp(letter, "..-") == 0) { printf("U"); fprintf(fp,"U"); }
        else if (strcmp(letter, "...-") == 0) { printf("V"); fprintf(fp,"V"); }
        else if (strcmp(letter, ".--") == 0) { printf("W"); fprintf(fp,"W"); }
        else if (strcmp(letter, "-..-") == 0) { printf("X"); fprintf(fp,"X"); }
        else if (strcmp(letter, "-.--") == 0) { printf("Y"); fprintf(fp,"Y"); }
        else if (strcmp(letter, "--..") == 0) { printf("Z"); fprintf(fp,"Z"); }
        else if (strcmp(letter, "-----") == 0) { printf("0"); fprintf(fp,"0"); }
        else if (strcmp(letter, ".----") == 0) { printf("1"); fprintf(fp,"1"); }
        else if (strcmp(letter, "..---") == 0) { printf("2"); fprintf(fp,"2"); }
        else if (strcmp(letter, "...--") == 0) { printf("3"); fprintf(fp,"3"); }
        else if (strcmp(letter, "....-") == 0) { printf("4"); fprintf(fp,"4"); }
        else if (strcmp(letter, ".....") == 0) { printf("5"); fprintf(fp,"5"); }
        else if (strcmp(letter, "-....") == 0) { printf("6"); fprintf(fp,"6"); }
        else if (strcmp(letter, "--...") == 0) { printf("7"); fprintf(fp,"7"); }
        else if (strcmp(letter, "---..") == 0) { printf("8"); fprintf(fp,"8"); }
        else if (strcmp(letter, "----.") == 0) { printf("9"); fprintf(fp,"9"); }
        else if (strcmp(letter, "/") == 0) { printf(" "); fprintf(fp," "); }
        else { printf("?"); fprintf(fp,"?"); }
    }

    fprintf(fp,"\n");
    fclose(fp);
}

int main()  /*main function*/
{
    int count=0;
    printf("********** MORSE CODE DECODER AND ENCODER **********\n\n");/*title printed on output screen*/

    while (1) {
        char choice;
        /*printing the menu*/
        printf("1. Decode Morse Code\n");
        printf("2. Encode Text to Morse\n");
        printf("3. Exit\n");
        printf("Your choice: ");
        /*input for user choice*/
        scanf(" %c", &choice);
        /*calling functions based on user choice*/
        switch (choice)
        {
            case '1': count+=1; morseToEng(count); printf("\n"); break;
            case '2': count +=1; engToMorse(count); printf("\n"); break;
            case '3': printf("Exiting...\n"); return 0;/*if choice ==3 , terminate program*/
            default: printf("Invalid choice\n\n"); /*output if any invalid choice is entered*/
        }
    }
    return 0;
}
