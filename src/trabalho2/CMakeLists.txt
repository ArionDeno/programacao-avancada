project(trabalho2)
cmake_minimum_required(VERSION 2.4)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

