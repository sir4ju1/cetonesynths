#pragma once

#define FILTER_DELAY 128

#define ACCURATE_SHIFTREG 0

#define ANALOGUE_BEHAVIOR 1

#define NOTE_RANGE 1

#define MOD_CHANGE_SPEED 0.05f

#if NOTE_RANGE == 1
	#define NOTE_MAX 144
	#define NOTE_MAX1 143
	#define PITCH_MAX 14400
	#define PITCH_MAX1 14399
	#define BASE_FREQUENCE 6.875f
	#define NOTE_OFFSET 3
#elif NOTE_RANGE == 2
	#define NOTE_MAX 156
	#define NOTE_MAX1 15
	#define PITCH_MAX 15600
	#define PITCH_MAX1 15599
	#define BASE_FREQUENCE 3.4375f
	#define NOTE_OFFSET 15
#endif

#if ANALOGUE_BEHAVIOR > 0
	#define ANALOGUE_ENVELOPES 1

	#define MOOG_Q_MAX 0.95f
	#define MOOG2_Q_MAX 0.95f
	#define CH12DB_Q_MAX 0.95f
	#define DIRTY_Q_MAX 0.985f
#else
	#define ANALOGUE_ENVELOPES 0
#endif

#define WAVETABLE_LENGTH 2048
#define WAVETABLE_LENGTHf 2048.f
#define WAVETABLE_LENGTH2 1024
#define WAVETABLE_LENGTH4 512
#define WAVETABLE_MASK 2047

#define EFFECT_NAME "CetoneLight"
#define VENDOR_NAME "Neotec Software"
#define PRODUCT_NAME "CetoneLight"
#define VERSION_NUMBER 1000;

#define WAVE_SAW 0
#define WAVE_PULSE 1
#define WAVE_TRI 2
#define WAVE_SINE 3
#define WAVE_C64NOISE 4

#define WAVE_MAX 4

#define OWAVE_SAW 0
#define OWAVE_PULSE 1
#define OWAVE_TRI 2
#define OWAVE_SINE 3
#define OWAVE_C64NOISE 4

#define OWAVE_MAX 4

#define FMODE_LOW 0
#define FMODE_BAND 1
#define FMODE_HIGH 2
#define FMODE_NOTCH 3

#define FMODE_MAX 3

#define FTYPE_NONE 0
#define FTYPE_DIRTY 1
#define FTYPE_MOOG 2
#define FTYPE_MOOG2 3
#define FTYPE_CH12DB 4
#define FTYPE_303 5
#define FTYPE_8580 6
#define FTYPE_BUDDA 7

#define FTYPE_MAX 7

#define MOD_SRC_NONE 0
#define MOD_SRC_VEL 1
#define MOD_SRC_CTRL1 2
#define MOD_SRC_MENV1 3
#define MOD_SRC_LFO1 4
#define MOD_SRC_MENV1xLFO1 5

#define MOD_SRC_MAX 5

#define MOD_DEST_MAINVOL 0
#define MOD_DEST_PANNING 1
#define MOD_DEST_CUTOFF 2
#define MOD_DEST_RESONANCE 3
#define MOD_DEST_MAINPITCH 4
#define MOD_DEST_OSC1VOL 5
#define MOD_DEST_OSC2VOL 6
#define MOD_DEST_OSC3VOL 7
#define MOD_DEST_OSC1PITCH 8
#define MOD_DEST_OSC2PITCH 9
#define MOD_DEST_OSC3PITCH 10
#define MOD_DEST_OSC1PW 11
#define MOD_DEST_OSC2PW 12
#define MOD_DEST_OSC3PW 13
#define MOD_DEST_LFO1SPEED 14
#define MOD_DEST_ENVMOD 15

#define MOD_DEST_MAX 15

#define ARP_MAX 7
