
project(wow_server)

# CMake policies
cmake_minimum_required(VERSION 3.0)

add_subdirectory(src)
add_subdirectory(dep)

set(CONF_DIR ${CMAKE_SOURCE_DIR}/configs)

configure_file(world.conf.dist.in world.conf.dist)
install(FILES world.conf.dist DESTINATION configs)