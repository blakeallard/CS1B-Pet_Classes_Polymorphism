cmake_minimum_required(VERSION 3.29)
project(Spotify_Artist_Program)

set(CMAKE_CXX_STANDARD 20)

add_executable(Spotify_Artist_Program main.cpp
        Pet.cpp
        Pet.h
        Cat.cpp
        Cat.h
        Dog.cpp
        Dog.h)
