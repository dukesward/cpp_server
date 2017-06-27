
add_library(process INTERFACE)

target_include_directories(process
  INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(process
  INTERFACE
    boost)