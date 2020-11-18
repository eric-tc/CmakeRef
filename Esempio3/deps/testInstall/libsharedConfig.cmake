# config file for shared library

# cartella corrente di installazione
get_filename_component(LIBSHARED_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

#file(RELATIVE_PATH MYLIB_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_LIST_DIR}/include/)

#set(LIBSHARED_INCLUDE_DIRS "include/test.h")

set(LIBSHARED_INCLUDE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include/)

#file(RELATIVE_PATH LIBSHARED_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_LIST_DIR}/include/)
# questo file è generato dal comando export(TARGETS)
# serve al posto di link_libraries nel file cmake principale
include("${LIBSHARED_CMAKE_DIR}/libsharedTargets.cmake")

# sharedlib nome del target esportato presente nel comando export(TARGETS)
set(LIBSHARED_LIBS libshared)

