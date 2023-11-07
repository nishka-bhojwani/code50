#include "helpers.h"


// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0 ; i < height ; i++)
    {
        for (int j = 0 ; j < width ; j++)
        {
            float n =  (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0;
            image[i][j].rgbtRed = (int)n ;
            image[i][j].rgbtGreen =(int) n ;
            image[i][j].rgbtBlue = (int) n ;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0 ; i < height ; i++)
    {
        for( int j = 0 ; j < width ; j++)
        {
            int sepiaRed = (int).393 * image[i][j].rgbtRed+ .769 *image[i][j].rgbtGreen  + .189 * image[i][j].rgbtBlue;
            int sepiaGreen =  (int).349 * image[i][j].rgbtRed + .686 *image[i][j].rgbtGreen  + .168 * image[i][j].rgbtBlue;
            int sepiaBlue = (int).131 * image[i][j].rgbtRed + .534 *image[i][j].rgbtGreen  + .131 * image[i][j].rgbtBlue;
            if(sepiaRed > 255)
            {
                image[i][j].rgbtRed = 255;
            }
            if(sepiaGreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }
            if(sepiaBlue > 255)
            {
                image[i][j].rgbtBlue = 255;
            }
            else
            {
                image[i][j].rgbtRed = sepiaRed;
                image[i][j].rgbtGreen = sepiaGreen;
                image[i][j].rgbtBlue = sepiaBlue;

            }
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0 ; j <= (width - 1) / 2 ; j--)
        {
             
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
