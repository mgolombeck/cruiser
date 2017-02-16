#include <Gamebuino.h>

Gamebuino gb;

void setup()
{
    gb.begin();
    gb.titleScreen(F("CRUISER"));
    gb.battery.show = false;
}

void loop()
{
    if (gb.update())
    {
        gb.display.println(F("Hello Gamebuino"));
        gb.display.drawPixel(42, 24);
        gb.display.drawLine(42, 47, 83, 24);
    }
}

