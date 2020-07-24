

#Definisco i file che devono essere compilati per creare la libreria
target_sources(MyLib PRIVATE 
${CMAKE_CURRENT_LIST_DIR}/func1.h 
${CMAKE_CURRENT_LIST_DIR}/func1.cpp)