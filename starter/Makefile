OUTPUT_DIR = ./c_output

OPENGL_WRAPPER_LIB_DIR = ./opengl_wrapper_lib
OPENGL_WRAPPER_LIB_SRC = $(OPENGL_WRAPPER_LIB_DIR)/opengl_wrapper_lib.c
OPENGL_WRAPPER_LIB_OBJ = $(OUTPUT_DIR)/opengl_wrapper_lib.o
OPENGL_WRAPPER_LIB = openglwrapper
OPENGL_WRAPPER_LIB_SO = $(OUTPUT_DIR)/lib$(OPENGL_WRAPPER_LIB).so

TEST_GAME_DIR = ./c_test_game
TEST_GAME_SRC = $(TEST_GAME_DIR)/test_game.c
TEST_GAME_EXE = $(OUTPUT_DIR)/test_game_exe

.PHONY: build
build:
	@echo "Building OpenGL Wrapper library..."
	gcc -c -fPIC $(OPENGL_WRAPPER_LIB_SRC) -o $(OPENGL_WRAPPER_LIB_OBJ) # Compile source file
	gcc -shared -o $(OPENGL_WRAPPER_LIB_SO) $(OPENGL_WRAPPER_LIB_OBJ) -lglfw -lGL # Create shared library

.PHONY: run
run: build
	@echo "Running Test Game..."
	gcc $(TEST_GAME_SRC) -o $(TEST_GAME_EXE) -L$(OUTPUT_DIR) -l$(OPENGL_WRAPPER_LIB) -Wl,-rpath,$(OUTPUT_DIR) # Compile source file
	$(TEST_GAME_EXE) # Run the test game

.PHONY: test-rust
test-rust:
	@echo "Running Rust Tests Serially..."
	cargo test --manifest-path ./my_game_engine/Cargo.toml tests::test_simple_game_loop -- --nocapture --ignored
	cargo test --manifest-path ./my_game_engine/Cargo.toml tests::test_sprite_rendering -- --nocapture --ignored
	cargo test --manifest-path ./my_game_engine/Cargo.toml tests::test_screen_clearing -- --nocapture --ignored
	cargo test --manifest-path ./my_game_engine/Cargo.toml tests::test_key_presses -- --nocapture --ignored
	cargo test --manifest-path ./my_game_engine/Cargo.toml tests::test_sprite_position_update -- --nocapture --ignored
