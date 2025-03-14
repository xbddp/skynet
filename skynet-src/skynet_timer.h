#ifndef SKYNET_TIMER_H
#define SKYNET_TIMER_H

#include <stdint.h>

int skynet_timeout(uint32_t handle, int time, int session);
void skynet_updatetime(void);
uint32_t skynet_starttime(void);
uint64_t skynet_thread_time(void);	// for profile, in micro second
void skynet_time_fast(uint32_t addtime);

void skynet_timer_init(void);

//录像用
void skynet_timer_setstarttime(uint32_t time);
void skynet_timer_setcurrent(uint64_t current);

#endif
