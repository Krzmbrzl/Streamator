#define PREFIX Streamator
#define PATH tc
#define MOD Streamator

// Define version information
#define MAJOR 0
#define MINOR 1
#define PATCHLVL 0
#define BUILD 100

#ifdef VERSION
    #undef VERSION
#endif
#ifdef VERSION_AR
    #undef VERSION_AR
#endif
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD

// Do not release with this setting enabled!
// #define DEBUGFULL // Enable all debug methods
#define ISDEV // Enable better logging
// #define ENABLEPERFORMANCECOUNTER // Enable performance counter for function calls
// #define ENABLEFUNCTIONTRACE // Enable SQF based function tracer
// #define DISABLECOMPRESSION

#include "\tc\CLib\addons\CLib\macros.hpp"

#define ERROR_LOG(var) SYSLOGGING("Error", var)

#define CAMERAMODE_FREE 1
#define CAMERAMODE_FOLLOW 2
#define CAMERAMODE_SHOULDER 3
#define CAMERAMODE_TOPDOWN 4
#define CAMERAMODE_FPS 5
#define CAMERAMODE_ORBIT 6

#define INPUTMODE_MOVE 0
#define INPUTMODE_SEARCH 1
#define INPUTMODE_PLANINGMODE 2
