# CMake generated Testfile for 
# Source directory: E:/Вуз/программирование/ADS_cmake/tests
# Build directory: E:/Вуз/программирование/ADS_cmake/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(DS_TESTS "E:/Вуз/программирование/ADS_cmake/tests/Debug/DS_TESTS.exe")
  set_tests_properties(DS_TESTS PROPERTIES  _BACKTRACE_TRIPLES "E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;3;add_test;E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(DS_TESTS "E:/Вуз/программирование/ADS_cmake/tests/Release/DS_TESTS.exe")
  set_tests_properties(DS_TESTS PROPERTIES  _BACKTRACE_TRIPLES "E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;3;add_test;E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(DS_TESTS "E:/Вуз/программирование/ADS_cmake/tests/MinSizeRel/DS_TESTS.exe")
  set_tests_properties(DS_TESTS PROPERTIES  _BACKTRACE_TRIPLES "E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;3;add_test;E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(DS_TESTS "E:/Вуз/программирование/ADS_cmake/tests/RelWithDebInfo/DS_TESTS.exe")
  set_tests_properties(DS_TESTS PROPERTIES  _BACKTRACE_TRIPLES "E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;3;add_test;E:/Вуз/программирование/ADS_cmake/tests/CMakeLists.txt;0;")
else()
  add_test(DS_TESTS NOT_AVAILABLE)
endif()
