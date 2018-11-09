/*
 * Copyright (C) 
 */

#ifndef SFM_DEFINES_HEADER
#define SFM_DEFINES_HEADER

#define SFM_NAMESPACE_BEGIN namespace sfm {
#define SFM_NAMESPACE_END }

#define SFM_BUNDLER_NAMESPACE_BEGIN namespace bundler {
#define SFM_BUNDLER_NAMESPACE_END }

#define SFM_PBA_NAMESPACE_BEGIN namespace pba {
#define SFM_PBA_NAMESPACE_END }

#define SFM_BA_NAMESPACE_BEGIN namespace ba {
#define SFM_BA_NAMESPACE_END }

#ifndef STD_NAMESPACE_BEGIN
#   define STD_NAMESPACE_BEGIN namespace std {
#   define STD_NAMESPACE_END }
#endif

/** Structure-from-Motion library. */
SFM_NAMESPACE_BEGIN
/** SfM bundler components. */
SFM_BUNDLER_NAMESPACE_BEGIN SFM_BUNDLER_NAMESPACE_END
/** Parallel Bundle Adjustment components. */
SFM_PBA_NAMESPACE_BEGIN SFM_PBA_NAMESPACE_END
SFM_NAMESPACE_END

#endif /* MVE_DEFINES_HEADER */
