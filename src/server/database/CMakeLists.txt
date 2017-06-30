
include_directories(
	${CMAKE_SOURCE_DIR}/src/common
)

file(GLOB FILE_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.h

	${CMAKE_CURRENT_SOURCE_DIR}/Database/*.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Database/*.h
)

list(APPEND SOURCES ${FILE_SOURCES})

add_library(database
  ${SOURCES}
)

target_link_libraries(database
	PUBLIC
    	common
)