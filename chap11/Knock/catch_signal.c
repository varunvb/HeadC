#include <stdio.h>
#include <string.h>
#include <signal.h>
#include "catch_signal.h"

int catch_signal (int sig, void (*handler)(int))
{
    struct sigaction action;
    action.sa_handler = handler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    return sigaction (sig, &action, NULL);
}
