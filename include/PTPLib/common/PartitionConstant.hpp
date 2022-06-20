/*
 * Copyright (c) 2022, Antti Hyvarinen <antti.hyvarinen@gmail.com>
 * Copyright (c) 2022, Seyedmasoud Asadzadeh <seyedmasoud.asadzadeh@usi.ch>
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef PTPLIB_COMMON_PARTITIONCONSTANT_HPP
#define PTPLIB_COMMON_PARTITIONCONSTANT_HPP

#include <iostream>

namespace PTPLib::common
{
    typedef const std::string CONST_STRING;
    typedef const std::size_t CONST_SIZE;

    static struct
    {
        CONST_STRING PARTITION = "partition";
        CONST_STRING STOP = "stop";
        CONST_STRING CLAUSEINJECTION = "inject";
        CONST_STRING INCREMENTAL = "incremental";
        CONST_STRING CNFCLAUSES = "cnf-clauses";
        CONST_STRING CNFLEARNTS = "cnf-learnts";
        CONST_STRING SOLVE = "solve";
        CONST_STRING LEMMAS = "lemmas";
        CONST_STRING TERMINATE = "terminate";
        CONST_STRING RESUME = "resume";
    } Command;

    static struct
    {
        CONST_STRING NODE = "node";
        CONST_STRING NODE_ = "node_";
        CONST_STRING COMMAND = "command";
        CONST_STRING QUERY = "query";
        CONST_STRING NAME = "name";
        CONST_STRING SEED = "seed";
        CONST_STRING SPLIT_TYPE = "split-type";
        CONST_STRING SPLIT_PREFERENCE = "split-preference";
        CONST_STRING PARTITIONS = "partitions";
        CONST_STRING OPENSMT2 = "OpenSMT2";
        CONST_STRING SPACER = "Spacer";
        CONST_STRING SALLY = "SALLY";
        CONST_STRING SOLVER = "solver";
        CONST_STRING REPORT = "report";
        CONST_STRING MAX_MEMORY = "max_memory";
        CONST_STRING SCATTER_SPLIT = "scatter-split";
        CONST_STRING SEARCH_COUNTER = "search_counter";
        CONST_STRING STATUS_INFO = "status_info";
        CONST_STRING LEMMA_AMOUNT = "lemma_amount";
        CONST_STRING LOG_MODE = "enableLog";
        CONST_STRING L_PUSH_MIN = "lemma_push_min";
        CONST_STRING L_PUSH_Max = "lemma_push_max";
        CONST_STRING L_PULL_MIN = "lemma_pull_min";
        CONST_STRING L_PULL_MAX= "lemma_pull_max";

    } Param;

    static struct {
        CONST_SIZE MAX_SIZE = 10000;
    } STATS;

    enum TASK
    {
        MEMORYCHECK, COMMUNICATION, CLAUSEPUSH, CLAUSEPULL, SOLVER, CLAUSELEARN
    };

    static CONST_STRING TASK_STR[] = { "MEMORYCHECK", "COMMUNICATION", "CLAUSEPUSH", "CLAUSEPULL", "SOLVER", "CLAUSELEARN" };
}

#endif // PTPLIB_COMMON_PARTITIONCONSTANT_HPP