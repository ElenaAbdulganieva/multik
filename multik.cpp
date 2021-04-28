// animated film
// interim work
// kpk 2021
// Abdulganieva Elena Viktorovna
//______________________________

# include "TXlib.h"

const int TIME = 1;

void DrawMotorWay      (int x, int y, double sizeX, double sizeY, int width,
                        COLORREF colorWay, COLORREF colorBand);

void DrawTrafficlights (int x, int y, double sizeX, double sizeY,
                        int colorHeadlight, COLORREF colorMain);

void DrawTree          (int x, int y, double sizeX, double sizeY, int DFruit,
                        int WobbleCrown, int HeightTrunk, int HeightCrown,
                        COLORREF colorFruit1, COLORREF colorFruit2, COLORREF colorFruit3);

void DrawFlower        (int x, int y, double sizeX, double sizeY, int Disclosure,
                        int UpSheet, int Swinging, COLORREF colorFlower);

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

void City              (int x, int y, double sizeX, double sizeY, COLORREF colorCity);

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

    return 0;
    }

void TextBegin ()
    {
    txBegin ();
    txPlaySound ("veter.wav");

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
        txSleep (TIME);
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
        txSleep (TIME);
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
        txSleep (TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void TreesGrowing ()
    {
    txPlaySound ("listva.wav");
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
        txSleep (TIME);
        txClear ();
        }
    txSleep (100);
    txEnd ();
    txPlaySound ();
    }

void GirlsLeaves ()
    {
    txPlaySound ("veter.wav");
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
        txSleep (TIME);
        }
    txEnd ();
    txPlaySound ();
    }

void BirdsBegin ()
    {
    txPlaySound ("birdsbegin.wav");
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
        txSleep (TIME);
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
        txSleep (TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void BirdsEnd ()
    {
    txPlaySound ("birdsend.wav");
    txBegin ();

    int t = 0;
    while (t < 200)
        {
        DrawBackGroundRoadCity ();
        DrawTrafficlights ( 95, 100, 1, 1, t % 4, TX_GREY);

        Trees   (t, t, t, t, 255, 0, 0);
        Flowers (t, t, t);

        DrawBird (560 + t, 175 - t, -1, 1, t %  5, TX_ORANGE, TX_WHITE, TX_WHITE);
        DrawBird (210 - t, 150 - t,  1, 1, t %  3, TX_WHITE , TX_BLUE , TX_WHITE);
        DrawBird (300 + t, 100 - t, -1, 1, t % 10, TX_RED   , TX_WHITE, TX_BLUE );

        t ++;
        txSleep (TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void CarsGo ()
    {
    txPlaySound ("car.wav");
    txBegin ();

    int t = 0;
    while (t < 300)
        {
        DrawBackGroundRoadCity ();
        DrawTrafficlights ( 95, 100, 1, 1, t % 4, TX_GREY);

        Trees (t, t, t, t, 50, 50, 50);
        MoveCars (t);

        t ++;
        txSleep (TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void AppearedFactory ()
    {
    txPlaySound ("zavod.wav");
    txBegin ();

    int t = 0;
    while (t < 200)
        {
        DrawBackGroundRoadCity ();

        Factories (t);
        DrawTrafficlights (95, 100, 1, 1, t % 4, TX_GREY);
        MoveCars (t);

        t ++;
        txSleep (TIME);
        txClear ();
        }
    txEnd ();
    txPlaySound ();
    }

void TextEnd ()
    {
    txPlaySound ("gta.wav");
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
        txSleep (TIME);
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
    POINT factory [] = {{x       * sizeX, y      * sizeY             },
                        {x       * sizeX, y - 10 * sizeY             },
                        {x +  10 * sizeX, y - 10 * sizeY             },
                        {x +  10 * sizeX, y - 20 * sizeY             },
                        {x +  30 * sizeX, y - 20 * sizeY             },
                        {x +  30 * sizeX, y - 60 * sizeY - PipeHeight},
                        {x +  40 * sizeX, y - 60 * sizeY - PipeHeight},
                        {x +  40 * sizeX, y - 20 * sizeY             },
                        {x +  50 * sizeX, y - 20 * sizeY             },
                        {x +  50 * sizeX, y - 30 * sizeY             },
                        {x +  60 * sizeX, y - 30 * sizeY             },
                        {x +  60 * sizeX, y - 40 * sizeY             },
                        {x +  80 * sizeX, y - 40 * sizeY             },
                        {x +  80 * sizeX, y - 80 * sizeY - PipeHeight},
                        {x +  90 * sizeX, y - 80 * sizeY - PipeHeight},
                        {x +  90 * sizeX, y - 80 * sizeY             },
                        {x +  90 * sizeX, y - 40 * sizeY             },
                        {x + 110 * sizeX, y - 40 * sizeY             },
                        {x + 110 * sizeX, y - 30 * sizeY             },
                        {x + 120 * sizeX, y - 30 * sizeY             },
                        {x + 120 * sizeX, y - 20 * sizeY             },
                        {x + 130 * sizeX, y - 20 * sizeY             },
                        {x + 130 * sizeX, y - 10 * sizeY             },
                        {x + 140 * sizeX, y - 10 * sizeY             },
                        {x + 140 * sizeX, y      * sizeY             },
                        {x       * sizeX, y      * sizeY             }};
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

void DrawFlower (int x, int y, double sizeX, double sizeY, int Disclosure,
                 int UpSheet, int Swinging, COLORREF colorFlower)
    {
    txSetColor     (RGB (50, 200, 50));
    txSetFillColor (RGB (50, 200, 50));
    txLine (x, y, x + Swinging, y-5 * sizeY);
    POINT sheet [] =   {{x +             Swinging, y - 1 * sizeY          },
                        {x + 2 * sizeX + Swinging, y - 3 * sizeY + UpSheet},
                        {x + 3 * sizeX + Swinging, y - 3 * sizeY + UpSheet},
                        {x + 3 * sizeX + Swinging, y - 2 * sizeY + UpSheet},
                        {x +             Swinging, y - 1 * sizeY          }};
    txPolygon (sheet, 5);

    POINT pedicel [] = {{x +             Swinging, y - 5 * sizeY},
                        {x - 1 * sizeX + Swinging, y - 6 * sizeY},
                        {x + 1 * sizeX + Swinging, y - 6 * sizeY},
                        {x +             Swinging, y - 5 * sizeY}};
    txPolygon (pedicel, 4);

    txSetColor     (colorFlower);
    txSetFillColor (colorFlower);
    POINT bud [] = {{x - 1 * sizeX + Swinging             , y -  6 * sizeY},
                    {x - 2 * sizeX + Swinging             , y -  7 * sizeY},
                    {x - 2 * sizeX + Disclosure + Swinging, y - 10 * sizeY},
                    {x - 1 * sizeX + Swinging             , y -  9 * sizeY},
                    {x             + Swinging             , y - 10 * sizeY},
                    {x + 1 * sizeX + Swinging             , y -  9 * sizeY},
                    {x + 2 * sizeX - Disclosure + Swinging, y - 10 * sizeY},
                    {x + 2 * sizeX + Swinging             , y -  7 * sizeY},
                    {x + 1 * sizeX + Swinging             , y -  6 * sizeY},
                    {x - 1 * sizeX + Swinging             , y -  6 * sizeY}};
    txPolygon (bud, 10);
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

void City (int x, int y, double sizeX, double sizeY, COLORREF colorCity)
    {
    txSetColor     (colorCity);
    txSetFillColor (colorCity);
    txRectangle ( 50 + x * sizeX, 50 + y * sizeY, 100 + x * sizeX, 200 + y * sizeY);
    txRectangle (125 + x * sizeX, 50 + y * sizeY, 175 + x * sizeX, 200 + y * sizeY);
    txRectangle (200 + x * sizeX, 25 + y * sizeY, 250 + x * sizeX, 200 + y * sizeY);
    txRectangle (275 + x * sizeX, 75 + y * sizeY, 325 + x * sizeX, 200 + y * sizeY);
    txRectangle (350 + x * sizeX, 75 + y * sizeY, 400 + x * sizeX, 200 + y * sizeY);
    txRectangle (425 + x * sizeX, 75 + y * sizeY, 475 + x * sizeX, 200 + y * sizeY);
    txRectangle (500 + x * sizeX, 25 + y * sizeY, 550 + x * sizeX, 200 + y * sizeY);
    txRectangle (575 + x * sizeX, 50 + y * sizeY, 625 + x * sizeX, 200 + y * sizeY);
    txRectangle (675 + x * sizeX, 75 + y * sizeY, 725 + x * sizeX, 200 + y * sizeY);
    }
