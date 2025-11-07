# Versão mínima do CMake
cmake_minimum_required(VERSION 3.5)

# Nome do projeto e linguagem
project(ProjetoOpenGL C)

# Define o padrão do C a ser utilizado
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Encontra os pacotes OpenGL, GLUT e a biblioteca matemática
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Define uma variável com todos os seus arquivos-fonte.
# Isso torna mais fácil adicionar novos arquivos no futuro.
set(SOURCES
    src/main.c
    src/keyboard.c 
    src/mouse.c
    src/controls.c
    src/block.c
    src/building.c
    src/door.c
    src/wall.c
    src/ground.c
    src/structures.c
    src/roof.c
)

# Adiciona o diretório "include" para que você possa usar #include "house.h"
# em vez de #include "../include/house.h"
include_directories(include)

# Cria o executável a partir dos seus arquivos-fonte
add_executable(dcce ${SOURCES})

# Linka as bibliotecas necessárias com o nosso executável.
# A mágica acontece aqui: adicionamos "m" para a biblioteca matemática.
target_link_libraries(dcce PRIVATE
    ${OPENGL_LIBRARIES}
    ${GLUT_LIBRARIES}
    m # <-- ESSA É A LINHA QUE FALTAVA
)