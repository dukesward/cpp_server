
include_directories(
	${CMAKE_SOURCE_DIR}/src/server/include
	${CMAKE_SOURCE_DIR}/src/utils/include
)

add_library(utils
	common.cpp
	config.cpp
)