PROJECT(LINUX_AWESOME_PROJ)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
set(EXECUTABLE_OUTPUT_PATH ${LINUX_AWESOME_PROJ_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${LINUX_AWESOME_PROJ_SOURCE_DIR}/lib)
include_directories(${LINUX_AWESOME_PROJ_SOURCE_DIR}/include/)
ADD_SUBDIRECTORY(src)