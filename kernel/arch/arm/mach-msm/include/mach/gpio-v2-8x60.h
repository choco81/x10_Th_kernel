/* Copyright (c) 2010, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __ASM_ARCH_MSM_GPIO_V2_8X60_H
#define __ASM_ARCH_MSM_GPIO_V2_8X60_H

#define ARCH_NR_GPIOS 173

#define MSM_GPIO_DRV_2MA  (0 << 6)
#define MSM_GPIO_DRV_4MA  (1 << 6)
#define MSM_GPIO_DRV_6MA  (2 << 6)
#define MSM_GPIO_DRV_8MA  (3 << 6)
#define MSM_GPIO_DRV_10MA (4 << 6)
#define MSM_GPIO_DRV_12MA (5 << 6)
#define MSM_GPIO_DRV_14MA (6 << 6)
#define MSM_GPIO_DRV_16MA (7 << 6)
#define MSM_GPIO_DRV_MASK (7 << 6)

#define MSM_GPIO_FUNC_SEL(x)   ((x & 0xf) << 2)
#define MSM_GPIO_FUNC_SEL_MASK (0xf << 2)

#define MSM_GPIO_PULL_NONE      0
#define MSM_GPIO_PULL_PULL_DOWN 1
#define MSM_GPIO_PULL_KEEPER    2
#define MSM_GPIO_PULL_PULL_UP   3
#define MSM_GPIO_PULL_MASK      3

#endif /* __ASM_ARCH_MSM_GPIO_V2_8X60_H */