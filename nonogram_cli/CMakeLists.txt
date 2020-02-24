cmake_minimum_required(VERSION 3.10)
project(nonogram_cli)

add_definitions(-DBOOST_LOG_DYN_LINK)
find_package(Boost 1.65.0 COMPONENTS log REQUIRED)
find_package(Threads)

include_directories(include)

add_executable(${PROJECT_NAME} src/impl/main.cpp)

target_link_libraries(${PROJECT_NAME} ${Boost_LOG_LIBRARY}
                                      ${CMAKE_THREAD_LIBS_INIT}
                                      nonogram
)

install(TARGETS nonogram_cli DESTINATION "bin")
