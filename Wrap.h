/* $Xorg: Wrap.h,v 1.3 2000/08/17 19:45:50 cpqbld Exp $ */
/*
 * header file for compatibility with something useful
 */

typedef unsigned char auth_cblock[8];	/* block size */

typedef struct auth_ks_struct { auth_cblock _; } auth_wrapper_schedule[16];

extern void _XdmcpWrapperToOddParity();
