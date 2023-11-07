#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0 ; i < height ; i++)
    {
        for (int j = 0 ; j < width ; j++)
        {
            float n =  (images[i][j].rgbtRed + images[i][j].rgbtGreen + images[i][j].rgbtBlue) / 3.0
            images[i][j].rgbtRed = (int)n ;
            images[i][j].rgbtGreen =(int) n ;
            images[i][j].rgbtBlue = (int) n ;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
