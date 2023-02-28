#include "Color.hh"
#include <SDL2/SDL.h>

class Graphics {
    private:
    static int windowWidth;
    static int windowHeight;
    static SDL_Window* window;
    static SDL_Renderer* renderer;

    public:
    static bool OpenWindow(int width, int height);
    static void CloseWindow();
    static void RenderFrame();
    static void CleanUpScreen();

    static void DrawLine(int x0, int y0, int x1, int y1, Color color);
    static void DrawCircle(int x, int y, int radius, Color color, float angle);
    static void DrawFillCircle(int x, int y, int radius, Color color);
    static void DrawRect(int x, int y, int width, int height, Color color);
    static void DrawFillRect(int x, int y, int width, int height, Color color);

};