#pragma once

#include <cwchar>
#include <algorithm>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#undef WINVER
#define WINVER 0x0600

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <plugin.hpp>
#include <psapi.h>
#include <shlwapi.h>
#include <shellapi.h>
#include <wininet.h>
#include <process.h>

using namespace std::string_literals;

extern PluginStartupInfo PsInfo;
