/*
 * Copyright (C) 
 */

#ifndef MVE_DEFINES_HEADER
#define MVE_DEFINES_HEADER

#define MVE_NAMESPACE_BEGIN namespace mve {
#define MVE_NAMESPACE_END }

#define MVE_IMAGE_NAMESPACE_BEGIN namespace image {
#define MVE_IMAGE_NAMESPACE_END }

#define MVE_GEOM_NAMESPACE_BEGIN namespace geom {
#define MVE_GEOM_NAMESPACE_END }

#ifndef STD_NAMESPACE_BEGIN
#   define STD_NAMESPACE_BEGIN namespace std {
#   define STD_NAMESPACE_END }
#endif

/** Multi-View Environment library. */
MVE_NAMESPACE_BEGIN
/** Image tools, loading and processing functions. */
MVE_IMAGE_NAMESPACE_BEGIN MVE_IMAGE_NAMESPACE_END
/** Geometric tools, loading and processing functions. */
MVE_GEOM_NAMESPACE_BEGIN MVE_GEOM_NAMESPACE_END
MVE_NAMESPACE_END

#endif /* MVE_DEFINES_HEADER */
