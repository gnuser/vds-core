// Copyright (c) 2011-2017 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#define BOOST_TEST_MODULE Vds Test Suite

#include <test/test_bitcoin.h>

#include <chainparams.h>
#include <consensus/consensus.h>
#include <consensus/validation.h>
#include <crypto/sha256.h>
#include <validation.h>
#include <miner.h>
#include <net_processing.h>
#include <ui_interface.h>
#include <streams.h>
#include <rpc/server.h>
#include <rpc/register.h>
#include <script/sigcache.h>
#include <init.h>

#include <wallet/wallet.h>
#include <boost/test/unit_test.hpp>

#include <memory>

extern CClientUIInterface uiInterface; // Declared but not defined in ui_interface.h
extern CWallet* pwalletMain;
uint256 insecure_rand_seed = GetRandHash();
FastRandomContext insecure_rand_ctx(insecure_rand_seed);

