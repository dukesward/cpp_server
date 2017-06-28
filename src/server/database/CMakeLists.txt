
file(GLOB FILE_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.h

	${CMAKE_CURRENT_SOURCE_DIR}/Database/*.cpp
)

list(APPEND SOURCES ${FILE_SOURCES})

add_library(database
  ${SOURCES}
)

target_link_libraries(database
    common
)