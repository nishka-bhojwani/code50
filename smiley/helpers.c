#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    for (int i = 0 ; i < height ; i++)
    {
        for (int j = 0 ; j < width ; j++)
        {
            if(images[i][j].rgbtBlue==0x00 && images[i][j].rgbtRed==0x00 && images[i][j].rgbtGreen==0x00)
            {
                images[i][j].rgbtBlue == 0x5f;
                images[i][j].rgbtGreen == 0x05;
                images[i][j].rgbtRed == 0x4f;


            }
        }

    }
}
