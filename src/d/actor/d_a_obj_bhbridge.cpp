/**
 * @file d_a_obj_bhbridge.cpp
 * 
*/

#include "d/actor/d_a_obj_bhbridge.h"
#include "f_op/f_op_actor_mng.h"
#include "dol2asm.h"
#include "d/d_bg_w.h"
#include "d/d_bg_s.h"
#include "d/d_com_inf_game.h"
#include "d/d_s_play.h"
#include "d/actor/d_a_player.h"
#include "m_do/m_Do_mtx.h"
#include "SSystem/SComponent/c_lib.h"
//
// Forward References:
//

extern "C" void RideOn_Angle__15daObjBhbridge_cFRsfsf();
extern "C" void Check_RideOn__15daObjBhbridge_cFv();
extern "C" void initBaseMtx__15daObjBhbridge_cFv();
extern "C" void setBaseMtx__15daObjBhbridge_cFv();

extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void CreateHeap__15daObjBhbridge_cFv();
extern "C" void Create__15daObjBhbridge_cFv();
extern "C" void Execute__15daObjBhbridge_cFPPA3_A4_f();
extern "C" void Draw__15daObjBhbridge_cFv();
extern "C" void Delete__15daObjBhbridge_cFv();

extern "C" extern char const* const d_a_obj_bhbridge__stringBase0;

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];

extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80BB5F00-80BB5F08 000000 0008+00 5/5 0/0 0/0 .rodata          @3655 */
SECTION_RODATA static u8 const lit_3655[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BB5F00, &lit_3655);

/* 80BB5318-80BB5380 000078 0068+00 1/1 0/0 0/0 .text RideOn_Angle__15daObjBhbridge_cFRsfsf */
void daObjBhbridge_c::RideOn_Angle(s16& param_1, f32 param_2, s16 param_3, f32 param_4) {
    cLib_addCalcAngleS(&param_1, (s16)(param_3 * (param_2 / param_4)), 1, 256, 1);
}

/* ############################################################################################## */
/* 80BB5F08-80BB5F10 000008 0004+04 0/2 0/0 0/0 .rodata          @3703 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3703[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BB5F08, &lit_3703);
#pragma pop

/* 80BB5F10-80BB5F18 000010 0008+00 0/1 0/0 0/0 .rodata          @3704 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3704[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BB5F10, &lit_3704);
#pragma pop

/* 80BB5F18-80BB5F20 000018 0008+00 0/1 0/0 0/0 .rodata          @3705 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3705[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BB5F18, &lit_3705);
#pragma pop

/* 80BB5F20-80BB5F28 000020 0008+00 0/1 0/0 0/0 .rodata          @3706 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3706[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BB5F20, &lit_3706);
#pragma pop

/* 80BB5F28-80BB5F2C 000028 0004+00 0/1 0/0 0/0 .rodata          @3707 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3707 = 180.0f;
COMPILER_STRIP_GATE(0x80BB5F28, &lit_3707);
#pragma pop

/* 80BB5F2C-80BB5F30 00002C 0004+00 0/2 0/0 0/0 .rodata          @3708 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3708 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80BB5F2C, &lit_3708);
#pragma pop

/* 80BB5F30-80BB5F34 000030 0004+00 0/3 0/0 0/0 .rodata          @3709 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3709 = 100.0f;
COMPILER_STRIP_GATE(0x80BB5F30, &lit_3709);
#pragma pop

/* 80BB5380-80BB558C 0000E0 020C+00 1/1 0/0 0/0 .text            Check_RideOn__15daObjBhbridge_cFv
 */
int daObjBhbridge_c::Check_RideOn() {
    daPy_py_c* player = daPy_getLinkPlayerActorClass();
	Vec* player_pos = (Vec*)fopAcM_GetPosition_p(player);
    short added_calc = 0;
	mIsPlayerRiding = true;

    s16 target_angle = cLib_targetAngleY(&current.pos, player_pos);
    f32 pos_abs = current.pos.abs(*player_pos);

    f32 cos = cM_scos(target_angle - shape_angle.y);

    RideOn_Angle(mRotationOscillation.z, pos_abs * cos, 80, 180.0f);

  	mIsPlayerRiding = true;

 	if(fopAcM_GetSpeedF(player) >  0.0f) {
        added_calc = 1024;
		mRotationOscillationAmplitude = 336.f;
    }

    mRideOffset = 0.f;

	cLib_addCalc(&mWaterStateTimer, (f32)added_calc, HREG_F(13)+0.05f, 100, 0);
    return 0;
}

/* 80BB558C-80BB55B8 0002EC 002C+00 1/1 0/0 0/0 .text            initBaseMtx__15daObjBhbridge_cFv */
void daObjBhbridge_c::initBaseMtx() {
    fopAcM_SetMtx(this, mpModel->getBaseTRMtx());
    setBaseMtx();
}

/* 80BB55B8-80BB5614 000318 005C+00 2/2 0/0 0/0 .text            setBaseMtx__15daObjBhbridge_cFv */
void daObjBhbridge_c::setBaseMtx() {
    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::ZXYrotM(shape_angle);
    mpModel->setBaseTRMtx(mDoMtx_stack_c::get());
    cMtx_copy(mDoMtx_stack_c::get(), mBgMtx);
}

/* ############################################################################################## */
/* 80BB5F34-80BB5F38 000034 0004+00 1/2 0/0 0/0 .rodata          @3758 */
SECTION_RODATA static f32 const lit_3758 = -1.0f;
COMPILER_STRIP_GATE(0x80BB5F34, &lit_3758);

/* 80BB5F38-80BB5F3C 000038 0004+00 1/1 0/0 0/0 .rodata          @3759 */
SECTION_RODATA static f32 const lit_3759 = -6.0f;
COMPILER_STRIP_GATE(0x80BB5F38, &lit_3759);

/* 80BB5614-80BB5678 000374 0064+00 1/1 0/0 0/0 .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
static void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    // NONMATCHING
}

/* 80BB5678-80BB56A4 0003D8 002C+00 1/0 0/0 0/0 .text daObjBhbridge_Draw__FP15daObjBhbridge_c */
static void daObjBhbridge_Draw(daObjBhbridge_c* param_0) {
    param_0->MoveBGDraw();
}

/* 80BB56A4-80BB56C4 000404 0020+00 1/0 0/0 0/0 .text daObjBhbridge_Execute__FP15daObjBhbridge_c
 */
static void daObjBhbridge_Execute(daObjBhbridge_c* param_0) {
    param_0->MoveBGExecute();
}

/* 80BB56C4-80BB56CC 000424 0008+00 1/0 0/0 0/0 .text daObjBhbridge_IsDelete__FP15daObjBhbridge_c
 */
static bool daObjBhbridge_IsDelete(daObjBhbridge_c* param_0) {
    return true;
}

/* 80BB56CC-80BB56F0 00042C 0024+00 1/0 0/0 0/0 .text daObjBhbridge_Delete__FP15daObjBhbridge_c */
static int daObjBhbridge_Delete(daObjBhbridge_c* param_0) {
    param_0->MoveBGDelete();

    return 1;
}

/* ############################################################################################## */
/* 80BB5F3C-80BB5F40 00003C 0004+00 0/2 0/0 0/0 .rodata          @3833 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3833 = 300.0f;
COMPILER_STRIP_GATE(0x80BB5F3C, &lit_3833);
#pragma pop

/* 80BB5F40-80BB5F44 000040 0004+00 0/1 0/0 0/0 .rodata          @3834 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3834 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80BB5F40, &lit_3834);
#pragma pop

/* 80BB5F84-80BB5F84 000084 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BB5F84 = "BHBridge";
SECTION_DEAD static char const* const stringBase_80BB5F8D = "M_BHbridge.dzb";
#pragma pop

/* 80BB5FAC-80BB5FB0 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
char* daObjBhbridge_c::l_arcName = (char*)&d_a_obj_bhbridge__stringBase0;




/* 80BB56F0-80BB58C4 000450 01D4+00 1/0 0/0 0/0 .text daObjBhbridge_Create__FP10fopAc_ac_c */
int daObjBhbridge_Create(fopAc_ac_c* i_this) {
    // NONMATCHING

    daObjBhbridge_c* a_this = static_cast<daObjBhbridge_c*>(i_this)
        ;
    fopAcM_SetupActor(i_this, daObjBhbridge_c);


    int i_res_load_result = dComIfG_resLoad(&a_this->mRequestOfPhase, daObjBhbridge_c::l_arcName);
    if (i_res_load_result != cPhs_COMPLEATE_e) {

        int i_res_load_result_2 = dComIfG_getObjctResName2Index(daObjBhbridge_c::l_arcName, "M_BHbridge.dzb");

        int move_bg_create_status = a_this->MoveBGCreate(daObjBhbridge_c::l_arcName, i_res_load_result_2, dBgS_MoveBGProc_TypicalRotY, 5536, NULL);
        if(move_bg_create_status == cPhs_ERROR_e){
            return cPhs_ERROR_e;
        }

        a_this->mDBgS_Acch.Set(fopAcM_GetPosition_p(i_this), fopAcM_GetOldPosition_p(i_this), i_this, 1,
                               &a_this->mDBgS_AcchCir, fopAcM_GetSpeed_p(i_this), NULL, NULL);

        dBgS& i_dBgS = dComIfG_Bgsp();

        a_this->mDBgS_Acch.CrrPos(i_dBgS);

        cXyz i_position(i_this->current.pos);
        i_position.y = i_position.y + 300.0f;
        dBgS_ObjGndChk_Spl i_gnd_chk;

        i_gnd_chk.SetPos(&i_position);

        dBgS& i_dBgS_2 = dComIfG_Bgsp();

        f32 i_gnd_y = i_dBgS_2.GroundCross(&i_gnd_chk);
        if(i_gnd_y != -1e+09f){
            i_this->current.pos.y = i_gnd_y + 100.0f;
        }

        return move_bg_create_status;
    }
    return i_res_load_result;
}





static char const* const stringBase0 = "M_BHbridge.bmd";


/* 80BB5934-80BB59AC 000694 0078+00 1/0 0/0 0/0 .text            CreateHeap__15daObjBhbridge_cFv */
int daObjBhbridge_c::CreateHeap() {

    J3DModelData* model_data = (J3DModelData*)dComIfG_getObjectRes(daObjBhbridge_c::l_arcName, stringBase0);
	mpModel = mDoExt_J3DModel__create(model_data,  0x80000, 0x11000084);

	return mpModel != NULL ? 1 : 0;

}

/* ############################################################################################## */
/* 80BB5F44-80BB5F48 000044 0004+00 0/1 0/0 0/0 .rodata          @3853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3853 = -400.0f;
COMPILER_STRIP_GATE(0x80BB5F44, &lit_3853);
#pragma pop

/* 80BB5F48-80BB5F4C 000048 0004+00 0/1 0/0 0/0 .rodata          @3854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3854 = -800.0f;
COMPILER_STRIP_GATE(0x80BB5F48, &lit_3854);
#pragma pop

/* 80BB5F4C-80BB5F50 00004C 0004+00 0/1 0/0 0/0 .rodata          @3855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3855 = -1000.0f;
COMPILER_STRIP_GATE(0x80BB5F4C, &lit_3855);
#pragma pop

/* 80BB5F50-80BB5F54 000050 0004+00 0/1 0/0 0/0 .rodata          @3856 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3856 = 400.0f;
COMPILER_STRIP_GATE(0x80BB5F50, &lit_3856);
#pragma pop

/* 80BB5F54-80BB5F58 000054 0004+00 0/1 0/0 0/0 .rodata          @3857 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3857 = 1000.0f;
COMPILER_STRIP_GATE(0x80BB5F54, &lit_3857);
#pragma pop

/* 80BB59AC-80BB5A14 00070C 0068+00 1/0 0/0 0/0 .text            Create__15daObjBhbridge_cFv */
int daObjBhbridge_c::Create() {
    // NONMATCHING

    fopAcM_setCullSizeBox(this, -400.0,-800.0,-1000.0,400.0,300.0,1000.0);
    initBaseMtx();
    mpBgW->SetRideCallback(rideCallBack);

    return 4;
}

/* ############################################################################################## */
/* 80BB5F58-80BB5F5C 000058 0004+00 0/1 0/0 0/0 .rodata          @3891 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3891 = 1.0f;
COMPILER_STRIP_GATE(0x80BB5F58, &lit_3891);
#pragma pop

/* 80BB5F5C-80BB5F60 00005C 0004+00 0/1 0/0 0/0 .rodata          @3892 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3892 = 848.0f;
COMPILER_STRIP_GATE(0x80BB5F5C, &lit_3892);
#pragma pop

/* 80BB5F60-80BB5F64 000060 0004+00 0/1 0/0 0/0 .rodata          @3893 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3893 = 2.0f;
COMPILER_STRIP_GATE(0x80BB5F60, &lit_3893);
#pragma pop

/* 80BB5F64-80BB5F68 000064 0004+00 0/1 0/0 0/0 .rodata          @3894 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3894 = 512.0f;
COMPILER_STRIP_GATE(0x80BB5F64, &lit_3894);
#pragma pop

/* 80BB5F68-80BB5F6C 000068 0004+00 0/1 0/0 0/0 .rodata          @3895 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3895 = 256.0f;
COMPILER_STRIP_GATE(0x80BB5F68, &lit_3895);
#pragma pop

/* 80BB5F6C-80BB5F70 00006C 0004+00 0/1 0/0 0/0 .rodata          @3896 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3896 = 11.0f;
COMPILER_STRIP_GATE(0x80BB5F6C, &lit_3896);
#pragma pop

/* 80BB5F70-80BB5F74 000070 0004+00 0/1 0/0 0/0 .rodata          @3897 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3897 = 5.0f;
COMPILER_STRIP_GATE(0x80BB5F70, &lit_3897);
#pragma pop

/* 80BB5F74-80BB5F78 000074 0004+00 0/1 0/0 0/0 .rodata          @3898 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3898 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BB5F74, &lit_3898);
#pragma pop

/* 80BB5F78-80BB5F7C 000078 0004+00 0/1 0/0 0/0 .rodata          @3899 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3899 = 15.0f;
COMPILER_STRIP_GATE(0x80BB5F78, &lit_3899);
#pragma pop

/* 80BB5F7C-80BB5F80 00007C 0004+00 0/1 0/0 0/0 .rodata          @3900 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3900 = 0.5f;
COMPILER_STRIP_GATE(0x80BB5F7C, &lit_3900);
#pragma pop

/* 80BB5F80-80BB5F84 000080 0004+00 0/1 0/0 0/0 .rodata          @3901 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3901 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BB5F80, &lit_3901);
#pragma pop

/* 80BB5A14-80BB5E10 000774 03FC+00 1/0 0/0 0/0 .text Execute__15daObjBhbridge_cFPPA3_A4_f */
int daObjBhbridge_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80BB5E10-80BB5EB4 000B70 00A4+00 1/0 0/0 0/0 .text            Draw__15daObjBhbridge_cFv */
int daObjBhbridge_c::Draw() {
    // NONMATCHING
}

/* 80BB5EB4-80BB5EE8 000C14 0034+00 1/0 0/0 0/0 .text            Delete__15daObjBhbridge_cFv */
int daObjBhbridge_c::Delete() {
    // NONMATCHING
	dComIfG_resDelete(&mRequestOfPhase, daObjBhbridge_c::l_arcName);

    return 1;
}

/* 80BB5EE8-80BB5EF0 000C48 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80BB5EE8() {
    // NONMATCHING
}

/* 80BB5EF0-80BB5EF8 000C50 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80BB5EF0() {
    // NONMATCHING
}

/* 80BB5F84-80BB5F84 000084 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */

/* 80BB5FB0-80BB5FD0 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjBhbridge_Method */
static actor_method_class l_daObjBhbridge_Method = {
    (process_method_func)daObjBhbridge_Create,
    (process_method_func)daObjBhbridge_Delete,
    (process_method_func)daObjBhbridge_Execute,
    (process_method_func)daObjBhbridge_IsDelete,
    (process_method_func)daObjBhbridge_Draw,
};

/* 80BB5FD0-80BB6000 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Bhbridge */
extern actor_process_profile_definition g_profile_Obj_Bhbridge = {
    fpcLy_CURRENT_e,         // mLayerID
    3,                       // mListID
    fpcPi_CURRENT_e,         // mListPrio
    PROC_Obj_Bhbridge,       // mProcName
    &g_fpcLf_Method.base,   // sub_method
    sizeof(daObjBhbridge_c), // mSize
    0,                       // mSizeOther
    0,                       // mParameters
    &g_fopAc_Method.base,    // sub_method
    459,                     // mPriority
    &l_daObjBhbridge_Method, // sub_method
    0x00040180,              // mStatus
    fopAc_ACTOR_e,           // mActorType
    fopAc_CULLBOX_CUSTOM_e,  // cullType
  };