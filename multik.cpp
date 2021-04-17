// animated film
// interim work
// kpk 2021
// Abdulganieva Elena Viktorovna
//______________________________

# include "TXlib.h"

void DrawMotorWay      (int x, int y, double sizeX, double sizeY, int width,
                        COLORREF colorWay, COLORREF colorBand);

void DrawTrafficlights (int x, int y, double sizeX, double sizeY,
                        int colorHeadlight, COLORREF colorMain);

void DrawTree          (int x, int y, double sizeX, double sizeY, int DFruit,
                        int WobbleCrown, int HeightTrunk, int HeightCrown,
                        COLORREF colorFruit1, COLORREF colorFruit2, COLORREF colorFruit3);

void DrawSun           (int x, int y, double sizeX, double sizeY, int Beamlength,
                        COLORREF colorSun, COLORREF colorCloud, COLORREF colorEye);

void DrawBird          (int x, int y, double sizeX, double sizeY, int PositionWing,
                        COLORREF colorWing, COLORREF colorBody, COLORREF colorHead);

void DrawDog           (int x, int y, double sizeX, double sizeY, int TailShift, int EarShift,
                        COLORREF colorBody, COLORREF colorHead, COLORREF colorTail);

void DrawCar           (int x, int y, double sizeX, double sizeY, int RWheel,
                        COLORREF colorCar, COLORREF colorWheel, int DistanceWheel);

void DrawGirl          (int x, int y, double sizeX, double sizeY, int HandUp,int LegRight,
                        COLORREF colorDress, COLORREF colorLipstick, COLORREF colorEye);

void DrawFactory       (int x, int y, double sizeX, double sizeY, int PipeHeight,
                        COLORREF colorFactory);

void DrawBlackGround     ();
void DrawBlackGroundRoad ();
void GirlsAlong          ();
void TreesGrowing        ();
void TextBegin           ();
void TextEnd             ();
void GirlsLeaves         ();
void BirdsBegin          ();
void BirdsEnd            ();
void CarsGo              ();
void AppearedFactory     ();


int main ()
    {
    txBegin ();
    txCreateWindow (800,600);

    TextBegin       ();
    GirlsAlong      ();
    TreesGrowing    ();
    GirlsLeaves     ();
    BirdsBegin      ();
    BirdsEnd        ();
    CarsGo          ();
    AppearedFactory ();
    TextEnd         ();

    txEnd ();
    return 0;
    }

void AppearedFactory ()
    {
    int x = 0;
    while (x < 200)
        {
        DrawBlackGroundRoad ();
        DrawSun (500,  50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        DrawFactory (100, 200, 1, 1, x %  3, TX_GREY );
        DrawFactory (250, 200, 1, 1, x %  4, TX_BLACK);
        DrawFactory (250, 200, 1, 1, x %  5, TX_WHITE);
        DrawFactory (400, 200, 1, 1, x %  7, TX_BLACK);
        DrawFactory (500, 200, 1, 1, x %  9, TX_BLACK);
        DrawFactory (600, 200, 1, 1, x % 10, TX_RED  );

        DrawTrafficlights (95, 100, 1, 1, x % 4, TX_GREY);

        x ++;
        txSleep (10);
        txClear ();
        }
    }

void CarsGo ()
    {
    int x = 0;
    while (x < 600)
        {
        DrawBlackGroundRoad ();
        DrawSun           (500,  50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);
        DrawTrafficlights ( 95, 100, 1, 1,      x % 4, TX_GREY);

        DrawTree (200, 300, 1  , 1  , 8, 5 - x % 10, 0, x % 5,
                  RGB(0, 0, 0), RGB(0, 0, 0), RGB(0, 0, 0));
        DrawTree (300, 300, 0.8, 0.8, 7, 5 - x % 10, 0, x % 5,
                  RGB(0, 0, 0), RGB(0, 0, 0), RGB(0, 0, 0));
        DrawTree (550, 250, 0.5, 0.5, 6, 5 - x % 10, 0, x % 5,
                  RGB(0, 0, 0), RGB(0, 0, 0), RGB(0, 0, 0));

        DrawCar (      2 * x, 350, 1, 1, 25, TX_GREY, TX_LIGHTBLUE, -10);
        DrawCar (800 - 3 * x, 375, 1, 1, 20, TX_RED,  TX_ORANGE,     20);
        DrawCar (800 - 2 * x, 420, 1, 1, 30, TX_BLUE, TX_PINK,      -20);

        x ++;
        txSleep (10);
        txClear ();
        }
    }

void BirdsEnd ()
    {
    int x = 0;
    while (x < 200)
        {
        DrawBlackGroundRoad ();
        DrawSun           (500,  50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);
        DrawTrafficlights ( 95, 100, 1, 1,      x % 4, TX_GREY);

        DrawTree (200, 300, 1  , 1  , 8, 5 - x % 10, 0, x % 5,
                  RGB(255 - x, 0, 0), RGB(255 - x, 0, 0), RGB(255 - x, 0, 0));
        DrawTree (300, 300, 0.8, 0.8, 7, 5 - x % 10, 0, x % 5,
                  RGB(255 - x, 0, 0), RGB(255 - x, 0, 0), RGB(255 - x, 0, 0));
        DrawTree (550, 250, 0.5, 0.5, 6, 5 - x % 10, 0, x % 5,
                  RGB(255 - x, 0, 0), RGB(255 - x, 0, 0), RGB(255 - x, 0, 0));

        DrawBird (560 + x, 175 - x, -1, 1, x %  5, TX_ORANGE, TX_WHITE, TX_WHITE);
        DrawBird (210 - x, 150 - x,  1, 1, x %  3, TX_WHITE , TX_BLUE , TX_WHITE);
        DrawBird (300 + x, 100 - x, -1, 1, x % 10, TX_RED   , TX_WHITE, TX_BLUE );

        x ++;
        txSleep (10);
        txClear ();
        }
    }

void BirdsBegin ()
    {
    int x = 0;
    while (x < 80)
        {
        DrawBlackGround ();
        DrawSun  (500, 50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        DrawTree (200, 300, 1  , 1  , 8, 5 - x % 10, 0, x % 5,
                  RGB(255, 0, 0), RGB(255, 0, 0), RGB(255, 0, 0));
        DrawTree (300, 300, 0.8, 0.8, 7, 5 - x % 10, 0, x % 5,
                  RGB(255, 0, 0), RGB(255, 0, 0), RGB(255, 0, 0));
        DrawTree (550, 250, 0.5, 0.5, 6, 5 - x % 10, 0, x % 5,
                  RGB(255, 0, 0), RGB(255, 0, 0), RGB(255, 0, 0));

        DrawBird (800 - 3 * x, 175 + (x % 10 - 10),  1, 1, x %  5, TX_ORANGE, TX_WHITE, TX_WHITE);
        DrawBird ( 50 + 2 * x, 150 + (x %  5 -  5), -1, 1, x %  3, TX_WHITE , TX_BLUE , TX_WHITE);
        DrawBird (700 - 5 * x, 100 + (x %  3 -  3),  1, 1, x % 10, TX_RED   , TX_WHITE, TX_BLUE );

        x ++;
        txSleep (10);
        txClear ();
        }

    x = 0;
    while (x < 400)
        {
        DrawBlackGround ();
        DrawSun  (500, 50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        DrawTree (200, 300, 1  , 1  , 8, 5 - x % 10, 0, x % 5,
                  RGB(255, 0, 0), RGB(255, 0, 0), RGB(255, 0, 0));
        DrawTree (300, 300, 0.8, 0.8, 7, 5 - x % 10, 0, x % 5,
                  RGB(255, 0, 0), RGB(255, 0, 0), RGB(255, 0, 0));
        DrawTree (550, 250, 0.5, 0.5, 6, 5 - x % 10, 0, x % 5,
                  RGB(255, 0, 0), RGB(255, 0, 0), RGB(255, 0, 0));

        DrawDog  (700 - 4 * x, 470,  1, 1, x %  2, x % 5, TX_BLACK, TX_WHITE, TX_GREY);
        DrawDog  (750 - 2 * x, 480,  1, 1, x % 10, x % 4, TX_WHITE, TX_BLUE , TX_BLUE);
        DrawDog  ( 50 + 2 * x, 380, -1, 1, x %  7, x % 3, TX_WHITE, TX_GREY , TX_RED );

        DrawBird (560, 175 + (x % 10 - 10),  1, 1, x %  5, TX_ORANGE, TX_WHITE, TX_WHITE);
        DrawBird (210, 150 + (x %  5 -  5), -1, 1, x %  3, TX_WHITE , TX_BLUE , TX_WHITE);
        DrawBird (300, 100 + (x %  3 -  3),  1, 1, x % 10, TX_RED   , TX_WHITE, TX_BLUE );

        x ++;
        txSleep (10);
        txClear ();
        }
    }

void GirlsLeaves ()
    {
    int x = 0;
    while (x < 50)
        {
        DrawBlackGround ();
        DrawSun  (500, 50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        DrawTree (200, 300,  1  , 1  ,  8, 0, 0, 0,
                  RGB(200 + x, 180 - x, 0), RGB(200 + x, 180 - x, 0), RGB(200 + x, 180 - x, 0));
        DrawTree (300, 300,  0.8, 0.8,  7, 0, 0, 0,
                  RGB(200 + x, 180 - x, 0), RGB(200 + x, 180 - x, 0), RGB(200 + x, 180 - x, 0));
        DrawTree (550, 250,  0.5, 0.5,  6, 0, 0, 0,
                  RGB(200 + x, 180 - x, 0), RGB(200 + x, 180 - x, 0), RGB(200 + x, 180 - x, 0));

        DrawGirl (175 + 12 * x, 275,  1, 1, x % 10, x %  5, TX_RED,   TX_GREEN, TX_BLACK);
        DrawGirl (350 +  9 * x, 250,  1, 1, x % 15, x %  7, TX_BLUE,  TX_RED  , TX_BLUE );
        DrawGirl (668 +  2 * x, 168,  1, 1, x % 20, x % 10, TX_GREEN, TX_BLUE , TX_GREEN);

        x ++;
        txSetFillColor (TX_BLACK);
        txSleep (2);
        }
    }

void TextBegin ()
    {
    int x = 0;
    while (x < 200)
        {
        DrawBlackGround ();
        DrawSun (500, 50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        txSelectFont   ("Times", 50 +  x % 3);
        txSetColor     (TX_WHITE);
        txSetFillColor (TX_WHITE);
        txTextOut      (600 - 2 * x,      2 * x, "The environmental ");
        txTextOut      (600 - 2 * x, 50 + 2 * x, "company represents");

        x ++;
        txSleep (10);
        }
    }

void TextEnd ()
    {
    int x = 0;
    while (x < 600)
        {
        txClear ();
        DrawBlackGroundRoad ();
        DrawSun        (500, 50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        txSelectFont   ("Times", 50);
        txSetColor     (TX_WHITE);
        txSetFillColor (TX_WHITE);
        txTextOut      (600 - x, 260, "The job is done: Abdulganieva EV");

        txSelectFont   ("Times", 20);
        txTextOut      (650 - x, 315 + x % 5, "welcome to Togliatti");

        DrawBird       (550 - x, 350, 1, 1, x % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
        DrawBird       (570 - x, 400, 1, 1, x % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
        DrawBird       (590 - x, 450, 1, 1, x % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
        DrawBird       (550 - x, 250, 1, 1, x % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
        DrawBird       (570 - x, 200, 1, 1, x % 5, TX_WHITE, TX_ORANGE, TX_WHITE);
        DrawBird       (590 - x, 150, 1, 1, x % 5, TX_WHITE, TX_ORANGE, TX_WHITE);

        x ++;
        txSleep (5);
        }
    }

void TreesGrowing ()
    {
    int x = 0;
    while (x < 40)
        {
        DrawBlackGround ();
        DrawSun  (500, 50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        DrawGirl (175, 275,  1, 1, x % 10, x %  5, TX_RED,   TX_GREEN, TX_BLACK);
        DrawGirl (350, 250,  1, 1, x % 15, x %  7, TX_BLUE,  TX_RED  , TX_BLUE );
        DrawGirl (668, 168,  1, 1, x % 20, x % 10, TX_GREEN, TX_BLUE , TX_GREEN);

        DrawTree (200, 300, 0.025  * x, 0.025  * x,  8, 0, 0, 0,
                  RGB(0, 100 +  2  * x, 0), RGB(0, 100 + 2 * x, 0), RGB(0, 100 + 2 * x, 0));
        DrawTree (300, 300, 0.02   * x, 0.02   * x,  7, 0, 0, 0,
                  RGB(0, 100 + 2   * x, 0), RGB(0, 100 + 2 * x, 0), RGB(0, 100 + 2 * x, 0));
        DrawTree (550, 250, 0.0125 * x, 0.0125 * x,  6, 0, 0, 0,
                  RGB(0, 100 + 2   * x, 0), RGB(0, 100 + 2 * x, 0), RGB(0, 100 + 2 * x, 0));

        x ++;
        txSleep (100);
        txClear ();
        }
    }

void GirlsAlong ()
    {
    int x = 0;
    while (x < 700)
        {
        DrawBlackGround ();
        DrawSun  (500, 50, 1, 1, 10 - x % 5, TX_YELLOW, TX_BLUE, TX_WHITE);

        DrawGirl (  0 + x/4    , 100 + x/4    , 1, 1, x % 10, x %  5, TX_RED,   TX_GREEN, TX_BLACK);
        DrawGirl (700 - x/2    , 600 - x/2    , 1, 1, x % 15, x %  7, TX_BLUE,  TX_RED  , TX_BLUE );
        DrawGirl (800 - x*15/80, 300 - x*15/80, 1, 1, x % 20, x % 10, TX_GREEN, TX_BLUE , TX_GREEN);

        x ++;
        txSetFillColor (TX_BLACK);
        txSleep (10);
        txClear ();
        }
    }

void DrawMotorWay (int x, int y, double sizeX, double sizeY, int width,
                   COLORREF colorWay, COLORREF colorBand)
    {
    txSetFillColor (colorWay);
    txSetColor     (colorWay);
    txRectangle    (x, y, x + 800, y + 100);

    txSetFillColor (colorBand);
    txRectangle (x + 175 * sizeX, y + 12 * sizeY, x + 300 * sizeX, y + 12 * sizeY + width);
    txRectangle (x + 175 * sizeX, y + 38 * sizeY, x + 300 * sizeX, y + 38 * sizeY + width);
    txRectangle (x + 175 * sizeX, y + 62 * sizeY, x + 300 * sizeX, y + 62 * sizeY + width);
    txRectangle (x + 175 * sizeX, y + 87 * sizeY, x + 300 * sizeX, y + 87 * sizeY + width);
    }

void DrawTrafficlights (int x, int y, double sizeX, double sizeY,
                        int colorHeadlight, COLORREF colorMain)
    {
    txSetColor     (colorMain);
    txSetFillColor (colorMain);
    txRectangle ( x+ 22 * sizeX, y + 150 * sizeY, x + 28 * sizeX, y + 300 * sizeY);
    txRectangle (x,              y,               x + 50 * sizeX, y + 150 * sizeY);

    txSetColor     (TX_RED);
    txSetFillColor (TX_RED);
    txCircle (x + 25 * sizeX, y + 25 * sizeY, 12 * sizeX);

    txSetColor     (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (x + 25 * sizeX, y + 125 * sizeY, 12 * sizeX);

    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (x + 25 * sizeX, y +  75 * sizeY, 12 * sizeX);

    if (colorHeadlight == 1)
        {
        txSetColor     (TX_RED);
        txSetFillColor (TX_RED);
        txCircle (x + 25 * sizeX, y + 25 * sizeY, 20 * sizeX);
        }

    if (colorHeadlight == 2)
        {
        txSetColor     (TX_GREEN);
        txSetFillColor (TX_GREEN);
        txCircle (x + 25 * sizeX, y + 125 * sizeY, 20 * sizeX);
        }

    if (colorHeadlight == 3)
        {
        txSetColor     (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        txCircle (x + 25 * sizeX, y +  75 * sizeY, 20 * sizeX);
        }
    }

void DrawCar (int x, int y, double sizeX, double sizeY,int RWheel,
              COLORREF colorCar, COLORREF colorWheel, int DistanceWheel)
    {
    txSetColor     (colorCar, 5);
    txSetFillColor (colorCar   );
    txRectangle (x              , y             , x + 275 * sizeX, y + 50 * sizeY);
    txRectangle (x + 149 * sizeX, y - 50 * sizeY, x + 152 * sizeX, y             );
    txLine      (x +  50 * sizeX, y             , x + 100 * sizeX, y - 50 * sizeY);
    txLine      (x + 100 * sizeX, y - 50 * sizeY, x + 200 * sizeX, y - 50 * sizeY);
    txLine      (x + 200 * sizeX, y - 50 * sizeY, x + 250 * sizeX, y             );

    txSetColor     (colorWheel);
    txSetFillColor (colorWheel);
    txCircle (x +  50 * sizeX + DistanceWheel, y + 50 * sizeY, RWheel * sizeY);
    txCircle (x + 200 * sizeX - DistanceWheel, y + 50 * sizeY, RWheel * sizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x +  50 * sizeX + DistanceWheel, y + 50 * sizeY, 10 * sizeY);
    txCircle (x + 200 * sizeX - DistanceWheel, y + 50 * sizeY, 10 * sizeY);
    }

void DrawGirl (int x, int y, double sizeX, double sizeY, int HandUp, int LegRight,
               COLORREF colorDress, COLORREF colorLipstick, COLORREF colorEye)
    {
    txSetColor     (TX_PINK);
    txSetFillColor (TX_PINK);
    txCircle (x             , y - 10 * sizeY,     12 * sizeX);
    txLine   (x -  3 * sizeX, y + 88 * sizeY, x -  3 * sizeX,            y + 112 * sizeY         );
    txLine   (x +  3 * sizeX, y + 88 * sizeY, x +  3 * sizeX + LegRight, y + 112 * sizeY         );
    txLine   (x - 13 * sizeX, y + 38 * sizeY, x - 25 * sizeX,            y +  50 * sizeY - HandUp);
    txLine   (x + 10 * sizeX, y + 38 * sizeY, x + 25 * sizeX,            y +  50 * sizeY - HandUp);

    txSetColor     (colorLipstick);
    txSetFillColor (colorLipstick);
    txEllipse (x - 5 * sizeX, y - 5 * sizeY, x + 5 * sizeX, y - 2 * sizeY);

    txSetColor     (colorEye);
    txSetFillColor (colorEye);
    txCircle (x - 5 * sizeX, y - 10 * sizeY, 2);
    txCircle (x + 5 * sizeX, y - 10 * sizeY, 2);

    txSetColor     (colorDress);
    txSetFillColor (colorDress);
    POINT dress [] = {{x, y}, {x - 25 * sizeX, y + 88 * sizeY},
                      {x + 25 * sizeX, y + 88 * sizeY}, {x, y}};
    txPolygon (dress, 3);
    }

void DrawTree (int x, int y, double sizeX, double sizeY, int DFruit,
               int WobbleCrown, int HeightTrunk, int HeightCrown,
               COLORREF colorFruit1, COLORREF colorFruit2, COLORREF colorFruit3)
    {
    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    txRectangle (x, y - 150 * sizeY, x + 25 * sizeX, y + HeightTrunk);

    txSetColor     (TX_GREEN);
    txSetFillColor (TX_GREEN);
    POINT tree [] = {{x - 25 * sizeX              , y - 150 * sizeY              },
                     {x - 50 * sizeX + WobbleCrown, y - 200 * sizeY              },
                     {x + 12 * sizeX + WobbleCrown, y - 350 * sizeY + HeightCrown},
                     {x + 75 * sizeX + WobbleCrown, y - 200 * sizeY              },
                     {x + 50 * sizeX + WobbleCrown, y - 150 * sizeY              },
                     {x - 25 * sizeX              , y - 150 * sizeY              }};
    txPolygon (tree, 5);

    txSetColor     (colorFruit1);
    txSetFillColor (colorFruit1);
    txCircle (x + 25 * sizeX + WobbleCrown, y - 275 * sizeY, DFruit * sizeY);
    txCircle (x              + WobbleCrown, y - 225 * sizeY, DFruit * sizeY);
    txCircle (x + 50 * sizeX + WobbleCrown, y - 200 * sizeY, DFruit * sizeY);

    txSetColor     (colorFruit2);
    txSetFillColor (colorFruit2);
    txCircle (x + 25 * sizeX + WobbleCrown, y - 200 * sizeY, DFruit * sizeY);
    txCircle (x              + WobbleCrown, y - 250 * sizeY, DFruit * sizeY);

    txSetColor     (colorFruit3);
    txSetFillColor (colorFruit3);
    txCircle (x - 25 * sizeX + WobbleCrown, y - 225 * sizeY, DFruit * sizeY);
    txCircle (x              + WobbleCrown, y - 175 * sizeY, DFruit * sizeY);
    }

void DrawFactory (int x, int y, double sizeX, double sizeY, int PipeHeight,
                  COLORREF colorFactory)
    {
    txSetColor     (colorFactory);
    txSetFillColor (colorFactory);
    POINT factory [] = {{x       * sizeX, y      * sizeY},
                        {x       * sizeX, y - 10 * sizeY},
                        {x +  10 * sizeX, y - 10 * sizeY},
                        {x +  10 * sizeX, y - 20 * sizeY},
                        {x +  30 * sizeX, y - 20 * sizeY},
                        {x +  30 * sizeX, y - 60 * sizeY - PipeHeight},
                        {x +  40 * sizeX, y - 60 * sizeY - PipeHeight},
                        {x +  40 * sizeX, y - 20 * sizeY},
                        {x +  50 * sizeX, y - 20 * sizeY},
                        {x +  50 * sizeX, y - 30 * sizeY},
                        {x +  60 * sizeX, y - 30 * sizeY},
                        {x +  60 * sizeX, y - 40 * sizeY},
                        {x +  80 * sizeX, y - 40 * sizeY},
                        {x +  80 * sizeX, y - 80 * sizeY - PipeHeight},
                        {x +  90 * sizeX, y - 80 * sizeY - PipeHeight},
                        {x +  90 * sizeX, y - 80 * sizeY},
                        {x +  90 * sizeX, y - 40 * sizeY},
                        {x + 110 * sizeX, y - 40 * sizeY},
                        {x + 110 * sizeX, y - 30 * sizeY},
                        {x + 120 * sizeX, y - 30 * sizeY},
                        {x + 120 * sizeX, y - 20 * sizeY},
                        {x + 130 * sizeX, y - 20 * sizeY},
                        {x + 130 * sizeX, y - 10 * sizeY},
                        {x + 140 * sizeX, y - 10 * sizeY},
                        {x + 140 * sizeX, y      * sizeY},
                        {x       * sizeX, y      * sizeY}};
    txPolygon (factory, 26);
    }

void DrawSun (int x, int y, double sizeX, double sizeY, int Beamlength,
              COLORREF colorSun, COLORREF colorCloud, COLORREF colorEye)
    {
    txSetColor     (colorSun);
    txSetFillColor (colorSun);
    txCircle (x,  y, 25 * sizeX);
    txLine   (x - 75 * sizeX - Beamlength, y -              Beamlength, x, y);
    txLine   (x - 50 * sizeX - Beamlength, y + 50 * sizeY - Beamlength, x, y);
    txLine   (x + 25 * sizeX - Beamlength, y + 25 * sizeY - Beamlength, x, y);
    txLine   (x - Beamlength,              y + 75 * sizeY - Beamlength, x, y);

    txSetColor     (colorEye);
    txSetFillColor (colorEye);
    txCircle (x - 10 * sizeX, y -  5 * sizeY,     5 * sizeX);
    txCircle (x + 10 * sizeX, y -  5 * sizeY,     5 * sizeX);
    txLine   (x             , y + 10 * sizeY, x - 5 * sizeX, y + 5 * sizeY);
    txLine   (x             , y + 10 * sizeY, x + 5 * sizeX, y + 5 * sizeY);

    txSetColor     (colorCloud);
    txSetFillColor (colorCloud);
    txEllipse (x - 200 * sizeX, y             , x - 100 * sizeX, y + 50 * sizeY);
    txEllipse (x - 150 * sizeX, y + 25 * sizeY, x -  50 * sizeX, y + 75 * sizeY);

    txSetColor     (colorCloud);
    txSetFillColor (colorCloud);
    txEllipse (x + 25 * sizeX, y + 25 * sizeY, x + 100 * sizeX, y + 50 * sizeY);
    txEllipse (x - 25 * sizeX, y + 50 * sizeY, x +  25 * sizeX, y + 75 * sizeY);

    txSetColor     (RGB(0, 100, 255));
    txSetFillColor (RGB(0, 100, 255));
    txEllipse (x - 150 * sizeX, y + 25 * sizeY, x - 50 * sizeX,  y + 75 * sizeY);
    }

void DrawBird (int x, int y, double sizeX, double sizeY, int PositionWing,
               COLORREF colorWing, COLORREF colorBody, COLORREF colorHead)
    {
    txSetColor     (colorWing);
    txSetFillColor (colorWing);
    POINT wind [] = {{x + 10 * sizeX +   PositionWing, y - 15 * sizeY -     PositionWing},
                     {x + 10 * sizeX,                  y -  5 * sizeY                   },
                     {x + 20 * sizeX,                  y +  5 * sizeY                   },
                     {x + 20 * sizeX + 2*PositionWing, y + 15 * sizeY - 2 * PositionWing},
                     {x + 15 * sizeX,                  y + 10 * sizeY                   },
                     {x + 15 * sizeX,                  y +  5 * sizeY                   },
                     {x +  5 * sizeX,                  y -  5 * sizeY                   },
                     {x +  5 * sizeX,                  y - 10 * sizeY                   },
                     {x + 10 * sizeX,                  y - 15 * sizeY                   }};
    txPolygon (wind, 9);

    POINT tail [] = {{x + 25 * sizeX, y -  5 * sizeY}, {x + 35 * sizeX, y - 15 * sizeY},
                     {x + 40 * sizeX, y - 10 * sizeY}, {x + 25 * sizeX, y -  5 * sizeY}};
    txPolygon (tail, 4);

    txSetColor     (colorHead);
    txSetFillColor (colorHead);
    txCircle (x - 3 * sizeX, y, 3 * sizeY);

    txSetColor     (colorBody);
    txSetFillColor (colorBody);
    POINT body [] = {{x, y},
                     {x + 25 * sizeX, y - 5 * sizeY},
                     {x + 10 * sizeX, y + 5 * sizeY},
                     {x, y}};
    txPolygon (body, 4);
    }

void DrawDog (int x, int y, double sizeX, double sizeY, int TailShift, int EarShift,
              COLORREF colorBody, COLORREF colorHead, COLORREF colorTail)
    {
    txSetColor     (colorBody);
    txSetFillColor (colorBody);
    POINT body [] = {{x             , y -  5 * sizeY }, {x             , y             }, {x -  5 * sizeX, y + 15 * sizeY},
                     {x             , y + 15 * sizeY }, {x +  5 * sizeX, y +  5 * sizeY}, {x + 20 * sizeX, y +  5 * sizeY},
                     {x + 25 * sizeX, y +  5 * sizeY }, {x + 25 * sizeX, y + 15 * sizeY}, {x + 30 * sizeX, y + 15 * sizeY},
                     {x + 30 * sizeX, y +  5 * sizeY }, {x + 25 * sizeX, y             }, {x + 25 * sizeX, y - 10 * sizeY},
                     {x +  5 * sizeX, y - 10 * sizeY }, {x             , y -  5 * sizeY}};
    txPolygon (body, 14);

    txSetColor     (colorHead);
    txSetFillColor (colorHead);
    txCircle (x - 5 * sizeX, y - 15 * sizeY, 5 * sizeX);

    POINT neck [] = {{x +  5 * sizeX, y - 10 * sizeY},
                     {x             , y -  5 * sizeY},
                     {x -  5 * sizeX, y - 10 * sizeY},
                     {x - 15 * sizeX, y - 10 * sizeY},
                     {x - 15 * sizeX, y - 13 * sizeY},
                     {x - 10 * sizeX, y - 15 * sizeY},
                     {x +   EarShift, y - 25 * sizeY},
                     {x             , y - 15 * sizeY},
                     {x +  5 * sizeX, y - 10 * sizeY}};
    txPolygon (neck, 9);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x - 8 * sizeX, y - 15 * sizeY, 2 * sizeX);

    txSetColor     (colorTail);
    txSetFillColor (colorTail);
    POINT tail [] = {{x + 25 * sizeX            , y - 10 * sizeY},
                     {x + 30 * sizeX            , y - 15 * sizeY},
                     {x + 35 * sizeX - TailShift, y - 25 * sizeY},
                     {x + 35 * sizeX            , y - 15 * sizeY},
                     {x + 25 * sizeX            , y -  5 * sizeY},
                     {x + 25 * sizeX            , y - 10 * sizeY}};
    txPolygon (tail, 6);

    txRectangle (x + 5 * sizeX, y + 5 * sizeY, x + 10 * sizeX, y + 15 * sizeY);

    POINT lapa [] = {{x + 15 * sizeX, y +  5 * sizeY}, {x + 15 * sizeX, y + 10 * sizeY},
                     {x + 10 * sizeX, y + 15 * sizeY}, {x + 15 * sizeX, y + 15 * sizeY},
                     {x + 20 * sizeX, y + 10 * sizeY}, {x + 20 * sizeX, y +  5 * sizeY},
                     {x + 15 * sizeX, y +  5 * sizeY}};
    txPolygon (lapa, 7);
    }

void DrawBlackGround ()
    {
    txSetColor     (RGB (0, 0,   200));
    txSetFillColor (RGB (0, 0,   200));
    txRectangle    (0,   0, 800, 200 );
    txSetColor     (RGB (0, 100,   0));
    txSetFillColor (RGB (0, 100,   0));
    txRectangle    (0, 200, 800, 600 );
    }

void DrawBlackGroundRoad ()
    {
    txSetColor     (RGB (0, 0,   200));
    txSetFillColor (RGB (0, 0,   200));
    txRectangle    (0,   0, 800, 200 );
    txSetColor     (RGB (0, 100,   0));
    txSetFillColor (RGB (0, 100,   0));
    txRectangle    (0, 200, 800, 600 );
    DrawMotorWay   (0, 400,   1,   1, 10, TX_DARKGREY, TX_WHITE);
    }

