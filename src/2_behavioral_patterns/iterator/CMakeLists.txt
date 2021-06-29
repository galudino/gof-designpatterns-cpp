add_subdirectory(./models)
include_directories(./models)

add_executable(iterator main.cpp)
add_executable(internal_list_iterator main_internal_list_iterator.cpp)
add_executable(external_iterator main_external_iterator.cpp)

target_link_libraries(iterator iterator_lib)
target_link_libraries(internal_list_iterator iterator_lib)
target_link_libraries(external_iterator iterator_lib)
