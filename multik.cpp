// animated film
// interim work
// kpk 2021
// Abdulganieva Elena Viktorovna
//______________________________

# include "TXlib.h"
# include "EVA.h"
# include "config.h"

void MoveCars          (int x);

void Trees             (int x, int y, int WobbleCrown, int HeightTrunk,
                        int Red, int Green, int Blue);

void Factories         (int UpPipe);

void BirdsFinal        (int x, int MoveWing);

void Flowers           (int Disclosure, int UpSheet, int Swinging);

void Birds             (int x, int y, int UpWing);

void DrawBackGround          ();
void DrawBackGroundRoad      ();
void GirlsAlong              ();
void TreesGrowing            ();
void TextBegin               ();
void TextEnd                 ();
void GirlsLeaves             ();
void BirdsBegin              ();
void BirdsEnd                ();
void CarsGo                  ();
void AppearedFactory         ();
void DrawBackGroundRoadCity  ();

int main ()
    {
    txCreateWindow (WINDOW_WIDTH,WINDOW_HEIGHT);

    TextBegin       ();
    GirlsAlong      ();
    TreesGrowing    ();
    GirlsLeaves     ();
    BirdsBegin      ();
    BirdsEnd        ();
    CarsGo          ();
    AppearedFactory ();
    TextEnd         ();

    return 0;
    }

void TextBegin ()
    {
    txBegin ();
    txPlaySound ("sound/veter.wav");

    int t = 0;
    while (t < 150)
        {
        DrawBackGround ();
        DrawSun (500, 50, 1, 1, 10 - t % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        Flowers (t, t, t);

        txSelectFont   ("Times", 50 + t % 3);
        txSetColor     (TX_ORANGE);
        txSetFillColor (TX_ORANGE);
        txTextOut      (595 - 2 * t,      2 * t, "The environmental ");
        txTextOut      (595 - 2 * t, 50 + 2 * t, "company represents");
        txSelectFont   ("Times", 50 + t % 3);
        txSetColor     (TX_WHITE);
        txSetFillColor (TX_WHITE);
        txTextOut      (600 - 2 * t,      2 * t, "The environmental ");
        txTextOut      (600 - 2 * t, 50 + 2 * t, "company represents");

        t ++;
        txSleep (DELAY_TIME);
        }

    t = 0;
    while (t < 100)
        {
        DrawBackGround ();
        DrawSun (500, 50, 1, 1, 10 - t % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        Flowers (t, t, t);

        txSelectFont   ("Times", 50);
        txSetColor     (TX_ORANGE);
        txSetFillColor (TX_ORANGE);
        txTextOut      (295, 300, "The environmental ");
        txTextOut      (295, 350, "company represents");
        txSelectFont   ("Times", 50);
        txSetColor     (TX_WHITE);
        txSetFillColor (TX_WHITE);
        txTextOut      (300, 300, "The environmental ");
        txTextOut      (300, 350, "company represents");

        t ++;
        txSleep (DELAY_TIME);
        }
    txEnd ();
    }

void GirlsAlong ()
    {
    txBegin ();

    int t = 0;
    while (t < 700)
        {
        DrawBackGround ();
        DrawSun  (500, 50, 1, 1, 10 - t % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        Flowers (t, t, t);

        DrawGirl (  0 + t/4    , 100 + t/4    , 1, 1, t % 10, t %  5, TX_RED,   TX_GREEN, TX_BLACK);
        DrawGirl (700 - t/2    , 600 - t/2    , 1, 1, t % 15, t %  7, TX_BLUE,  TX_RED  , TX_BLUE );
        DrawGirl (800 - t*15/80, 300 - t*15/80, 1, 1, t % 20, t % 10, TX_GREEN, TX_BLUE , TX_GREEN);

        t ++;
        txSetFillColor (TX_BLACK);
        txSleep (DELAY_TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void TreesGrowing ()
    {
    txPlaySound ("sound/listva.wav");
    txBegin ();

    int t = 0;
    while (t < 40)
        {
        DrawBackGround ();
        DrawSun  (500, 50, 1, 1, 10 - t % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        Flowers (t, t, t);

        DrawGirl (175, 275,  1, 1, t % 10, t %  5, TX_RED,   TX_GREEN, TX_BLACK);
        DrawGirl (350, 250,  1, 1, t % 15, t %  7, TX_BLUE,  TX_RED  , TX_BLUE );
        DrawGirl (668, 168,  1, 1, t % 20, t % 10, TX_GREEN, TX_BLUE , TX_GREEN);

        DrawTree (200, 300, 0.025  * t, 0.025  * t,  8, 0, 0, 0,
                  RGB(0, 100 +  2  * t, 0), RGB(0, 100 + 2 * t, 0), RGB(0, 100 + 2 * t, 0));
        DrawTree (300, 300, 0.02   * t, 0.02   * t,  7, 0, 0, 0,
                  RGB(0, 100 + 2   * t, 0), RGB(0, 100 + 2 * t, 0), RGB(0, 100 + 2 * t, 0));
        DrawTree (550, 250, 0.0125 * t, 0.0125 * t,  6, 0, 0, 0,
                  RGB(0, 100 + 2   * t, 0), RGB(0, 100 + 2 * t, 0), RGB(0, 100 + 2 * t, 0));

        t ++;
        txSleep (DELAY_TIME);
        txClear ();
        }
    txSleep (100);
    txEnd ();
    txPlaySound ();
    }

void GirlsLeaves ()
    {
    txPlaySound ("sound/veter.wav");
    txBegin ();

    int t = 0;
    while (t < 50)
        {
        DrawBackGround ();
        DrawSun  (500, 50, 1, 1, 10 - t % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        Trees   (t, t, t, t, 200 + t, 180 - t, 0);
        Flowers (t, t, t);

        DrawGirl (175 + 12 * t, 275,  1, 1, t % 10, t %  5, TX_RED,   TX_GREEN, TX_BLACK);
        DrawGirl (350 +  9 * t, 250,  1, 1, t % 15, t %  7, TX_BLUE,  TX_RED  , TX_BLUE );
        DrawGirl (668 +  2 * t, 168,  1, 1, t % 20, t % 10, TX_GREEN, TX_BLUE , TX_GREEN);

        t ++;
        txSetFillColor (TX_BLACK);
        txSleep (DELAY_TIME);
        }
    txEnd ();
    txPlaySound ();
    }

void BirdsBegin ()
    {
    txPlaySound ("sound/birdsbegin.wav");
    txBegin ();

    int t = 0;
    while (t < 80)
        {
        DrawBackGround ();
        DrawSun  (500, 50, 1, 1, 10 - t % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        Trees   (t, t, t, t, 100 + t, t, t);
        Flowers (t, t, t);
        Birds   (t, t, t);

        t ++;
        txSleep (DELAY_TIME);
        txClear ();
        }

    t = 0;
    while (t < 400)
        {
        DrawBackGround ();
        DrawSun  (500, 50, 1, 1, 10 - t % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        Trees (t, t, t, t, 255, 0, 0);
        Flowers (t, t, t);

        DrawDog  (700 - 4 * t, 470,  1, 1, t %  2, t % 5, TX_BLACK, TX_WHITE, TX_GREY);
        DrawDog  (750 - 2 * t, 480,  1, 1, t % 10, t % 4, TX_WHITE, TX_BLUE , TX_BLUE);
        DrawDog  ( 50 + 2 * t, 380, -1, 1, t %  7, t % 3, TX_WHITE, TX_GREY , TX_RED );

        DrawBird (560, 175 + (t % 10 - 10),  1, 1, t %  5, TX_ORANGE, TX_WHITE, TX_WHITE);
        DrawBird (210, 150 + (t %  5 -  5), -1, 1, t %  3, TX_WHITE , TX_BLUE , TX_WHITE);
        DrawBird (300, 100 + (t %  3 -  3),  1, 1, t % 10, TX_RED   , TX_WHITE, TX_BLUE );

        t ++;
        txSleep (DELAY_TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void BirdsEnd ()
    {
    txPlaySound ("sound/birdsend.wav");
    txBegin ();

    int t = 0;
    while (t < 200)
        {
        DrawBackGroundRoadCity ();
        DrawTrafficlights ( 95, 200, 1, 1, TX_DARKGREY, 255, 0, 0);

        Trees   (t, t, t, t, 255, 0, 0);
        Flowers (t, t, t);

        DrawBird (560 + t, 175 - t, -1, 1, t %  5, TX_ORANGE, TX_WHITE, TX_WHITE);
        DrawBird (210 - t, 150 - t,  1, 1, t %  3, TX_WHITE , TX_BLUE , TX_WHITE);
        DrawBird (300 + t, 100 - t, -1, 1, t % 10, TX_RED   , TX_WHITE, TX_BLUE );

        t ++;
        txSleep (DELAY_TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void CarsGo ()
    {
    txPlaySound ("sound/car.wav");
    txBegin ();

    int t = 0;
    while (t < 300)
        {
        DrawBackGroundRoadCity ();
        DrawTrafficlights ( 95, 200, 1, 1, TX_DARKGREY, 0, 255, 0);

        Trees (t, t, t, t, 50, 50, 50);
        MoveCars (t);

        t ++;
        txSleep (DELAY_TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void AppearedFactory ()
    {
    txPlaySound ("sound/zavod.wav");
    txBegin ();

    int t = 0;
    while (t < 200)
        {
        DrawBackGroundRoadCity ();

        Factories (t);
        DrawTrafficlights (95, 200, 1, 1, TX_DARKGREY, 255, 255, 0);
        MoveCars (t);

        t ++;
        txSleep (DELAY_TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void TextEnd ()
    {
    txPlaySound ("sound/gta.wav");
    txBegin ();

    int t = 0;
    while (t < 520)
        {
        txClear ();
        DrawBackGroundRoadCity ();

        Factories (t);

        txSelectFont   ("Times", 50);
        txSetColor     (TX_WHITE);
        txSetFillColor (TX_WHITE);
        txTextOut      (600 - t, 260, "The job is done: Abdulganieva EV");
        txSetColor     (TX_ORANGE);
        txSetFillColor (TX_ORANGE);
        txTextOut      (598 - t, 260, "The job is done: Abdulganieva EV");

        txSelectFont   ("Times", 20);
        txTextOut      (650 - t, 315 + t % 5, "welcome to Togliatti");

        BirdsFinal (t, t);

        t ++;
        txSleep (DELAY_TIME);
        }
    txEnd ();
    txPlaySound ();
    }

//----------------------------------------------------------------------------------------

void Factories (int UpPipe)
    {
    DrawFactory (100, 200, 1, 1, UpPipe %  3, TX_GREY );
    DrawFactory (250, 200, 1, 1, UpPipe %  4, TX_BLACK);
    DrawFactory (250, 200, 1, 1, UpPipe %  5, TX_WHITE);
    DrawFactory (400, 200, 1, 1, UpPipe %  7, TX_BLACK);
    DrawFactory (500, 200, 1, 1, UpPipe %  9, TX_BLACK);
    DrawFactory (600, 200, 1, 1, UpPipe % 10, TX_RED  );
    }

void MoveCars (int x)
    {
    DrawCar (      6 * x, 350, 1, 1, 25, TX_GREY, TX_LIGHTBLUE, -10);
    DrawCar (800 - 9 * x, 375, 1, 1, 20, TX_RED , TX_ORANGE,     20);
    DrawCar (800 - 6 * x, 420, 1, 1, 30, TX_BLUE, TX_PINK,      -20);
    }

void Trees (int x, int y, int WobbleCrown, int HeightCrown, int Red, int Green, int Blue)
    {
    DrawTree (200, 300, 1  , 1  , 8, 5 - WobbleCrown % 10, 0, HeightCrown % 5,
              RGB(Red, Green, Blue), RGB(Red, Green, 0), RGB(Red, Green, Blue));
    DrawTree (300, 300, 0.8, 0.8, 7, 5 - WobbleCrown % 10, 0, HeightCrown % 5,
              RGB(Red, Green, Blue), RGB(Red, Green, Blue), RGB(Red, Green, Blue));
    DrawTree (550, 250, 0.5, 0.5, 6, 5 - WobbleCrown % 10, 0, HeightCrown % 5,
              RGB(Red, Green, Blue), RGB(Red, Green, Blue), RGB(Red, Green, Blue));
    }

void Flowers (int Disclosure, int UpSheet, int Swinging)
    {
    DrawFlower (100, 300,  3, 3, Disclosure % 5, UpSheet % 3, -5 + Swinging % 10, TX_RED      );
    DrawFlower (300, 400,  8, 8, Disclosure % 7, UpSheet % 4, -3 + Swinging %  5, TX_BLUE     );
    DrawFlower (200, 500, -5, 5, Disclosure % 6, UpSheet % 6, -6 + Swinging %  4, TX_YELLOW   );
    DrawFlower (250, 250,  6, 6, Disclosure % 7, UpSheet % 4, -3 + Swinging %  5, TX_WHITE    );
    DrawFlower (400, 300, -4, 4, Disclosure % 7, UpSheet % 4, -3 + Swinging %  5, TX_ORANGE   );
    DrawFlower (500, 300,  5, 5, Disclosure % 7, UpSheet % 4, -3 + Swinging %  5, TX_LIGHTBLUE);
    }

void Birds (int x, int y, int UpWing)
    {
    DrawBird (800 - 3 * x, 175 + (y % 10 - 10),  1, 1, UpWing %  5, TX_ORANGE, TX_WHITE, TX_WHITE);
    DrawBird ( 50 + 2 * x, 150 + (y %  5 -  5), -1, 1, UpWing %  3, TX_WHITE , TX_BLUE , TX_WHITE);
    DrawBird (700 - 5 * x, 100 + (y %  3 -  3),  1, 1, UpWing % 10, TX_RED   , TX_WHITE, TX_BLUE );
    }

void BirdsFinal (int x, int MoveWing)
    {
    DrawBird (550 - x, 350, 1, 1, MoveWing % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
    DrawBird (570 - x, 400, 1, 1, MoveWing % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
    DrawBird (590 - x, 450, 1, 1, MoveWing % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
    DrawBird (550 - x, 250, 1, 1, MoveWing % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
    DrawBird (570 - x, 200, 1, 1, MoveWing % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
    DrawBird (590 - x, 150, 1, 1, MoveWing % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
    }

void DrawBackGround ()
    {
    txSetColor     (RGB (0, 0,   200));
    txSetFillColor (RGB (0, 0,   200));
    txRectangle    (0,   0, 800, 200 );
    txSetColor     (RGB (0, 100,   0));
    txSetFillColor (RGB (0, 100,   0));
    txRectangle    (0, 200, 800, 600 );
    }

void DrawBackGroundRoad ()
    {
    txSetColor     (RGB (0, 0,   200));
    txSetFillColor (RGB (0, 0,   200));
    txRectangle    (0,   0, 800, 200 );
    txSetColor     (RGB (0, 100,   0));
    txSetFillColor (RGB (0, 100,   0));
    txRectangle    (0, 200, 800, 600 );
    DrawMotorWay   (0, 400,   1,   1, 10, TX_DARKGREY, TX_WHITE);
    }

void DrawBackGroundRoadCity ()
    {
    txSetColor     (RGB (0, 0,   200));
    txSetFillColor (RGB (0, 0,   200));
    txRectangle    (0,   0, 800, 200 );
    txSetColor     (RGB (0, 100,   0));
    txSetFillColor (RGB (0, 100,   0));
    txRectangle    (0, 200, 800, 600 );
    DrawMotorWay   (0, 400,   1,   1, 10, TX_DARKGREY, TX_WHITE);
    City ( 0, 0, 1  , 1  , TX_GREY);
    City (10, 0, 0.8, 0.8, TX_DARKGREY);
    }
