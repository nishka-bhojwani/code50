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
        for (int j = 0 ; j < width  / 2 ; j++)
        {
             RGBTRIPLE temp = image[i][j];
             image[i][j] = image[i][width - j - 1];
             image[i][width - j - 1] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    //Create a copy of tne given array
    RGBTTRIPLE copy[height][width];
    for (int i = 0 ; i < height ; i++)
    {
        for(int j = 0 ; j < width ; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
    for (int i = 0 ; i < height ; i++)
    {
        for(int j = 0 ; j < width ; j++)
        {
            int red_total= 0;
            int green_total = 0;
            int blue_total= 0;
            float total = 0 ;

            for (int x = -1 ; x < 2 ; x++)
            {
                for (int y = -1 ; y < 2 ; y++)
                {
                    X_value = x + i;
                    Y_value = y + j;
                }
                //checking the validity of surrounding values
                if( X_value < 0 || X_value > height-1 || Y_value < 0|| Y_value > width - 1 ){

                }
                else
                {
                    red_total += images[X_value][Y_value].rgbtRed ;
                    green_total += images[X_value][Y_value].rgbtGreen ;
                    blue_total += images[X_value][Y_value].rgbtBlue ;
                    total++ ;
                }
            }
        }
    }
    return;
}
