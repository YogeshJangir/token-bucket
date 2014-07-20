//
//  warmup2-init.c
//  Warmup2-new
//
//  Created by Abhishek Trigunayat on 6/14/14.
//  Copyright (c) 2014 Abhishek Trigunayat. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include "mylist.h"
#include <sys/time.h>
#include <unistd.h>
#include <errno.h>
#include "token.h"
#include <signal.h>
#include <math.h>

void initialize(){
    My402ListInit(&Q1);
    My402ListInit(&Q2);
    tsfile_data = NULL;
    total_number_of_packets = 0;
    bucket_capacity = 0;
    token_arrival_time = 0.0;
    is_trace_driven_mode = 0;
    number_of_tokens_in_bucket = 0;
    server_thread_stop = 0;
    packet_arrival_thread_stop = 0;
    cntrl_c_signal = 0;
    average_packet_inter_arrival_time = -1.0;
    average_packet_service_time = -1.0;
    average_number_of_packets_in_Q1 = -1.0;
    average_number_of_packets_in_Q2 = -1.0;
    average_number_of_packets_at_S = -1.0;
    average_time_a_packet_spent_in_system = -1.0;
    standard_deviation_for_time_spent_in_system = -1.0;
    token_drop_probability = -1.0;
    packet_drop_probability = -1.0;
    sigemptyset(&set);
}
