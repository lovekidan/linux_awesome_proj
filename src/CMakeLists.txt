ADD_SUBDIRECTORY(lib)
AUX_SOURCE_DIRECTORY(. SRC_DIR)
ADD_EXECUTABLE(linux_awesome_proj ${SRC_DIR})
target_link_libraries(linux_awesome_proj linux_awesome_proj_lib ${LIBRARY_OUTPUT_PATH}/liboutside.a)