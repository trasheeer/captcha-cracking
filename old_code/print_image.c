#include "captcha.h"	
#include <stdio.h>

void print_image(int height, int width, int pixels[height][width])
{
	for(int i = height-1; i >= 0; i--)
	{
		for(int j = 0; j < width; j++)
		{
			if(pixels[i][j])
				printf("*");
			else
				printf(".");
		}
		printf("\n");
	}
}