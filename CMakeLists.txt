
project(MaNGOSr)

# CMake policies
cmake_minimum_required(VERSION 3.0)

add_subdirectory(src)

set(CONF_DIR ${CMAKE_SOURCE_DIR}/configs)

configure_file(mangosr.conf.dist.in mangosr.conf.dist)
install(FILES mangosr.conf.dist DESTINATION configs)