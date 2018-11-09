/*
 * Copyright (C) 
 */

#ifndef UTIL_ALIGNED_MEMORY_HEADER
#define UTIL_ALIGNED_MEMORY_HEADER

#include <cstdint>
#include <vector>

#include "util/defines.h"
#include "util/aligned_allocator.h"

UTIL_NAMESPACE_BEGIN

template <typename T, size_t ALIGNMENT = 16>
using AlignedMemory = std::vector<T, AlignedAllocator<T, ALIGNMENT>>;

UTIL_NAMESPACE_END

#endif /* UTIL_ALIGNED_MEMORY_HEADER */
