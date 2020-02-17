/**
 * Copyright © 2016 IBM Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <sys/types.h>

const char console_socket_path[] = "\0obmc-console-1";
const size_t console_socket_path_len = sizeof(console_socket_path) - 1;
const char *console_socket_path_readable = console_socket_path + 1;


const char console_socket_path2[] = "\0obmc-console-2";
const size_t console_socket_path_len2 = sizeof(console_socket_path2) - 1;
const char *console_socket_path_readable2 = console_socket_path2 + 1;


const char console_socket_path3[] = "\0obmc-console-3";
const size_t console_socket_path_len3 = sizeof(console_socket_path3) - 1;
const char *console_socket_path_readable3 = console_socket_path3 + 1;


const char console_socket_path4[] = "\0obmc-console-4";
const size_t console_socket_path_len4 = sizeof(console_socket_path4) - 1;
const char *console_socket_path_readable4 = console_socket_path4 + 1;
