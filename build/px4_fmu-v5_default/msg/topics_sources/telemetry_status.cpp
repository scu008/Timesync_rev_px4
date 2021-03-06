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

/* Auto-generated by genmsg_cpp from file telemetry_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/telemetry_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_telemetry_status_fields[] = "uint64_t timestamp;float data_rate;float rate_multiplier;float rate_rx;float rate_tx;float rate_txerr;uint8_t type;uint8_t mode;bool flow_control;bool forwarding;bool mavlink_v2;bool ftp;uint8_t streams;bool heartbeat_type_antenna_tracker;bool heartbeat_type_gcs;bool heartbeat_type_onboard_controller;bool heartbeat_type_gimbal;bool heartbeat_type_adsb;bool heartbeat_type_camera;bool heartbeat_component_telemetry_radio;bool heartbeat_component_log;bool heartbeat_component_osd;bool heartbeat_component_obstacle_avoidance;bool heartbeat_component_vio;bool heartbeat_component_pairing_manager;bool heartbeat_component_udp_bridge;bool heartbeat_component_uart_bridge;bool avoidance_system_healthy;uint8_t[6] _padding0;";

ORB_DEFINE(telemetry_status, struct telemetry_status_s, 50, __orb_telemetry_status_fields, static_cast<uint8_t>(ORB_ID::telemetry_status));


void print_message(const telemetry_status_s &message)
{

	PX4_INFO_RAW(" telemetry_status_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tdata_rate: %.4f\n", (double)message.data_rate);
	PX4_INFO_RAW("\trate_multiplier: %.4f\n", (double)message.rate_multiplier);
	PX4_INFO_RAW("\trate_rx: %.4f\n", (double)message.rate_rx);
	PX4_INFO_RAW("\trate_tx: %.4f\n", (double)message.rate_tx);
	PX4_INFO_RAW("\trate_txerr: %.4f\n", (double)message.rate_txerr);
	PX4_INFO_RAW("\ttype: %u\n", message.type);
	PX4_INFO_RAW("\tmode: %u\n", message.mode);
	PX4_INFO_RAW("\tflow_control: %s\n", (message.flow_control ? "True" : "False"));
	PX4_INFO_RAW("\tforwarding: %s\n", (message.forwarding ? "True" : "False"));
	PX4_INFO_RAW("\tmavlink_v2: %s\n", (message.mavlink_v2 ? "True" : "False"));
	PX4_INFO_RAW("\tftp: %s\n", (message.ftp ? "True" : "False"));
	PX4_INFO_RAW("\tstreams: %u\n", message.streams);
	PX4_INFO_RAW("\theartbeat_type_antenna_tracker: %s\n", (message.heartbeat_type_antenna_tracker ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_type_gcs: %s\n", (message.heartbeat_type_gcs ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_type_onboard_controller: %s\n", (message.heartbeat_type_onboard_controller ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_type_gimbal: %s\n", (message.heartbeat_type_gimbal ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_type_adsb: %s\n", (message.heartbeat_type_adsb ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_type_camera: %s\n", (message.heartbeat_type_camera ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_telemetry_radio: %s\n", (message.heartbeat_component_telemetry_radio ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_log: %s\n", (message.heartbeat_component_log ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_osd: %s\n", (message.heartbeat_component_osd ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_obstacle_avoidance: %s\n", (message.heartbeat_component_obstacle_avoidance ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_vio: %s\n", (message.heartbeat_component_vio ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_pairing_manager: %s\n", (message.heartbeat_component_pairing_manager ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_udp_bridge: %s\n", (message.heartbeat_component_udp_bridge ? "True" : "False"));
	PX4_INFO_RAW("\theartbeat_component_uart_bridge: %s\n", (message.heartbeat_component_uart_bridge ? "True" : "False"));
	PX4_INFO_RAW("\tavoidance_system_healthy: %s\n", (message.avoidance_system_healthy ? "True" : "False"));
	
}
