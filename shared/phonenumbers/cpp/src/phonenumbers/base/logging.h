// Copyright (C) 2011 The Libphonenumber Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Author: Philippe Liard

// This file provides a minimalist implementation of common macros.

#ifndef I18N_PHONENUMBERS_BASE_LOGGING_H_
#define I18N_PHONENUMBERS_BASE_LOGGING_H_

// The Mac file system is case insensitive. If we just use #include
// "Logging.h", the compiler might try to load the current file again. Thus,
// the #include_next.
#include_next "Logging.h"

#endif  // I18N_PHONENUMBERS_BASE_LOGGING_H_