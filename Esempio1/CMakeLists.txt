cmake_minimum_required(VERSION 3.11)

# progetto base per testare add_subdirectory
project(testfunction)


# serve per compilare la libreria nella cartella lib1 aggiunta da add_subdirectory
# il valore MyLib è passato a lib1/CMakeLists.txt
add_library(MyLib SHARED "")

# Richiama il file lib1/CMakeLists.txt e crea la libreria statica definita
# dal valore add_library(MyLib "") 
# i file da includere nella libreria sono definiti nel file lib1/CMakeLists.txt 
# con target_sources()
add_subdirectory(lib1)

# genera eseguibile del progetto
add_executable(testfunction main.cpp)

# Aggiungo la libreria creata da add_library all eseguibile
target_link_libraries(testfunction MyLib)


