/*
	Copyright (C) 2013 - 2016 CurlyMo

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifndef _LUA_WIRINGX_H_
#define _LUA_WIRINGX_H_

#include "lua.h"

extern int plua_wiringx_setup(struct lua_State *L);
extern int plua_wiringx_has_gpio(struct lua_State *L);

static const luaL_Reg wiringx_lib[] = {
	{"setup", plua_wiringx_setup},
	{"hasGPIO", plua_wiringx_has_gpio},
	{NULL, NULL}
};

#endif