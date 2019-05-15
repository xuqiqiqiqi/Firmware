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

/* Auto-generated by genmsg_cpp from file vehicle_command.msg */


#include <cinttypes>
#include <px4_log.h>
#include <px4_defines.h>
#include <uORB/topics/vehicle_command.h>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_vehicle_command_fields[] = "uint64_t timestamp;double param5;double param6;float param1;float param2;float param3;float param4;float param7;uint16_t command;uint8_t target_system;uint8_t target_component;uint8_t source_system;uint8_t source_component;uint8_t confirmation;bool from_external;uint8_t[4] _padding0;";

ORB_DEFINE(vehicle_command, struct vehicle_command_s, 52, __orb_vehicle_command_fields);


void print_message(const vehicle_command_s& message)
{
	PX4_INFO_RAW(" vehicle_command_s\n");
	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tparam5: %.6f\n", message.param5);
	PX4_INFO_RAW("\tparam6: %.6f\n", message.param6);
	PX4_INFO_RAW("\tparam1: %.4f\n", (double)message.param1);
	PX4_INFO_RAW("\tparam2: %.4f\n", (double)message.param2);
	PX4_INFO_RAW("\tparam3: %.4f\n", (double)message.param3);
	PX4_INFO_RAW("\tparam4: %.4f\n", (double)message.param4);
	PX4_INFO_RAW("\tparam7: %.4f\n", (double)message.param7);
	PX4_INFO_RAW("\tcommand: %u\n", message.command);
	PX4_INFO_RAW("\ttarget_system: %u\n", message.target_system);
	PX4_INFO_RAW("\ttarget_component: %u\n", message.target_component);
	PX4_INFO_RAW("\tsource_system: %u\n", message.source_system);
	PX4_INFO_RAW("\tsource_component: %u\n", message.source_component);
	PX4_INFO_RAW("\tconfirmation: %u\n", message.confirmation);
	PX4_INFO_RAW("\tfrom_external: %s\n", (message.from_external ? "True" : "False"));
	
}
