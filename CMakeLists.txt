cmake_minimum_required(VERSION 3.28)
project(LeetCode)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin_make)

function(add_leetcode_problems category_dir)
  file(GLOB problem_dirs LIST_DIRECTORIES true "${category_dir}/*")
  foreach(problem_dir ${problem_dirs})
    if(IS_DIRECTORY ${problem_dir})
      get_filename_component(problem_name ${problem_dir} NAME)
      if(EXISTS ${problem_dir}/main.cpp)
        add_executable(${problem_name} ${problem_dir}/main.cpp)
        set_target_properties(
          ${problem_name} PROPERTIES
          RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${category_dir}
          FOLDER "LeetCode/${category_dir}"
        )
        message(STATUS "Added problem: ${category_dir}/${problem_name}")
      else()
        message(WARNING "main.cpp not found in ${problem_dir}")
      endif()
    endif()
  endforeach()
endfunction()

add_leetcode_problems("easy")
add_leetcode_problems("medium")
add_leetcode_problems("hard")

file(GLOB_RECURSE all_problems LIST_DIRECTORIES false "*/main.cpp")
foreach(problem_file ${all_problems})
  get_filename_component(problem_dir ${problem_file} DIRECTORY)
  get_filename_component(problem_name ${problem_dir} NAME)
  list(APPEND ALL_LEETCODE_TARGETS ${problem_name})
endforeach()

list(REMOVE_DUPLICATES ALL_LEETCODE_TARGETS)

add_custom_target(
  all_problems
  DEPENDS ${ALL_LEETCODE_TARGETS}
  COMMENT "Building all LeetCode problems"
)

message(STATUS "Binary files will be generated in: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
