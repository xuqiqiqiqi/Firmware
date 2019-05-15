/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file transponder_report.msg */


#include <cinttypes>
#include <px4_log.h>
#include <px4_defines.h>
#include <uORB/topics/transponder_report.h>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_transponder_report_fields[] = "uint64_t timestamp;double lat;double lon;uint32_t icao_address;float altitude;float heading;float hor_velocity;float ver_velocity;uint16_t flags;uint16_t squawk;uint8_t altitude_type;char[9] callsign;uint8_t emitter_type;uint8_t tslc;uint8_t[4] _padding0;";

ORB_DEFINE(transponder_report, struct transponder_report_s, 60, __orb_transponder_report_fields);


void print_message(const transponder_report_s& message)
{
	PX4_INFO_RAW(" transponder_report_s\n");
	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tlat: %.6f\n", message.lat);
	PX4_INFO_RAW("\tlon: %.6f\n", message.lon);
	PX4_INFO_RAW("\ticao_address: %" PRIu32 "\n", message.icao_address);
	PX4_INFO_RAW("\taltitude: %.4f\n", (double)message.altitude);
	PX4_INFO_RAW("\theading: %.4f\n", (double)message.heading);
	PX4_INFO_RAW("\thor_velocity: %.4f\n", (double)message.hor_velocity);
	PX4_INFO_RAW("\tver_velocity: %.4f\n", (double)message.ver_velocity);
	PX4_INFO_RAW("\tflags: %u\n", message.flags);
	PX4_INFO_RAW("\tsquawk: %u\n", message.squawk);
	PX4_INFO_RAW("\taltitude_type: %u\n", message.altitude_type);
	PX4_INFO_RAW("\tcallsign: [%c, %c, %c, %c, %c, %c, %c, %c, %c]\n", message.callsign[0], message.callsign[1], message.callsign[2], message.callsign[3], message.callsign[4], message.callsign[5], message.callsign[6], message.callsign[7], message.callsign[8]);
	PX4_INFO_RAW("\temitter_type: %u\n", message.emitter_type);
	PX4_INFO_RAW("\ttslc: %u\n", message.tslc);
	
}
