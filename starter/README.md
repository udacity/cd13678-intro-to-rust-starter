# Starter Folder

In this folder, you should see the following folder/files:
- `opengl_wrapper_lib/`: A C library that wraps OpenGL functions for use in Rust. This will be the foundation of our game engine.
- `c_test_game/`: A simple C game that uses the `opengl_wrapper_lib/` to render a window with two squares to ensure the project is properly set up.
- `c_output/`: The output of compiling: (1) the `opengl_wrapper_lib` source code and making it a shared library, and (2) the `c_test_game` source code.
- `Makefile`: A makefile with rules to build the `opengl_wrapper_lib` and run the `c_test_game`. 
- `README.md`: The file you are currently reading.
