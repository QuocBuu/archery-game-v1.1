#ifndef __AUDIO_H__
#define __AUDIO_H__

#include <stdint.h>

typedef struct {
	uint16_t frequency; // Frequency in Hz (range: 100 Hz to 8000 Hz)
	uint8_t  duration;  // Duration in tens of milliseconds (1 = ~10ms, 10 = ~100ms)
} Tone_TypeDef;

extern const Tone_TypeDef tones_cc[];
extern const Tone_TypeDef tones_BUM[];
extern const Tone_TypeDef tones_USB_con[];
extern const Tone_TypeDef tones_USB_dis[];
extern const Tone_TypeDef tones_Lets_go[];
extern const Tone_TypeDef tones_startup[];
extern const Tone_TypeDef tones_3beep[];
extern const Tone_TypeDef tones_SMB[];
extern const Tone_TypeDef tones_merryChristmas[];

extern const Tone_TypeDef sTone1[];
extern const Tone_TypeDef sTone2[];
extern const Tone_TypeDef sTone3[];
extern const Tone_TypeDef sTone4[];
extern const Tone_TypeDef sTone5[];
extern const Tone_TypeDef sTone6[];
extern const Tone_TypeDef sTone7[];

#endif /* __AUDIO_H__ */