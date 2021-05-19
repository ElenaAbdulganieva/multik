# include "TXLib.h"
# include "SouthParkLib.h"
# include "EVA.h"


int main ()
    {
    txBegin ();
    txCreateWindow (800, 600);

    int t = 1;
    while (t < 350)
        {
        Draw_Background (MY_LIGHT_BLUE, MY_GREEN);
        Draw_Mountain_Chain();
        Draw_Mountain (300, 120, TX_WHITE);
        Draw_Fir_tree (400, 400, 2 - t % 2, TX_GREEN);
        Draw_Fir_tree (500, 400, 2 - t % 2, TX_GREEN);
        Draw_Fir_tree (420, 420, 2 - t % 2, TX_GREEN);

        Draw_Sten (850 - t, 400, 1, 1, TX_RED, TX_PINK, TX_PINK,
                   t % 2, 0, 0, 0, 1, 0, 0, 1, 0);
        DrawDog (850 - t * 1.3, 500, 2, 2, 0, t % 2, TX_BLACK, TX_WHITE, TX_ORANGE);

        Draw_Broflovsky (200, 400, 1, 1, TX_RED, TX_PINK, TX_PINK,
                         (t / 10) % 2, (t / 10) % 2, 0, 0, 1, 1, 0, 0, 0);
        DrawDog (200 + t / 3, 500, -2, 2, t % 3, 0, TX_WHITE, TX_WHITE, TX_BLACK);

        t ++;
        txSleep (10);
        txClear ();
        }

    t = 1;
    while (t < 350)
        {
        Draw_Background (MY_LIGHT_BLUE, MY_GREEN);
        Draw_Mountain_Chain();
        Draw_Mountain (300, 120, TX_WHITE);
        Draw_Fir_tree (400, 400, 2 - t % 2, TX_GREEN);
        Draw_Fir_tree (500, 400, 2 - t % 2, TX_GREEN);
        Draw_Fir_tree (420, 420, 2 - t % 2, TX_GREEN);

        Draw_Sten (500, 400, 1, 1, TX_RED, TX_PINK, TX_PINK,
                   0, 0, 0, 0, (t / 10) % 2, (t / 10) % 2, 0, 0, 0);
        DrawDog (395, 500, 2, 2, t % 5, 0, TX_BLACK, TX_WHITE, TX_ORANGE);

        Draw_Broflovsky (200, 400, 1, 1, TX_RED, TX_PINK, TX_PINK,
                         0, 0, 0, 0, (t / 10) % 2, (t / 10) % 2, 0, 0, 1);
        DrawDog (316, 500, -2, 2, t % 5, 0, TX_WHITE, TX_WHITE, TX_BLACK);

        t ++;
        txSleep (10);
        txClear ();
        }

    txEnd ();
    return 0;
    }
