#pragma once

#include <errno.h>

#ifndef SI_ACCESS_SPECIFIC
#define SI_ACCESS_SPECIFIC          0x00010000
#define SI_ACCESS_GENERAL           0x00020000
#define SI_ACCESS_CONTAINER         0x00040000
#define SI_ACCESS_PROPERTY          0x00080000
#endif

#ifndef SI_EDIT_PERMS
#define SI_EDIT_PERMS               0x00000000
#define SI_EDIT_OWNER               0x00000001
#define SI_EDIT_AUDITS              0x00000002
#define SI_CONTAINER                0x00000004
#define SI_READONLY                 0x00000008
#define SI_ADVANCED                 0x00000010
#define SI_RESET                    0x00000020
#define SI_OWNER_READONLY           0x00000040
#define SI_EDIT_PROPERTIES          0x00000080
#define SI_OWNER_RECURSE            0x00000100
#define SI_NO_ACL_PROTECT           0x00000200
#define SI_NO_TREE_APPLY            0x00000400
#define SI_PAGE_TITLE               0x00000800
#define SI_SERVER_IS_DC             0x00001000
#define SI_RESET_DACL_TREE          0x00004000
#define SI_RESET_SACL_TREE          0x00008000
#define SI_OBJECT_GUID              0x00010000
#define SI_EDIT_EFFECTIVE           0x00020000
#define SI_RESET_DACL               0x00040000
#define SI_RESET_SACL               0x00080000
#define SI_RESET_OWNER              0x00100000
#define SI_NO_ADDITIONAL_PERMISSION 0x00200000
#define SI_MAY_WRITE                0x10000000
#define SI_EDIT_ALL                 (SI_EDIT_OWNER |SI_EDIT_PERMS | SI_EDIT_AUDITS)

typedef struct _SI_OBJECT_INFO
{
    DWORD     dwFlags;
    HINSTANCE hInstance;
    LPWSTR    pszServerName;
    LPWSTR    pszObjectName;
    LPWSTR    pszPageTitle;
    GUID      guidObjectType;
} SI_OBJECT_INFO, *PSI_OBJECT_INFO;

typedef struct _SI_ACCESS
{
    const GUID  *pguid;
    ACCESS_MASK mask;
    LPCWSTR     pszName;
    DWORD       dwFlags;
} SI_ACCESS, *PSI_ACCESS;

typedef struct _SI_INHERIT_TYPE
{
    const GUID *pguid;
    ULONG      dwFlags;
    LPCWSTR    pszName;
} SI_INHERIT_TYPE, *PSI_INHERIT_TYPE;

typedef enum _SI_PAGE_TYPE
{
    SI_PAGE_PERM = 0,
    SI_PAGE_ADVPERM,
    SI_PAGE_AUDIT,
    SI_PAGE_OWNER
} SI_PAGE_TYPE;
#endif
