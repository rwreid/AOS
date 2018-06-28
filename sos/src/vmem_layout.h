/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
#pragma once

/* Constants for the layout of the SOS address space */

/* Address where memory used for DMA starts getting mapped.
 * Do not use the address range between SOS_DMA_VSTART and SOS_DMA_VEND */
#define SOS_DMA_SIZE_BITS    (seL4_LargePageBits)

#define SOS_SCRATCH          (0xA0000000)
#define SOS_DEVICE_START     (0xB0000000)
#define SOS_ELF_VMEM         (0xD0000000)
#define SOS_UT_TABLE         (0x8000000000)

/* Constants for how SOS will layout the address space of any processes it loads up */
#define PROCESS_STACK_TOP   (0x90000000)
#define PROCESS_IPC_BUFFER  (0xA0000000)
#define PROCESS_VMEM_START  (0xC0000000)

