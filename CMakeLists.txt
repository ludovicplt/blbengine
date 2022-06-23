cmake_minimum_required(VERSION 3.17)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(proof_of_concept)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)



include_directories (
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/src/
)

find_package(raylib REQUIRED)

add_library(ECS STATIC
    ${PROJECT_SOURCE_DIR}/lib/src/Core.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Shape.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Window.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Camera3D.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Camera2D.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/AComponent.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Controler.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Line.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Collider.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Entity.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Cube.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Audio.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Model3D.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/type/Colors.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Texture.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Image.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Keyboard.cpp
    ${PROJECT_SOURCE_DIR}/lib/src/Text.cpp
)

target_link_libraries(ECS
    raylib
)


file(GLOB PROJECT_FILES
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)

add_executable(bomberman ${PROJECT_FILES})

target_link_libraries(bomberman PUBLIC raylib)

target_link_libraries(bomberman PUBLIC ECS)

FILE(COPY ${CMAKE_SOURCE_DIR}/resources DESTINATION ${CMAKE_BINARY_DIR})
