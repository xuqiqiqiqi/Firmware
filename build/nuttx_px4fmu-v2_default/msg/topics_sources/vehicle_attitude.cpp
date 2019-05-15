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

/* Auto-generated by genmsg_cpp from file vehicle_attitude.msg */


#include <cinttypes>
#include <px4_log.h>
#include <px4_defines.h>
#include <uORB/topics/vehicle_attitude.h>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_vehicle_attitude_fields[] = "uint64_t timestamp;float rollspeed;float pitchspeed;float yawspeed;float[4] q;float[4] delta_q_reset;uint8_t quat_reset_counter;uint8_t[3] _padding0;";

ORB_DEFINE(vehicle_attitude, struct vehicle_attitude_s, 53, __orb_vehicle_attitude_fields);
ORB_DEFINE(vehicle_attitude_groundtruth, struct vehicle_attitude_s, 53, __orb_vehicle_attitude_fields);
ORB_DEFINE(vehicle_vision_attitude, struct vehicle_attitude_s, 53, __orb_vehicle_attitude_fields);


void print_message(const vehicle_attitude_s& message)
{
	PX4_INFO_RAW(" vehicle_attitude_s\n");
	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\trollspeed: %.4f\n", (double)message.rollspeed);
	PX4_INFO_RAW("\tpitchspeed: %.4f\n", (double)message.pitchspeed);
	PX4_INFO_RAW("\tyawspeed: %.4f\n", (double)message.yawspeed);
	PX4_INFO_RAW("\tq: [%.4f, %.4f, %.4f, %.4f]\n", (double)message.q[0], (double)message.q[1], (double)message.q[2], (double)message.q[3]);
	PX4_INFO_RAW("\tdelta_q_reset: [%.4f, %.4f, %.4f, %.4f]\n", (double)message.delta_q_reset[0], (double)message.delta_q_reset[1], (double)message.delta_q_reset[2], (double)message.delta_q_reset[3]);
	PX4_INFO_RAW("\tquat_reset_counter: %u\n", message.quat_reset_counter);
	
}
