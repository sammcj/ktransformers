// Adapted from
// https://github.com/Mozilla-Ocho/llamafile/blob/0.8.8/llamafile/tinyblas_cpu_sgemm_amd_zen4.cpp
// Copyrigth 2024 Mozilla Foundation.
// Copyright(c) 2024 by KVCache.AI, All Rights Reserved.

#ifdef __x86_64__
#define llamafile_sgemm llamafile_sgemm_amd_zen4
#define iqk_mul_mat iqk_mul_mat_zen4
#include "tinyblas_cpu_sgemm.inc"
#endif  // __x86_64__