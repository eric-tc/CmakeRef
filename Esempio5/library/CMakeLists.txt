cmake_minimum_required(VERSION 3.12)

project(libshared)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

add_library(libshared SHARED test.cpp test.h)

set_target_properties(
    libshared PROPERTIES
    SOVERSION 1
    VERSION 1.2.9
)

#aggiungere tutti gli header
#set_target_properties(myproject PROPERTIES PUBLIC_HEADER "${my_header_files}")
set_target_properties(libshared PROPERTIES PUBLIC_HEADER "test.h")

set(INCLUDE "include/test.h")

# senza @ONLY tutte le variabili di Cmake sono convertite nei valori statici
# con @ONLY solo le variabili con @ VAR @ sono convertite con i loro valori
configure_file(libsharedConfig.cmake.in "${CMAKE_INSTALL_PREFIX}/libsharedConfig.cmake" @ONLY)


# copia i file nelle cartelle lib bin e include
install(TARGETS libshared
    EXPORT libsharedTargets.cmake
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_PREFIX}/include
)

# Crea il file di configurazione
export ( TARGETS libshared FILE ${CMAKE_INSTALL_PREFIX}/libsharedTargets.cmake  )

