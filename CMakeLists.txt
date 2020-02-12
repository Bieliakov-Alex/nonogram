cmake_minimum_required(VERSION 3.10)

# message( ${PROJECT_SOURCE_DIR} )
#message(${CMAKE_INSTALL_PREFIX})
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
#message(${CMAKE_INSTALL_PREFIX})

add_subdirectory(nonogram)
add_subdirectory(nonogram_cli)
