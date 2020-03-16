// Pin assignments for the Buildlog.net pen laser controller V1
// using servos.

// For pen mode be sure to uncomment #define USE_PEN_SERVO in config.h
// For solenoid  mode be sure to uncomment #define USE_PEN_SERVO in config.h
// For laser mode, you do not need to change anything
// Note: You can use all 3 modes at the same time if you want

#define MACHINE_NAME "MACHINE_SERVO_AXIS"

// Pick a board version
//#define PEN_LASER_V1
#define PEN_LASER_V2

#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_26

#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

#ifdef PEN_LASER_V1
#define X_LIMIT_PIN             GPIO_NUM_2
#endif

#ifdef PEN_LASER_V2
#define X_LIMIT_PIN             GPIO_NUM_15
#endif

#define Y_LIMIT_PIN             GPIO_NUM_4
#define LIMIT_MASK              B11

// If SPINDLE_PWM_PIN is commented out, this frees up the pin, but Grbl will still
// use a virtual spindle. Do not comment out the other parameters for the spindle.
#define SPINDLE_PWM_PIN    GPIO_NUM_17 // Laser PWM
// PWM Generator is based on 80,000,000 Hz counter
// Therefor the freq determines the resolution
// 80,000,000 / freq = max resolution
// For 5000 that is 80,000,000 / 5000 = 16000
// round down to nearest bit count for SPINDLE_PWM_MAX_VALUE
//#define SPINDLE_PWM_BASE_FREQ 5000 // Hz
#define SPINDLE_PWM_OFF_VALUE   0

#ifndef SPINDLE_PWM_MIN_VALUE
#define SPINDLE_PWM_MIN_VALUE   1   // Must be greater than zero.
#endif

#define SERVO_Y_PIN             GPIO_NUM_14
#define SERVO_Y_CHANNEL_NUM     6
#define SERVO_Y_RANGE_MIN       0.0
#define SERVO_Y_RANGE_MAX       30.0

#define SERVO_Z_PIN             GPIO_NUM_27
#define SERVO_Z_CHANNEL_NUM     5
#define SERVO_Z_RANGE_MIN       0.0
#define SERVO_Z_RANGE_MAX       20.0

// defaults
#define DEFAULT_STEP_PULSE_MICROSECONDS 3
#define DEFAULT_STEPPER_IDLE_LOCK_TIME 250 // stay on

#define DEFAULT_STEPPING_INVERT_MASK 0 // uint8_t
#define DEFAULT_DIRECTION_INVERT_MASK 0 // uint8_t
#define DEFAULT_INVERT_ST_ENABLE 0 // boolean
#define DEFAULT_INVERT_LIMIT_PINS 1 // boolean
#define DEFAULT_INVERT_PROBE_PIN 0 // boolean

#define DEFAULT_STATUS_REPORT_MASK 1

#define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
#define DEFAULT_ARC_TOLERANCE 0.002 // mm
#define DEFAULT_REPORT_INCHES 0 // false

#define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
#define DEFAULT_HARD_LIMIT_ENABLE 0  // false

#define DEFAULT_HOMING_ENABLE 0
#define DEFAULT_HOMING_DIR_MASK 0 // move positive dir Z, negative X,Y
#define DEFAULT_HOMING_FEED_RATE 200.0 // mm/min
#define DEFAULT_HOMING_SEEK_RATE 1000.0 // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF 3.0 // mm

#define DEFAULT_SPINDLE_RPM_MAX 1000.0 // rpm
#define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm

#define DEFAULT_LASER_MODE 0 // false

#define DEFAULT_X_STEPS_PER_MM 40      // half turn on a stepper
#define DEFAULT_Y_STEPS_PER_MM 100.0  // default calibration value
#define DEFAULT_Z_STEPS_PER_MM 100.0 // default calibration value

#define DEFAULT_X_MAX_RATE 2000.0 // mm/min
#define DEFAULT_Y_MAX_RATE 2000.0 // mm/min
#define DEFAULT_Z_MAX_RATE 2000.0 // mm/min

#define DEFAULT_X_ACCELERATION (50.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
#define DEFAULT_Y_ACCELERATION (50.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
#define DEFAULT_Z_ACCELERATION (50.0*60*60)

#define DEFAULT_X_MAX_TRAVEL 300.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Y_MAX_TRAVEL 100.0 // default calibration value
#define DEFAULT_Z_MAX_TRAVEL 100.0 // default calibration value