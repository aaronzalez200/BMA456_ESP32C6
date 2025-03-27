#ifndef STEP_COUNTER_DRIVER_H
#define STEP_COUNTER_DRIVER_H

#include <stdio.h>
#include <inttypes.h>

int8_t initialize_bma456(void);
void enable_step_counter(void);
void get_steps(void);

#endif