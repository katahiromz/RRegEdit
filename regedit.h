#ifndef _REGEDIT_H
#define _REGEDIT_H

#define WIN32_LEAN_AND_MEAN     /* Exclude rarely-used stuff from Windows headers */
#define WIN32_NO_STATUS
#include <windows.h>
#include <commctrl.h>
#include <shlwapi.h>
#include <stdio.h>
#include <aclapi.h>
#include <shellapi.h>
#include <strsafe.h>
#include <stdlib.h>

#include "main.h"
#include "hexedit.h"
#include "security.h"
#include "wine/debug.h"

#ifdef __RREGEDIT__
#include <stdio.h>
#include "compat/compat.h"
inline ULONG WINAPIV DbgPrint(PCCH Format,...) { return 0; }
#endif /* __RREGEDIT__ */

#endif /* _REGEDIT_H */
