// Stores structs for handling the events and queue of events
// Intended to closely mimic X11 functionality with window events

#include "d_event.h";

//List of XEvent event types and their associated integer constants
#define KeyPress        2
#define KeyRelease      3
#define ButtonPress     4
#define ButtonRelease    5

/*
#define MotionNotify    6
#define EnterNotify     7
#define LeaveNotify     8
#define FocusIn         9
#define FocusOut        10
#define KeymapNotify    11
#define Expose          12
#define GraphicsExpose  13
#define NoExpose        14
#define VisibilityNotify 15
#define CreateNotify    16
#define DestroyNotify   17
#define UnmapNotify     18
#define MapNotify       19
#define MapRequest      20
#define ReparentNotify  21
#define ConfigureNotify 22
#define ConfigureRequest 23
#define GravityNotify    24
#define ResizeRequest    25
#define CirculateNotify  26
#define CirculateRequest 27
#define PropertyNotify   28
#define SelectionClear   29
#define SelectionNotify  30
#define SelectionRequest 31
#define ColormapNotify   32
#define ClientMessage    33
#define MappingNotify    34
*/
// --------------------------

typedef struct {
    int type;
    int data1;

} XEvent;
