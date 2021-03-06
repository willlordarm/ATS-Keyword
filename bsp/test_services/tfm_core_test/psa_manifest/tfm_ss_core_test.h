/*
 * Copyright (c) 2019-2021, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

/*********** WARNING: This is an auto-generated file. Do not edit! ***********/

#ifndef __PSA_MANIFEST_TFM_SS_CORE_TEST_H__
#define __PSA_MANIFEST_TFM_SS_CORE_TEST_H__

#ifdef __cplusplus
extern "C" {
#endif

#define TFM_SP_CORE_TEST_MODEL_IPC                              1
#define TFM_SP_CORE_TEST_MODEL_SFN                              0


#define SPM_CORE_TEST_INIT_SUCCESS_SIGNAL                       (1U << 4)
#define SPM_CORE_TEST_DIRECT_RECURSION_SIGNAL                   (1U << 5)
#define SPM_CORE_TEST_SS_TO_SS_SIGNAL                           (1U << 6)
#define SPM_CORE_TEST_SS_TO_SS_BUFFER_SIGNAL                    (1U << 7)
#define SPM_CORE_TEST_OUTVEC_WRITE_SIGNAL                       (1U << 8)
#define SPM_CORE_TEST_PERIPHERAL_ACCESS_SIGNAL                  (1U << 9)
#define SPM_CORE_TEST_GET_CALLER_CLIENT_ID_SIGNAL               (1U << 10)
#define SPM_CORE_TEST_SPM_REQUEST_SIGNAL                        (1U << 11)
#define SPM_CORE_TEST_BLOCK_SIGNAL                              (1U << 12)
#define SPM_CORE_TEST_NS_THREAD_SIGNAL                          (1U << 13)


#ifdef __cplusplus
}
#endif

#endif /* __PSA_MANIFEST_TFM_SS_CORE_TEST_H__ */
