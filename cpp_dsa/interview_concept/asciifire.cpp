#include <ncurses.h>
#include <cstdlib>
#include <ctime>
#include <vector>

const int WIDTH = 40;  // Width of the fire
const int HEIGHT = 20; // Height of the fire
const char *FIRE_CHARS = " .:!*#$"; // Characters representing fire intensity

void initialize_fire(std::vector<std::vector<int>> &fire);
void update_fire(std::vector<std::vector<int>> &fire);
void render_fire(const std::vector<std::vector<int>> &fire);

int main() {
    srand(time(nullptr));

    // Initialize ncurses
    initscr();
    noecho();
    curs_set(0);
    nodelay(stdscr, TRUE);

    // Fire data
    std::vector<std::vector<int>> fire(HEIGHT, std::vector<int>(WIDTH, 0));
    initialize_fire(fire);

    while (true) {
        if (getch() != ERR) break; // Exit on key press

        update_fire(fire);
        render_fire(fire);

        refresh();
        napms(50); // Control the frame rate
    }

    // End ncurses mode
    endwin();
    return 0;
}

void initialize_fire(std::vector<std::vector<int>> &fire) {
    // Set the bottom row to maximum intensity
    for (int x = 0; x < WIDTH; ++x) {
        fire[HEIGHT - 1][x] = sizeof(FIRE_CHARS) - 2;
    }
}

void update_fire(std::vector<std::vector<int>> &fire) {
    // Update the fire values
    for (int y = 1; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            int decay = rand() % 3; // Random decay
            int src = (y * WIDTH + x);
            int new_value = fire[y][x] - decay;
            if (new_value < 0) new_value = 0;
            fire[y - 1][(src + decay) % WIDTH] = new_value;
        }
    }
}

void render_fire(const std::vector<std::vector<int>> &fire) {
    // Draw the fire
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            int intensity = fire[y][x];
            mvaddch(y, x, FIRE_CHARS[intensity]);
        }
    }
}