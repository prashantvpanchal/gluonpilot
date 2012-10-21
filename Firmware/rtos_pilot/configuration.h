#ifndef CONFIGURATION_H
#define CONFIGURATION_H


#include "sensors.h"
#include "communication.h"
#include "task_control.h"
#include "osd.h"
#include "gps/gps.h"


struct Configuration
{
	struct SensorConfig sensors;
	struct TelemetryConfig telemetry;
	struct GpsConfig gps;
	struct ControlConfig control;
    struct OsdConfig osd;
};	

extern struct Configuration config;

#define V01J 1
#define V01N 2
#define V01O 3
#define V01Q 4
extern int HARDWARE_VERSION;


void configuration_default();

void configuration_load();

void configuration_write();

void configuration_determine_hardware_version();

#endif // CONFIGURATION_H
