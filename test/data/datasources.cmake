cmake_minimum_required (VERSION 3.8)

include (cmake/app_datasources.cmake)

# copies file to <build>/data/in.fastq
declare_datasource (FILE in.fastq
                    URL ${CMAKE_SOURCE_DIR}/test/data/in.fastq
                    URL_HASH SHA256=6e30fc35f908a36fe0c68a7a35c47f51f9570da16622fb0c072a20e6a9ba5b3e)

# copies file to <build>/data/ibf_example.fna
declare_datasource (FILE ibf_example.fna
                    URL ${CMAKE_SOURCE_DIR}/test/data/ibf_example.fna
                    URL_HASH SHA256=6f355e8665531fbf55678a49accd17f106e8e76789ec1bde3d1e7f5791ecc811)

# copies file to <build>/data/COVID_AA.fa
declare_datasource (FILE COVID_AA.fa
                    URL ${CMAKE_SOURCE_DIR}/test/data/COVID_AA.fa
                    URL_HASH SHA256=b139bee9c0fd2d902a610f5b9ce67037cf15652211161e6ca4a5aaa71fa0e4d4)
