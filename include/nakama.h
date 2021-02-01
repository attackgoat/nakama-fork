// Copyright 2021 The Nakama Authors
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// NOTE: In order to implement a c-module, you must provide the following functions:
//
// Module entrypoint:
// void nk_init_module(NkLogger);
//
// Match initializer:
// void *nk_init_match(NkLogger);

#include "nktypes.h"
#include "nkmodule.h"
#include "nklogger.h"
