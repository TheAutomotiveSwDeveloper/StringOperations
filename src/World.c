/*
 ============================================================================
 Name        : World.c
 Author      : Nilesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "CustomTypeDef.h"

void StringReversal(char *Src, char *Tst);
#define FINAL_TEST 3
char Input[5] = "ABCDE";
char Output[5];

int main(void) {

	StringReversal(&Input[0], &Output[0]);
	puts(Output);
	return EXIT_SUCCESS;
}


void StringReversal(char *Src, char *Tst)
{
	u8 Index = 0, j = 0;
	u8 StrLen = 0;

	StrLen = strlen(Src);
	for(Index = 0,j = StrLen - 1; Src[Index] != '\0'; Index++, j--)
	{
		Tst[j] = Src[Index];
	}

}
