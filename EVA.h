// My Lib

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

void DrawFlower        (int x, int y, double sizeX, double sizeY, int Disclosure,
                        int UpSheet, int Swinging, COLORREF colorFlower);

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

