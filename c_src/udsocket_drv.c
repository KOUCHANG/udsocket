#include "erl_driver.h"

typedef struct uds_data {
} UdsData;

/**
 * Global data
 */
/* The driver entry */
ErlDrvEntry uds_driver_entry = {
    NULL,                       /* called at system start up for statically
                                   linked drivers, and after loading for
                                   dynamically loaded drivers */
    NULL,                       /* called when open_port/2 is invoked.
                                   return value -1 means failure. */
    NULL,                       /* called when port is closed, and when the
                                   emulator is halted. */
    NULL,                       /* called when we have output from erlang to the port */
    NULL,                       /* called when we have input from one of
                                   the driver's handles */
    NULL,                       /* called when output is possible to one of
                                   the driver's handles */
    "udsocket_drv",             /* name supplied as command in open_port XXX ? */
    NULL,                       /* called before unloading the driver -
                                   DYNAMIC DRIVERS ONLY */
    NULL,                       /* Reserved -- Used by emulator internally */
    NULL,                       /* "ioctl" for drivers - invoked by port_control/3 */
    NULL,                       /* Handling of timeout in driver */
    NULL,                       /* called when we have output from erlang to the port */
    NULL,
    NULL,                       /* called when the port is about to be
                                   closed, and there is data in the
                                   driver queue that needs to be flushed
                                   before 'stop' can be called */
    NULL,                       /* Works mostly like 'control', a synchronous
                                   call into the driver. */
    NULL,                       /* Called when an event selected by
                                   driver_event() has occurred */
    ERL_DRV_EXTENDED_MARKER,
    ERL_DRV_EXTENDED_MAJOR_VERSION,
    ERL_DRV_EXTENDED_MINOR_VERSION,
    0,                          /* ERL_DRV_FLAGs */
    NULL,                       /* Reserved -- Used by emulator internally */
    NULL,                       /* Called when a process monitor fires */
    NULL                        /* Called to close an event object */
};
