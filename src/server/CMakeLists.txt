
include_directories(
	${CMAKE_SOURCE_DIR}/src/server/include
	${CMAKE_SOURCE_DIR}/src/utils/include
)

link_directories(${CMAKE_SOURCE_DIR}/src/utils)

set(EXECUTABLE_NAME mangosd)
set (EXECUTABLE_SRCS
	main.cpp
)

add_executable(${EXECUTABLE_NAME}
  ${EXECUTABLE_SRCS}
)