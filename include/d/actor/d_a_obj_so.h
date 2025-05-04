#ifndef D_A_OBJ_SO_H
#define D_A_OBJ_SO_H

#include "f_op/f_op_actor_mng.h"
#include "SSystem/SComponent/c_phase.h"


class J3DModel;


/**
 * @ingroup actors-objects
 * @class obj_so_class
 * @brief Monkey Cage
 *
 * @details
 *
 */
class obj_so_class : public fopAc_ac_c {

public:
    /* 0x568 */ request_of_phase_process_class mPhase;
    /* 0x570 */ u8 field_0x570;
    /* 0x571 */ u8 field_0x571;
    /* 0x572 */ u8 field_0x572[2];
	/* 0x574 */ J3DModel* mpModel;
    /* 0x578 */ u8 field_0x578[28];
    /* 0x594 */ J3DModel* mpPartModels[26];
    /* 0x5fc */ u8 mPartDrawFlags[26];
    /* 0x616 */ u8 field_0x616[2];
	/* 0x618 */ cXyz mPartWorldPositions[26];
    /* 0x750 */ u8 field_0x750[105];
	/* 0x7b8 */ cXyz mPartScale[26];
    /* 0x8f0 */ cXyz mPartRandPos[26];

};


STATIC_ASSERT(sizeof(obj_so_class) == 0x1bd0);

class daObj_So_HIO_c {
public:
    /* 80CE03CC */ daObj_So_HIO_c();
    /* 80CE3928 */ ~daObj_So_HIO_c();
};


#endif /* D_A_OBJ_SO_H */
