cmake_minimum_required(VERSION 3.10)
project(nonogram)

add_definitions(-DBOOST_LOG_DYN_LINK)
find_package(Boost 1.65.0 COMPONENTS log REQUIRED)
find_package(Threads)

include_directories(include
                    src/incl
)

add_library(${PROJECT_NAME} STATIC src/impl/nonogram.cpp
                                   src/impl/nonogram_factory.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC  include
                                           PRIVATE src/incl
                                                   ${Boost_INCLUDE_DIR}
)

target_link_libraries(${PROJECT_NAME} ${Boost_LOG_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})

install(TARGETS nonogram DESTINATION "bin")

add_subdirectory(test)
