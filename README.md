# Building a Game Engine with Rust from the Ground Up

This repository serves as the starting point for building a simple yet functional game engine using Rust. The project is designed to help you apply the concepts and skills you've learned throughout the Rust course. By completing this project, you'll gain hands-on experience with Rust's advanced features, including multi-threading, macros, and interoperability with C code.

## Getting Started

When working on this project, you can choose between utilizing Udacity's VM environment or setting it all up on your local machine. If you prefer to use the Udacity VM, you can skip the local environment prerequisite steps and jump straight to the project instructions.

### Local environment prerequisites

While this project has no specific dependencies on any system, it was built on a Unix-based machine. So, if you're on Windows, I'd recommend using the Windows Subsystem for Linux (WSL), so all instructions here directly apply to your system.  

For this project, you'll need to have Rust installed in your machine. If you haven't installed Rust yet, you can do so with:

```bash
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
```

Also, because we are dealing with C code in this project, you'll need to have a C compiler installed on your machine. You can install the `build-essential` package, which includes the GNU C Compiler (GCC) and other necessary tools:

```bash
sudo apt update
sudo apt install build-essential
```

Finally, you'll need to have GLFW installed in your machine. GLFW is a C library that will be the foundation of our game engine. You can install it with:

```bash
sudo apt install libglfw3 libglfw3-dev
```

### Running the Test C Game

To start with your project, clone this repository to your local machine:

```bash
git clone https://github.com/udacity/intro-to-rust-starter.git
# or, git clone git@github.com:udacity/intro-to-rust-starter.git
```

To ensure you are set up correctly, you can run the test C game that comes with this project. You can build and run the test game with:

```bash
cd intro-to-rust-starter/starter
make run-c
```

You should see the following pop-up window:

![readme_image_assets/img.png](readme_image_assets/img.png)

### Starting the Rust Game Engine

With this done, we are ready to start creating our game engine project. Inside the `starter` folder, create a new Rust library project called `my_game_engine` (or whatever name you prefer), and then refer to the project instructions in the Udacity website to start building your game engine.

> Note: If you choose another name for your engine, you must update the references to `my_game_engine` in the `starter` folder's `Makefile` to reflect the new name.

## License

[License](LICENSE.txt)
