
include_directories(
	${CMAKE_SOURCE_DIR}/src/common
	${CMAKE_SOURCE_DIR}/src/common/Cryptography
	${CMAKE_SOURCE_DIR}/src/common/Debugging
	${CMAKE_SOURCE_DIR}/src/server/database/Database
)

file(GLOB FILE_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
)

list(APPEND SOURCES ${FILE_SOURCES})

set(EXECUTABLE_NAME world_server)
set (EXECUTABLE_SRCS
	${SOURCES}
)

add_executable(${EXECUTABLE_NAME}
  ${EXECUTABLE_SRCS}
)

target_link_libraries(${EXECUTABLE_NAME}
	PUBLIC
    	database
)