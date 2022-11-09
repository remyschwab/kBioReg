cmake_minimum_required (VERSION 3.8)

add_custom_target (api_test ALL)

macro (add_api_test test_filename)
    add_app_test (${test_filename})

    seqan3_test_component (target "${test_filename}" TARGET_NAME)
    add_dependencies (api_test ${target})
endmacro ()

add_api_test (kBioReg_index_test.cpp)
target_use_datasources (kBioReg_index_test FILES ibf_example.fna)
