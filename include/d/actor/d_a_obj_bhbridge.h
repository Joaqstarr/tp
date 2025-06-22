#ifndef D_A_OBJ_BHBRIDGE_H
#define D_A_OBJ_BHBRIDGE_H

#include "SSystem/SComponent/c_sxyz.h"
#include "SSystem/SComponent/c_xyz.h"
#include "d/d_bg_s_movebg_actor.h"
#include "d/d_bg_s_acch.h"
#include "SSystem/SComponent/c_phase.h"

class J3DModel;



/**
 * @ingroup actors-objects
 * @class daObjBhbridge_c
 * @brief BH Bridge?
 *
 * @details
 *
 */
class daObjBhbridge_c : public dBgS_MoveBgActor {
public:
    /* 80BB5318 */ void RideOn_Angle(s16&, f32, s16, f32);
    /* 80BB5380 */ void Check_RideOn();
    /* 80BB558C */ void initBaseMtx();
    /* 80BB55B8 */ void setBaseMtx();
    /* 80BB5934 */ int CreateHeap();
    /* 80BB59AC */ int Create();
    /* 80BB5A14 */ int Execute(Mtx**);
    /* 80BB5E10 */ int Draw();
    /* 80BB5EB4 */ int Delete();

    /* 0x5A0 */ float mWaterStateTimer;
    /* 0x5A4 */ bool mIsInWater;
    /* 0x5A8 */ float mBounceAmplitude;
    /* 0x5AC */ u8 padding_0x5ac[4];
    /* 0x5B0 */ short mRotationOscillationAmplitude;
    /* 0x5B2 */ u8 padding_0x5b2[14];
    /* 0x5C0 */ csXyz mMiscPos1;
    /* 0x5C6 */ bool mCanPlaySubmergeSound;
    /* 0x5CA */ csXyz mRotationOscillation;
    /* 0x5D0 */ u8 padding_0x5d0[2];
    /* 0x5D2 */ short mRideRotationZOffset;
    /* 0x5D4 */ float mRideOffset;
    /* 0x5D8 */ u8 padding_0x5d8[4];
    /* 0x5DC */ short mBaseOscillationPhase;
    /* 0x5DE */ bool mIsPlayerRiding;
    /* 0x5E0 */ cXyz mMiscPos2;
    /* 0x5EC */ J3DModel *mpModel;
    /* 0x5F0 */ request_of_phase_process_class mRequestOfPhase;
    /* 0x5F8 */ dBgS_ObjAcch mDBgS_Acch;
    /* 0x7D0 */ dBgS_AcchCir mDBgS_AcchCir;

    static char* l_arcName;

};

STATIC_ASSERT(sizeof(daObjBhbridge_c) == 0x810);


#endif /* D_A_OBJ_BHBRIDGE_H */
