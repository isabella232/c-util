// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include <stdlib.h>

void mock_abort(void);

#define abort mock_abort

#include "../../src/ps_util.c"
