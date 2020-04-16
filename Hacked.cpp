#include "TxLib.h"

//=============================================================================
//                                CONSTANS                                    ;
//=============================================================================

const int C_max_x_coord = 1000;

const int C_max_y_coord = 800;

const int C_word_height = 150;

const int C_word_width  = 100;

const int C_cnt_of_colors = 18;

//=============================================================================

void Draw_H (const int x, const int y, const int color = TX_WHITE); // up-left conner
void Draw_A (const int x, const int y, const int color = TX_WHITE); // up-left conner
void Draw_C (const int x, const int y, const int color = TX_WHITE); // up-left conner
void Draw_K (const int x, const int y, const int color = TX_WHITE); // up-left conner
void Draw_E (const int x, const int y, const int color = TX_WHITE); // up-left conner
void Draw_D (const int x, const int y, const int color = TX_WHITE); // up-left conner

void Fill_Word (const int x, const int y, const int color = TX_WHITE);

//-----------------------------------------------------------------------------

void Draw_HACKED (int arr_of_colors[]);

void Draw_Signature (const int color = TX_WHITE);

void Draw_Explosion ();

//=============================================================================

int main ()
{
    txCreateWindow (C_max_x_coord, C_max_y_coord);

    int arr_of_colors[C_cnt_of_colors] = {
                                            TX_BLUE,
                                            TX_GREEN,
                                            TX_CYAN,
                                            TX_RED,
                                            TX_MAGENTA,
                                            TX_ORANGE,
                                            TX_GRAY,
                                            TX_DARKGRAY,
                                            TX_LIGHTGRAY,
                                            TX_LIGHTBLUE,
                                            TX_LIGHTGREEN,
                                            TX_LIGHTCYAN,
                                            TX_LIGHTRED,
                                            TX_LIGHTMAGENTA,
                                            TX_PINK,
                                            TX_YELLOW,
                                            TX_WHITE
                                            };


    Draw_HACKED (arr_of_colors);

    txSleep (500);

    Draw_Signature (TX_ORANGE);

    txSleep (300);

    txPlaySound ("Explosion.wav");
    Draw_Explosion ();

    return 0;
}

//=============================================================================

void Draw_H (const int x, const int y, const int color)
{
    txLine (x, y,
            x, y + C_word_height);

    txLine (x,                    y + C_word_height,
            x + C_word_width / 3, y + C_word_height);

    txLine (x + C_word_width / 3, y + C_word_height,
            x + C_word_width / 3, y + C_word_height - C_word_height / 3);

    txLine (x + C_word_width / 3,     y + C_word_height - C_word_height / 3,
            x + 2 * C_word_width / 3, y + C_word_height - C_word_height / 3);

    txLine (x + 2 * C_word_width / 3, y + C_word_height - C_word_height / 3,
            x + 2 * C_word_width / 3, y + C_word_height);

    txLine (x + 2 * C_word_width / 3, y + C_word_height,
            x + C_word_width,         y + C_word_height);

    txLine (x + C_word_width, y + C_word_height,
            x + C_word_width, y);

    txLine (x + C_word_width, y,
            x + C_word_width - C_word_width / 3, y);

    txLine (x + C_word_width - C_word_width / 3, y,
            x + C_word_width - C_word_width / 3, y + C_word_height / 3);

    txLine (x + C_word_width - C_word_width / 3,     y + C_word_height / 3,
            x + C_word_width - 2 * C_word_width / 3, y + C_word_height / 3);

    txLine (x + C_word_width - 2 * C_word_width / 3, y + C_word_height / 3,
            x + C_word_width - 2 * C_word_width / 3, y);

    txLine (x + C_word_width - 2 * C_word_width / 3, y,
            x,                                       y);


    Fill_Word (x + 2, y + 2, color);
}

//-----------------------------------------------------------------------------

void Draw_A (const int x, const int y, const int color)
{
    txLine (x,                    y + C_word_height,
            x + C_word_width / 3, y);

    txLine (x + C_word_width / 3,     y,
            x + 2 * C_word_width / 3, y);

    txLine (x + 2 * C_word_width / 3, y,
            x + C_word_width, y + C_word_height);

    txLine (x + C_word_width,                    y + C_word_height,
            x + C_word_width - C_word_width / 5, y + C_word_height);

    txLine (x + C_word_width - C_word_width / 5,     y + C_word_height,
            x + C_word_width - 2 * C_word_width / 5, y + C_word_height - C_word_height / 3);

    txLine (x + C_word_width - 2 * C_word_width / 5, y + C_word_height - C_word_height / 3,
            x + C_word_width - 3 * C_word_width / 5, y + C_word_height - C_word_height / 3);

    txLine (x + C_word_width - 3 * C_word_width / 5, y + C_word_height - C_word_height / 3,
            x + C_word_width - 4 * C_word_width / 5, y + C_word_height);

    txLine (x + C_word_width - 4 * C_word_width / 5, y + C_word_height,
            x,                                       y + C_word_height);


    txLine (x + 2 * C_word_width / 5, y + C_word_height / 2,
            x + C_word_width / 2,     y + C_word_height / 4);

    txLine (x + C_word_width / 2,     y + C_word_height / 4,
            x + 3 * C_word_width / 5, y + C_word_height / 2);

    txLine (x + 3 * C_word_width / 5, y + C_word_height / 2,
            x + 2 * C_word_width / 5, y + C_word_height / 2);


    Fill_Word (x + 1, y + C_word_height - 1, color);
}

//-----------------------------------------------------------------------------

void Draw_C (const int x, const int y, const int color)
{
    txLine (x, y,
            x, y + C_word_height);

    txLine (x,                y + C_word_height,
            x + C_word_width, y + C_word_height);

    txLine (x + C_word_width, y + C_word_height,
            x + C_word_width, y + C_word_height - C_word_height / 4);

    txLine (x + C_word_width,         y + C_word_height - C_word_height / 4,
            x + 2 * C_word_width / 5, y + C_word_height - C_word_height / 4);

    txLine (x + 2 * C_word_width / 5, y + C_word_height - C_word_height / 4,
            x + 2 * C_word_width / 5, y + C_word_height - 3 * C_word_height / 4);

    txLine (x + 2 * C_word_width / 5, y + C_word_height - 3 * C_word_height / 4,
            x + C_word_width,         y + C_word_height - 3 * C_word_height / 4);

    txLine (x + C_word_width, y + C_word_height - 3 * C_word_height / 4,
            x + C_word_width, y);

    txLine (x + C_word_width, y,
            x,                y);


    Fill_Word (x + 2, y + 2, color);
}

//-----------------------------------------------------------------------------

void Draw_K (const int x, const int y, const int color)
{
    txLine (x, y,
            x, y + C_word_height);

    txLine (x,                        y + C_word_height,
            x + 3 * C_word_width / 8, y + C_word_height);

    txLine (x + 3 * C_word_width / 8, y + C_word_height,
            x + 3 * C_word_width / 8, y + C_word_height - 2 * C_word_height / 5);

    txLine (x + 3 * C_word_width / 8, y + C_word_height - 2 * C_word_height / 5,
            x + 5 * C_word_width / 8, y + C_word_height);

    txLine (x + 5 * C_word_width / 8, y + C_word_height,
            x + C_word_width,         y + C_word_height);

    txLine (x + C_word_width,         y + C_word_height,
            x + 5 * C_word_width / 8, y + C_word_height / 2);

    txLine (x + 5 * C_word_width / 8, y + C_word_height / 2,
            x + C_word_width,         y);

    txLine (x + C_word_width,         y,
            x + 5 * C_word_width / 8, y);

    txLine (x + 5 * C_word_width / 8, y,
            x + 3 * C_word_width / 8, y + C_word_height - 3 * C_word_height / 5);

    txLine (x + 3 * C_word_width / 8, y + C_word_height - 3 * C_word_height / 5,
            x + 3 * C_word_width / 8, y);

    txLine (x + 3 * C_word_width / 8, y,
            x,                        y);

    Fill_Word (x + 1, y + 1, color);
}

//-----------------------------------------------------------------------------

void Draw_E (const int x, const int y, const int color)
{
    txLine (x, y,
            x, y + C_word_height);

    txLine (x,                y + C_word_height,
            x + C_word_width, y + C_word_height);

    txLine (x + C_word_width, y + C_word_height,
            x + C_word_width, y + C_word_height - C_word_height / 5);

    txLine (x + C_word_width,         y + C_word_height - C_word_height / 5,
            x + 2 * C_word_width / 5, y + C_word_height - C_word_height / 5);

    txLine (x + 2 * C_word_width / 5, y + C_word_height - C_word_height / 5,
            x + 2 * C_word_width / 5, y + C_word_height - 2 * C_word_height / 5);

    txLine (x + 2 * C_word_width / 5, y + C_word_height - 2 * C_word_height / 5,
            x + 3 * C_word_width / 4, y + C_word_height - 2 * C_word_height / 5);

    txLine (x + 3 * C_word_width / 4, y + C_word_height - 2 * C_word_height / 5,
            x + 3 * C_word_width / 4, y + C_word_height - 3 * C_word_height / 5);

    txLine (x + 3 * C_word_width / 4, y + C_word_height - 3 * C_word_height / 5,
            x + 2 * C_word_width / 5, y + C_word_height - 3 * C_word_height / 5);

    txLine (x + 2 * C_word_width / 5, y + C_word_height - 3 * C_word_height / 5,
            x + 2 * C_word_width / 5, y + C_word_height - 4 * C_word_height / 5);

    txLine (x + 2 * C_word_width / 5, y + C_word_height - 4 * C_word_height / 5,
            x + C_word_width,         y + C_word_height - 4 * C_word_height / 5);

    txLine (x + C_word_width, y + C_word_height - 4 * C_word_height / 5,
            x + C_word_width, y);

    txLine (x + C_word_width, y,
            x,                y);


    Fill_Word (x + 1, y + 1, color);
}

//-----------------------------------------------------------------------------

void Draw_D (const int x, const int y, const int color)
{
    txLine (x, y,
            x, y + C_word_height);

    txLine (x,                    y + C_word_height,
            x + C_word_width / 4, y + C_word_height);

    txLine (x,                    y,
            x + C_word_width / 4, y);

    txArc (x + C_word_width / 4 - 3 * C_word_width / 4, y + C_word_height,
           x + C_word_width / 4 + 3 * C_word_width / 4, y,
           270, 180);


    txLine (x + C_word_width / 4, y + C_word_height / 5,
            x + C_word_width / 4, y + C_word_height - C_word_height / 5);

    txArc (x + C_word_width / 4 - C_word_width / 2, y + C_word_height - C_word_height / 5,
           x + C_word_width / 4 + C_word_width / 2, y + C_word_height / 5,
           270, 180);


    Fill_Word (x + 1, y + 1, color);
}

//=============================================================================

void Fill_Word (const int x, const int y, const int color)
{
    COLORREF saved_color = txGetColor();
    txSetFillColor (color);

    txFloodFill (x, y);

    txSetFillColor (saved_color);
}

//=============================================================================

void Draw_HACKED (int arr_of_colors[])
{
    const int gorizontal_coord = (C_max_y_coord - C_word_height) / 2;

    const int pos1 = (C_max_x_coord - C_word_width * 6) / 2;
    const int pos2 = pos1 + C_word_width + 10;
    const int pos3 = pos2 + C_word_width + 10;
    const int pos4 = pos3 + C_word_width + 10;
    const int pos5 = pos4 + C_word_width + 10;
    const int pos6 = pos5 + C_word_width + 10;

    Draw_H (pos1, gorizontal_coord);
    Draw_A (pos2, gorizontal_coord);
    Draw_C (pos3, gorizontal_coord);
    Draw_K (pos4, gorizontal_coord);
    Draw_E (pos5, gorizontal_coord);
    Draw_D (pos6, gorizontal_coord);

    for (int i = 0; i < 300; i++)
    {
        txSleep ();

        Draw_H (pos1, gorizontal_coord, arr_of_colors[rand() % C_cnt_of_colors]);
        Draw_A (pos2, gorizontal_coord, arr_of_colors[rand() % C_cnt_of_colors]);
        Draw_C (pos3, gorizontal_coord, arr_of_colors[rand() % C_cnt_of_colors]);
        Draw_K (pos4, gorizontal_coord, arr_of_colors[rand() % C_cnt_of_colors]);
        Draw_E (pos5, gorizontal_coord, arr_of_colors[rand() % C_cnt_of_colors]);
        Draw_D (pos6, gorizontal_coord, arr_of_colors[rand() % C_cnt_of_colors]);
    }

    Draw_H (pos1, gorizontal_coord, TX_LIGHTRED);
    Draw_A (pos2, gorizontal_coord, TX_LIGHTRED);
    Draw_C (pos3, gorizontal_coord, TX_LIGHTRED);
    Draw_K (pos4, gorizontal_coord, TX_LIGHTRED);
    Draw_E (pos5, gorizontal_coord, TX_LIGHTRED);
    Draw_D (pos6, gorizontal_coord, TX_LIGHTRED);
}

//-----------------------------------------------------------------------------

void Draw_Signature (const int color)
{
    COLORREF saved_color = txGetColor();
    txSetColor (color);

    txSelectFont ("Comic Sans MS", 60);
    txTextOut (C_max_x_coord - 400, C_max_y_coord - 150, "by BARINOVV");

    txSetColor (saved_color);
}

//-----------------------------------------------------------------------------

void Draw_Explosion ()
{
    int mid_x_coord = C_max_x_coord / 2;
    int mid_y_coord = C_max_y_coord / 2;

    int arr_of_colors[10] = {
                             TX_YELLOW,
                             TX_LIGHTRED,
                             TX_ORANGE,
                             TX_ORANGE,
                             TX_RED,
                             TX_RED,
                             TX_RED,
                             TX_RED,
                             TX_RED,
                             TX_RED
                             };


    for (int j = 0; j < 10; j++)
    {
        if (j == 1)
        {
            mid_x_coord = C_max_x_coord / 2 + 100;
            mid_y_coord = C_max_y_coord / 2 + 100;
        }
        else if (j == 2)
        {
            mid_x_coord = C_max_x_coord / 2 - 100;
            mid_y_coord = C_max_y_coord / 2 + 100;
        }
        else if (j == 3)
        {
            mid_x_coord = C_max_x_coord / 2 + 100;
            mid_y_coord = C_max_y_coord / 2 - 100;
        }
        else if (j == 4)
        {
            mid_x_coord = C_max_x_coord / 2 - 100;
            mid_y_coord = C_max_y_coord / 2 - 100;
        }
        else if (j >= 5)
        {
            mid_x_coord = rand() % C_max_x_coord;
            mid_y_coord = rand() % C_max_y_coord;
        }

        for (int i = 3; i < std::min (C_max_x_coord - mid_x_coord, C_max_y_coord - mid_y_coord); i++)
        {
            for (int k = 1; k < i; k++)
            {
                txSetPixel (mid_x_coord + (rand() % (2 * k) - k),
                            mid_y_coord + (rand() % (2 * k) - k),
                            arr_of_colors[rand() % 10]);
            }

            if (j == 0) txSleep();
        }
    }
}
