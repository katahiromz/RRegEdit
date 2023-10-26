#include <windef.h>
#include <wine/debug.h>

const char *wine_dbgstr_wn( const WCHAR *s, int n )
{
    return NULL;
}

int ros_dbg_log(enum __wine_debug_class cls, struct __wine_debug_channel *ch, const char *file,
                const char *func, const int line, const char *format, ... ) __WINE_PRINTF_ATTR(6,7)
{
    return 0;
}

int wine_dbg_printf( const char *format, ... ) __WINE_PRINTF_ATTR(1,2)
{
    return 0;
}
