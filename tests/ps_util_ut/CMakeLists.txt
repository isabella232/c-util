#Copyright (c) Microsoft. All rights reserved.
#Licensed under the MIT license. See LICENSE file in the project root for full license information.

cmake_minimum_required(VERSION 2.8.11)

set(theseTestsName ps_util_ut)

set(${theseTestsName}_test_files
    ${theseTestsName}.c
)

set(${theseTestsName}_c_files
    ps_util_mocked.c
)

set(${theseTestsName}_h_files
    ../../inc/c_util/ps_util.h
)

build_test_artifacts(${theseTestsName} ON "tests/c_util")
