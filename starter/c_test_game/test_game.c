#include "../opengl_wrapper_lib/opengl_wrapper_lib.h"

int main() {
    // Create the game window
    create_game_window("C Test Game", 800, 600);

    // Create a sprite
    Sprite* sprite = create_sprite(100.0f, 150.0f, 50, 50, 255, 0, 0); // Red sprite

    // Create another sprite
    Sprite* sprite2 = create_sprite(200.0f, 300.0f, 60, 60, 0, 255, 0); // Green sprite

    // Main loop
    while (!window_should_close()) {
        clear_screen();

        // Render the sprite
        render_sprite(sprite);
        render_sprite(sprite2);

        // Update the game window
        update_game_window();
    }

    return 0;
}
