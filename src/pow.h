// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_POW_H
#define BITCOIN_POW_H

#include <consensus/params.h>

#include <stdint.h>

class CBlockHeader;
class CBlockIndex;
class uint256;

unsigned int GetNextTargetRequired(const CBlockIndex* pindexLast);

/** Check whether a block hash satisfies the proof-of-work requirement specified by nBits */
bool CheckProofOfWork(uint256 hash, unsigned int nBits, const Consensus::Params&);
int64_t GetProofOfWorkReward(int64_t nFees,const CBlockIndex* pindex);

unsigned int calculateBlocktime(const CBlockIndex *pindex);
int64_t calculateMinerReward(const CBlockIndex* pindex);


int GetBlockRatePerHour();

#endif // BITCOIN_POW_H
