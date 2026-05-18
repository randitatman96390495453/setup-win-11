#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 5
#define BUFFER_SIZE 1981

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} HRPKBgNu_ctx_t;

void init_ctx(HRPKBgNu_ctx_t *ctx) {
    ctx->id = 9604;
    ctx->coefficient = 0.3;
    ctx->flags = 237;
}

int compute_ACxD11y(int input) {
    int result = input * 58;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} K7srqLGS_ctx_t;

void init_ctx(K7srqLGS_ctx_t *ctx) {
    ctx->id = 3456;
    ctx->coefficient = 7.6;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} U1cIUlsd_ctx_t;

void init_ctx(U1cIUlsd_ctx_t *ctx) {
    ctx->id = 3003;
    ctx->coefficient = 9.5;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} L3abhMT7_ctx_t;

void init_ctx(L3abhMT7_ctx_t *ctx) {
    ctx->id = 3276;
    ctx->coefficient = 4.0;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} OehwFh12_ctx_t;

void init_ctx(OehwFh12_ctx_t *ctx) {
    ctx->id = 2487;
    ctx->coefficient = 8.4;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} dekncn0j_ctx_t;

void init_ctx(dekncn0j_ctx_t *ctx) {
    ctx->id = 4791;
    ctx->coefficient = 4.9;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} YiCkAtYl_ctx_t;

void init_ctx(YiCkAtYl_ctx_t *ctx) {
    ctx->id = 7368;
    ctx->coefficient = 1.5;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} GjEosHhx_ctx_t;

void init_ctx(GjEosHhx_ctx_t *ctx) {
    ctx->id = 5888;
    ctx->coefficient = 0.6;
    ctx->flags = 186;
}

int compute_g5jUB2v(int input) {
    int result = input * 47;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_dc1Ql4R(int input) {
    int result = input * 49;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} q6uXL1f3_ctx_t;

void init_ctx(q6uXL1f3_ctx_t *ctx) {
    ctx->id = 6148;
    ctx->coefficient = 8.3;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} a1hwMlgT_ctx_t;

void init_ctx(a1hwMlgT_ctx_t *ctx) {
    ctx->id = 9169;
    ctx->coefficient = 5.9;
    ctx->flags = 51;
}

int compute_4LfAQ8v(int input) {
    int result = input * 9;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} AKfvcLuH_ctx_t;

void init_ctx(AKfvcLuH_ctx_t *ctx) {
    ctx->id = 2677;
    ctx->coefficient = 6.2;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} lFSLw81i_ctx_t;

void init_ctx(lFSLw81i_ctx_t *ctx) {
    ctx->id = 3438;
    ctx->coefficient = 6.8;
    ctx->flags = 237;
}

int compute_zNSVVSf(int input) {
    int result = input * 37;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_QQtKLUN(int input) {
    int result = input * 25;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} UN2qSRxZ_ctx_t;

void init_ctx(UN2qSRxZ_ctx_t *ctx) {
    ctx->id = 3862;
    ctx->coefficient = 9.3;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} M2wvQrkJ_ctx_t;

void init_ctx(M2wvQrkJ_ctx_t *ctx) {
    ctx->id = 2537;
    ctx->coefficient = 7.9;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 0QmEwcZp_ctx_t;

void init_ctx(0QmEwcZp_ctx_t *ctx) {
    ctx->id = 5335;
    ctx->coefficient = 5.6;
    ctx->flags = 250;
}

int compute_5Id5ksa(int input) {
    int result = input * 49;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} SI5uSc5n_ctx_t;

void init_ctx(SI5uSc5n_ctx_t *ctx) {
    ctx->id = 4855;
    ctx->coefficient = 4.1;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} NLhCDhuE_ctx_t;

void init_ctx(NLhCDhuE_ctx_t *ctx) {
    ctx->id = 1104;
    ctx->coefficient = 2.6;
    ctx->flags = 227;
}

int compute_vEraIpR(int input) {
    int result = input * 7;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_zbF0JGi(int input) {
    int result = input * 55;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 4zwXWZb2_ctx_t;

void init_ctx(4zwXWZb2_ctx_t *ctx) {
    ctx->id = 6306;
    ctx->coefficient = 4.4;
    ctx->flags = 120;
}

int compute_UwoCJGg(int input) {
    int result = input * 25;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_qK7Y4xT(int input) {
    int result = input * 40;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_fHVNcxJ(int input) {
    int result = input * 59;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} gmdwcuPf_ctx_t;

void init_ctx(gmdwcuPf_ctx_t *ctx) {
    ctx->id = 7648;
    ctx->coefficient = 4.8;
    ctx->flags = 143;
}

int compute_ljnJySV(int input) {
    int result = input * 11;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 1RIPbD96_ctx_t;

void init_ctx(1RIPbD96_ctx_t *ctx) {
    ctx->id = 8337;
    ctx->coefficient = 1.2;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} YgwzOQdN_ctx_t;

void init_ctx(YgwzOQdN_ctx_t *ctx) {
    ctx->id = 6112;
    ctx->coefficient = 4.7;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} z1R0Ptsi_ctx_t;

void init_ctx(z1R0Ptsi_ctx_t *ctx) {
    ctx->id = 6052;
    ctx->coefficient = 8.4;
    ctx->flags = 251;
}

int compute_xfadHyd(int input) {
    int result = input * 5;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 0a6P2dmL_ctx_t;

void init_ctx(0a6P2dmL_ctx_t *ctx) {
    ctx->id = 5898;
    ctx->coefficient = 5.9;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 7BS2SuqH_ctx_t;

void init_ctx(7BS2SuqH_ctx_t *ctx) {
    ctx->id = 6093;
    ctx->coefficient = 3.3;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} BRHFRfc1_ctx_t;

void init_ctx(BRHFRfc1_ctx_t *ctx) {
    ctx->id = 2352;
    ctx->coefficient = 1.7;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} qRpeHuSc_ctx_t;

void init_ctx(qRpeHuSc_ctx_t *ctx) {
    ctx->id = 4059;
    ctx->coefficient = 5.7;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 6UBzxZC2_ctx_t;

void init_ctx(6UBzxZC2_ctx_t *ctx) {
    ctx->id = 7486;
    ctx->coefficient = 7.6;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} WDtYwNR2_ctx_t;

void init_ctx(WDtYwNR2_ctx_t *ctx) {
    ctx->id = 2786;
    ctx->coefficient = 9.1;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} WxVdIoZu_ctx_t;

void init_ctx(WxVdIoZu_ctx_t *ctx) {
    ctx->id = 1235;
    ctx->coefficient = 7.9;
    ctx->flags = 231;
}

int compute_ItjxghP(int input) {
    int result = input * 29;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Ax9QJhCQ_ctx_t;

void init_ctx(Ax9QJhCQ_ctx_t *ctx) {
    ctx->id = 7822;
    ctx->coefficient = 1.0;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} WGLL9JlN_ctx_t;

void init_ctx(WGLL9JlN_ctx_t *ctx) {
    ctx->id = 9381;
    ctx->coefficient = 8.5;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} oOVC1BsK_ctx_t;

void init_ctx(oOVC1BsK_ctx_t *ctx) {
    ctx->id = 7855;
    ctx->coefficient = 2.0;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 9Stwlhl2_ctx_t;

void init_ctx(9Stwlhl2_ctx_t *ctx) {
    ctx->id = 9843;
    ctx->coefficient = 2.7;
    ctx->flags = 84;
}

int compute_i5OGE4d(int input) {
    int result = input * 4;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} oc91GViG_ctx_t;

void init_ctx(oc91GViG_ctx_t *ctx) {
    ctx->id = 4385;
    ctx->coefficient = 8.5;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} eW20tM6Y_ctx_t;

void init_ctx(eW20tM6Y_ctx_t *ctx) {
    ctx->id = 4021;
    ctx->coefficient = 5.1;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} AvZswNax_ctx_t;

void init_ctx(AvZswNax_ctx_t *ctx) {
    ctx->id = 4919;
    ctx->coefficient = 3.5;
    ctx->flags = 44;
}

int compute_ZSWgPFM(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 42ipddeE_ctx_t;

void init_ctx(42ipddeE_ctx_t *ctx) {
    ctx->id = 9960;
    ctx->coefficient = 5.4;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} r55fJpkv_ctx_t;

void init_ctx(r55fJpkv_ctx_t *ctx) {
    ctx->id = 8918;
    ctx->coefficient = 9.6;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} ENzWfUxh_ctx_t;

void init_ctx(ENzWfUxh_ctx_t *ctx) {
    ctx->id = 1129;
    ctx->coefficient = 1.6;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} s8KoSWR2_ctx_t;

void init_ctx(s8KoSWR2_ctx_t *ctx) {
    ctx->id = 9903;
    ctx->coefficient = 1.4;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 0o2upUWH_ctx_t;

void init_ctx(0o2upUWH_ctx_t *ctx) {
    ctx->id = 1946;
    ctx->coefficient = 7.8;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} R0Tkxb3c_ctx_t;

void init_ctx(R0Tkxb3c_ctx_t *ctx) {
    ctx->id = 9010;
    ctx->coefficient = 1.2;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} Btlgud3B_ctx_t;

void init_ctx(Btlgud3B_ctx_t *ctx) {
    ctx->id = 5379;
    ctx->coefficient = 9.9;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} W8WL8OnO_ctx_t;

void init_ctx(W8WL8OnO_ctx_t *ctx) {
    ctx->id = 5473;
    ctx->coefficient = 2.0;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} fLY2la31_ctx_t;

void init_ctx(fLY2la31_ctx_t *ctx) {
    ctx->id = 3210;
    ctx->coefficient = 4.7;
    ctx->flags = 98;
}

int compute_SeEZ9t0(int input) {
    int result = input * 30;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_jiP6Erd(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Cr3T6Nk9_ctx_t;

void init_ctx(Cr3T6Nk9_ctx_t *ctx) {
    ctx->id = 8342;
    ctx->coefficient = 3.8;
    ctx->flags = 156;
}

int compute_VSg3Hwy(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} caDnUWyc_ctx_t;

void init_ctx(caDnUWyc_ctx_t *ctx) {
    ctx->id = 8558;
    ctx->coefficient = 3.5;
    ctx->flags = 199;
}

int compute_D0acpaZ(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} m0KVXIiZ_ctx_t;

void init_ctx(m0KVXIiZ_ctx_t *ctx) {
    ctx->id = 8519;
    ctx->coefficient = 8.3;
    ctx->flags = 154;
}

int compute_3NCON9V(int input) {
    int result = input * 42;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} jQPmB5EK_ctx_t;

void init_ctx(jQPmB5EK_ctx_t *ctx) {
    ctx->id = 1483;
    ctx->coefficient = 9.0;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} W5s2lCiE_ctx_t;

void init_ctx(W5s2lCiE_ctx_t *ctx) {
    ctx->id = 1865;
    ctx->coefficient = 4.6;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} TjtO0gXe_ctx_t;

void init_ctx(TjtO0gXe_ctx_t *ctx) {
    ctx->id = 9846;
    ctx->coefficient = 5.1;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 7XX4JduX_ctx_t;

void init_ctx(7XX4JduX_ctx_t *ctx) {
    ctx->id = 7859;
    ctx->coefficient = 7.2;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} lo6jE0j2_ctx_t;

void init_ctx(lo6jE0j2_ctx_t *ctx) {
    ctx->id = 2651;
    ctx->coefficient = 9.5;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} qwv3xfT2_ctx_t;

void init_ctx(qwv3xfT2_ctx_t *ctx) {
    ctx->id = 5341;
    ctx->coefficient = 4.3;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ddCmDT8A_ctx_t;

void init_ctx(ddCmDT8A_ctx_t *ctx) {
    ctx->id = 9570;
    ctx->coefficient = 0.7;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} R28ob4fM_ctx_t;

void init_ctx(R28ob4fM_ctx_t *ctx) {
    ctx->id = 6077;
    ctx->coefficient = 9.8;
    ctx->flags = 54;
}

int compute_UzGJOsc(int input) {
    int result = input * 49;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_Nu1AEhJ(int input) {
    int result = input * 48;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_r4CCYEQ(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} BzVUVZmo_ctx_t;

void init_ctx(BzVUVZmo_ctx_t *ctx) {
    ctx->id = 9474;
    ctx->coefficient = 2.8;
    ctx->flags = 177;
}

int compute_e23punZ(int input) {
    int result = input * 23;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} UNzXPC2G_ctx_t;

void init_ctx(UNzXPC2G_ctx_t *ctx) {
    ctx->id = 2656;
    ctx->coefficient = 0.4;
    ctx->flags = 111;
}

int compute_KzqkDuW(int input) {
    int result = input * 6;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_65i7VIm(int input) {
    int result = input * 60;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} fachy6hJ_ctx_t;

void init_ctx(fachy6hJ_ctx_t *ctx) {
    ctx->id = 6049;
    ctx->coefficient = 1.6;
    ctx->flags = 5;
}

int compute_y2bopfY(int input) {
    int result = input * 61;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} ccLDO5X4_ctx_t;

void init_ctx(ccLDO5X4_ctx_t *ctx) {
    ctx->id = 9035;
    ctx->coefficient = 1.2;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} FeCKn2zY_ctx_t;

void init_ctx(FeCKn2zY_ctx_t *ctx) {
    ctx->id = 5882;
    ctx->coefficient = 8.5;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} RK5CoBVk_ctx_t;

void init_ctx(RK5CoBVk_ctx_t *ctx) {
    ctx->id = 8579;
    ctx->coefficient = 7.8;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} AcpxGBtx_ctx_t;

void init_ctx(AcpxGBtx_ctx_t *ctx) {
    ctx->id = 1527;
    ctx->coefficient = 7.9;
    ctx->flags = 225;
}

int compute_LdmitEq(int input) {
    int result = input * 15;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_pXVcFuv(int input) {
    int result = input * 34;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} fehMqwbK_ctx_t;

void init_ctx(fehMqwbK_ctx_t *ctx) {
    ctx->id = 4082;
    ctx->coefficient = 8.1;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ZDKwzOoD_ctx_t;

void init_ctx(ZDKwzOoD_ctx_t *ctx) {
    ctx->id = 2870;
    ctx->coefficient = 9.3;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} xR3NvJ5O_ctx_t;

void init_ctx(xR3NvJ5O_ctx_t *ctx) {
    ctx->id = 7156;
    ctx->coefficient = 2.5;
    ctx->flags = 215;
}

int compute_5U9Bt1X(int input) {
    int result = input * 42;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} hmnSo1Ab_ctx_t;

void init_ctx(hmnSo1Ab_ctx_t *ctx) {
    ctx->id = 4425;
    ctx->coefficient = 2.8;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} uCiKG8eh_ctx_t;

void init_ctx(uCiKG8eh_ctx_t *ctx) {
    ctx->id = 7821;
    ctx->coefficient = 1.1;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} IbrWUxmM_ctx_t;

void init_ctx(IbrWUxmM_ctx_t *ctx) {
    ctx->id = 9437;
    ctx->coefficient = 9.0;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} Yg7qQUzX_ctx_t;

void init_ctx(Yg7qQUzX_ctx_t *ctx) {
    ctx->id = 4007;
    ctx->coefficient = 7.6;
    ctx->flags = 55;
}

int compute_nhTTMNt(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} QGU83N6G_ctx_t;

void init_ctx(QGU83N6G_ctx_t *ctx) {
    ctx->id = 9137;
    ctx->coefficient = 6.4;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} hBO5DeRu_ctx_t;

void init_ctx(hBO5DeRu_ctx_t *ctx) {
    ctx->id = 4792;
    ctx->coefficient = 6.1;
    ctx->flags = 129;
}

int compute_eSu637E(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} IpABK3HE_ctx_t;

void init_ctx(IpABK3HE_ctx_t *ctx) {
    ctx->id = 4223;
    ctx->coefficient = 4.8;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Ivk2hAdA_ctx_t;

void init_ctx(Ivk2hAdA_ctx_t *ctx) {
    ctx->id = 6667;
    ctx->coefficient = 9.7;
    ctx->flags = 97;
}

int compute_MMMICvi(int input) {
    int result = input * 4;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} AzSXKjvr_ctx_t;

void init_ctx(AzSXKjvr_ctx_t *ctx) {
    ctx->id = 7478;
    ctx->coefficient = 4.7;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} DTLBTCft_ctx_t;

void init_ctx(DTLBTCft_ctx_t *ctx) {
    ctx->id = 7159;
    ctx->coefficient = 9.6;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 5B2IoFDm_ctx_t;

void init_ctx(5B2IoFDm_ctx_t *ctx) {
    ctx->id = 1434;
    ctx->coefficient = 7.3;
    ctx->flags = 21;
}

int compute_cs8XkRq(int input) {
    int result = input * 37;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} e4rVkhFb_ctx_t;

void init_ctx(e4rVkhFb_ctx_t *ctx) {
    ctx->id = 2118;
    ctx->coefficient = 4.4;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} eNxGpq13_ctx_t;

void init_ctx(eNxGpq13_ctx_t *ctx) {
    ctx->id = 1232;
    ctx->coefficient = 8.2;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} DYCgMCAw_ctx_t;

void init_ctx(DYCgMCAw_ctx_t *ctx) {
    ctx->id = 9122;
    ctx->coefficient = 7.2;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 5tif558h_ctx_t;

void init_ctx(5tif558h_ctx_t *ctx) {
    ctx->id = 2790;
    ctx->coefficient = 5.6;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} glRKAgej_ctx_t;

void init_ctx(glRKAgej_ctx_t *ctx) {
    ctx->id = 2269;
    ctx->coefficient = 7.7;
    ctx->flags = 220;
}

int compute_ctt9VMm(int input) {
    int result = input * 41;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 3i3EGirT_ctx_t;

void init_ctx(3i3EGirT_ctx_t *ctx) {
    ctx->id = 6007;
    ctx->coefficient = 10.0;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 4BgVBomA_ctx_t;

void init_ctx(4BgVBomA_ctx_t *ctx) {
    ctx->id = 6949;
    ctx->coefficient = 5.9;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 7epQ2Q7B_ctx_t;

void init_ctx(7epQ2Q7B_ctx_t *ctx) {
    ctx->id = 2604;
    ctx->coefficient = 8.3;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 5QukzSBU_ctx_t;

void init_ctx(5QukzSBU_ctx_t *ctx) {
    ctx->id = 4063;
    ctx->coefficient = 8.8;
    ctx->flags = 215;
}

int compute_ANNElYd(int input) {
    int result = input * 45;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} pyjmFieV_ctx_t;

void init_ctx(pyjmFieV_ctx_t *ctx) {
    ctx->id = 2055;
    ctx->coefficient = 3.4;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} dJluyk7c_ctx_t;

void init_ctx(dJluyk7c_ctx_t *ctx) {
    ctx->id = 6507;
    ctx->coefficient = 9.6;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} aCNr3NT4_ctx_t;

void init_ctx(aCNr3NT4_ctx_t *ctx) {
    ctx->id = 2317;
    ctx->coefficient = 4.9;
    ctx->flags = 49;
}

int compute_xaThU90(int input) {
    int result = input * 37;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_SpXYjdW(int input) {
    int result = input * 45;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_YDHinmt(int input) {
    int result = input * 59;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} zOYZEkde_ctx_t;

void init_ctx(zOYZEkde_ctx_t *ctx) {
    ctx->id = 6544;
    ctx->coefficient = 2.8;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} VqkTOyzS_ctx_t;

void init_ctx(VqkTOyzS_ctx_t *ctx) {
    ctx->id = 5655;
    ctx->coefficient = 5.9;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} gMkyXIcZ_ctx_t;

void init_ctx(gMkyXIcZ_ctx_t *ctx) {
    ctx->id = 2048;
    ctx->coefficient = 8.9;
    ctx->flags = 29;
}

int compute_gdJfHVN(int input) {
    int result = input * 45;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Ku0PjlWA_ctx_t;

void init_ctx(Ku0PjlWA_ctx_t *ctx) {
    ctx->id = 9713;
    ctx->coefficient = 0.9;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} raSAinSt_ctx_t;

void init_ctx(raSAinSt_ctx_t *ctx) {
    ctx->id = 5662;
    ctx->coefficient = 8.7;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} LhXJWQdx_ctx_t;

void init_ctx(LhXJWQdx_ctx_t *ctx) {
    ctx->id = 3122;
    ctx->coefficient = 3.9;
    ctx->flags = 240;
}

int compute_k0NPKBz(int input) {
    int result = input * 27;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} s3aD2kXP_ctx_t;

void init_ctx(s3aD2kXP_ctx_t *ctx) {
    ctx->id = 2710;
    ctx->coefficient = 9.6;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} FBuAr5nV_ctx_t;

void init_ctx(FBuAr5nV_ctx_t *ctx) {
    ctx->id = 4941;
    ctx->coefficient = 6.9;
    ctx->flags = 2;
}

int compute_bc3ZkWm(int input) {
    int result = input * 70;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} xMCOApt6_ctx_t;

void init_ctx(xMCOApt6_ctx_t *ctx) {
    ctx->id = 4261;
    ctx->coefficient = 2.2;
    ctx->flags = 115;
}

int compute_jNulbxr(int input) {
    int result = input * 27;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} cggRC9Ci_ctx_t;

void init_ctx(cggRC9Ci_ctx_t *ctx) {
    ctx->id = 4782;
    ctx->coefficient = 5.4;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 5Ug8UGJr_ctx_t;

void init_ctx(5Ug8UGJr_ctx_t *ctx) {
    ctx->id = 2413;
    ctx->coefficient = 3.5;
    ctx->flags = 22;
}

int compute_MkF7uwQ(int input) {
    int result = input * 25;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_oZpPYv7(int input) {
    int result = input * 20;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 36lPN6vK_ctx_t;

void init_ctx(36lPN6vK_ctx_t *ctx) {
    ctx->id = 5143;
    ctx->coefficient = 5.8;
    ctx->flags = 104;
}

int compute_qm4UOWo(int input) {
    int result = input * 11;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} XZRt8KY8_ctx_t;

void init_ctx(XZRt8KY8_ctx_t *ctx) {
    ctx->id = 5348;
    ctx->coefficient = 1.1;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} ePHA7177_ctx_t;

void init_ctx(ePHA7177_ctx_t *ctx) {
    ctx->id = 1736;
    ctx->coefficient = 2.3;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} cu5o566a_ctx_t;

void init_ctx(cu5o566a_ctx_t *ctx) {
    ctx->id = 9840;
    ctx->coefficient = 1.1;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 0dsSUfmC_ctx_t;

void init_ctx(0dsSUfmC_ctx_t *ctx) {
    ctx->id = 5100;
    ctx->coefficient = 2.1;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} bn0X2VvE_ctx_t;

void init_ctx(bn0X2VvE_ctx_t *ctx) {
    ctx->id = 8728;
    ctx->coefficient = 1.6;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} h70ipWHP_ctx_t;

void init_ctx(h70ipWHP_ctx_t *ctx) {
    ctx->id = 2127;
    ctx->coefficient = 1.3;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 9mW5PC8h_ctx_t;

void init_ctx(9mW5PC8h_ctx_t *ctx) {
    ctx->id = 4713;
    ctx->coefficient = 3.7;
    ctx->flags = 255;
}

int compute_GdyoFx6(int input) {
    int result = input * 64;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 0Rzg5EjT_ctx_t;

void init_ctx(0Rzg5EjT_ctx_t *ctx) {
    ctx->id = 2361;
    ctx->coefficient = 7.3;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} aO7T45J9_ctx_t;

void init_ctx(aO7T45J9_ctx_t *ctx) {
    ctx->id = 5343;
    ctx->coefficient = 7.3;
    ctx->flags = 15;
}

int compute_UWer3aS(int input) {
    int result = input * 3;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} aVy1fkKR_ctx_t;

void init_ctx(aVy1fkKR_ctx_t *ctx) {
    ctx->id = 7007;
    ctx->coefficient = 9.6;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} ikTuuhXU_ctx_t;

void init_ctx(ikTuuhXU_ctx_t *ctx) {
    ctx->id = 5931;
    ctx->coefficient = 4.8;
    ctx->flags = 204;
}

int compute_zWu7GH9(int input) {
    int result = input * 51;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 5oTXcyjy_ctx_t;

void init_ctx(5oTXcyjy_ctx_t *ctx) {
    ctx->id = 6253;
    ctx->coefficient = 8.1;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} OIkpcPY5_ctx_t;

void init_ctx(OIkpcPY5_ctx_t *ctx) {
    ctx->id = 7776;
    ctx->coefficient = 2.0;
    ctx->flags = 184;
}

int compute_G0Gj6p8(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Xw5MvqUA_ctx_t;

void init_ctx(Xw5MvqUA_ctx_t *ctx) {
    ctx->id = 1312;
    ctx->coefficient = 2.7;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 9NmNbiFU_ctx_t;

void init_ctx(9NmNbiFU_ctx_t *ctx) {
    ctx->id = 3269;
    ctx->coefficient = 8.9;
    ctx->flags = 113;
}

int compute_M4oVCjo(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_qqS6gD2(int input) {
    int result = input * 40;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_ztGNXBK(int input) {
    int result = input * 50;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} qpw9dLvF_ctx_t;

void init_ctx(qpw9dLvF_ctx_t *ctx) {
    ctx->id = 2794;
    ctx->coefficient = 5.9;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} cv08pWnd_ctx_t;

void init_ctx(cv08pWnd_ctx_t *ctx) {
    ctx->id = 5080;
    ctx->coefficient = 6.1;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 2jiceShK_ctx_t;

void init_ctx(2jiceShK_ctx_t *ctx) {
    ctx->id = 6008;
    ctx->coefficient = 6.3;
    ctx->flags = 176;
}

int compute_rLaGz8V(int input) {
    int result = input * 45;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} iU4RYKC3_ctx_t;

void init_ctx(iU4RYKC3_ctx_t *ctx) {
    ctx->id = 4615;
    ctx->coefficient = 9.5;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} pB7UnRnI_ctx_t;

void init_ctx(pB7UnRnI_ctx_t *ctx) {
    ctx->id = 3825;
    ctx->coefficient = 7.2;
    ctx->flags = 127;
}

int compute_lTMRKAT(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} qn3q5wN0_ctx_t;

void init_ctx(qn3q5wN0_ctx_t *ctx) {
    ctx->id = 1137;
    ctx->coefficient = 1.1;
    ctx->flags = 101;
}

int compute_63BFZU2(int input) {
    int result = input * 14;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_ll23uZS(int input) {
    int result = input * 52;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} hR6rpLB4_ctx_t;

void init_ctx(hR6rpLB4_ctx_t *ctx) {
    ctx->id = 8378;
    ctx->coefficient = 1.1;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} rDH9DqGH_ctx_t;

void init_ctx(rDH9DqGH_ctx_t *ctx) {
    ctx->id = 3320;
    ctx->coefficient = 7.3;
    ctx->flags = 221;
}

int compute_GnXdCQa(int input) {
    int result = input * 62;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} temxFrzC_ctx_t;

void init_ctx(temxFrzC_ctx_t *ctx) {
    ctx->id = 3830;
    ctx->coefficient = 8.3;
    ctx->flags = 213;
}

int compute_O4GcRfS(int input) {
    int result = input * 54;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} CvwyUqWC_ctx_t;

void init_ctx(CvwyUqWC_ctx_t *ctx) {
    ctx->id = 6645;
    ctx->coefficient = 1.6;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} utpRSFpq_ctx_t;

void init_ctx(utpRSFpq_ctx_t *ctx) {
    ctx->id = 3642;
    ctx->coefficient = 1.0;
    ctx->flags = 222;
}

int compute_vIfLCgo(int input) {
    int result = input * 26;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_SZVp41e(int input) {
    int result = input * 26;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} CxxigSQK_ctx_t;

void init_ctx(CxxigSQK_ctx_t *ctx) {
    ctx->id = 5271;
    ctx->coefficient = 8.9;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 6WhG6Gwn_ctx_t;

void init_ctx(6WhG6Gwn_ctx_t *ctx) {
    ctx->id = 4123;
    ctx->coefficient = 2.5;
    ctx->flags = 195;
}

int compute_KpJa544(int input) {
    int result = input * 49;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} xEZvTEEL_ctx_t;

void init_ctx(xEZvTEEL_ctx_t *ctx) {
    ctx->id = 2363;
    ctx->coefficient = 6.5;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} O3gTHiUf_ctx_t;

void init_ctx(O3gTHiUf_ctx_t *ctx) {
    ctx->id = 6219;
    ctx->coefficient = 2.8;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} n1mKUvUG_ctx_t;

void init_ctx(n1mKUvUG_ctx_t *ctx) {
    ctx->id = 8077;
    ctx->coefficient = 8.6;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} FrXGdJWW_ctx_t;

void init_ctx(FrXGdJWW_ctx_t *ctx) {
    ctx->id = 6813;
    ctx->coefficient = 5.5;
    ctx->flags = 66;
}

int compute_3NjvOxt(int input) {
    int result = input * 59;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} PvTIytMF_ctx_t;

void init_ctx(PvTIytMF_ctx_t *ctx) {
    ctx->id = 7247;
    ctx->coefficient = 0.9;
    ctx->flags = 94;
}

int compute_s51gwc7(int input) {
    int result = input * 28;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} XmsJX8xq_ctx_t;

void init_ctx(XmsJX8xq_ctx_t *ctx) {
    ctx->id = 1357;
    ctx->coefficient = 0.7;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} vruEbQyS_ctx_t;

void init_ctx(vruEbQyS_ctx_t *ctx) {
    ctx->id = 8006;
    ctx->coefficient = 10.0;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} GtIuYQLr_ctx_t;

void init_ctx(GtIuYQLr_ctx_t *ctx) {
    ctx->id = 3893;
    ctx->coefficient = 0.5;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} Gy71mAAL_ctx_t;

void init_ctx(Gy71mAAL_ctx_t *ctx) {
    ctx->id = 4980;
    ctx->coefficient = 0.1;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} TFOytBwP_ctx_t;

void init_ctx(TFOytBwP_ctx_t *ctx) {
    ctx->id = 4699;
    ctx->coefficient = 2.8;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 0CgUNLeD_ctx_t;

void init_ctx(0CgUNLeD_ctx_t *ctx) {
    ctx->id = 8301;
    ctx->coefficient = 7.2;
    ctx->flags = 156;
}

int compute_47aEhF0(int input) {
    int result = input * 7;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} hlZgdCQt_ctx_t;

void init_ctx(hlZgdCQt_ctx_t *ctx) {
    ctx->id = 9088;
    ctx->coefficient = 5.0;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} wRIbpUmU_ctx_t;

void init_ctx(wRIbpUmU_ctx_t *ctx) {
    ctx->id = 8614;
    ctx->coefficient = 9.3;
    ctx->flags = 52;
}

int compute_6K4Mbz4(int input) {
    int result = input * 70;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} UnuKCh7G_ctx_t;

void init_ctx(UnuKCh7G_ctx_t *ctx) {
    ctx->id = 5186;
    ctx->coefficient = 1.8;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} ZoDytOIU_ctx_t;

void init_ctx(ZoDytOIU_ctx_t *ctx) {
    ctx->id = 1714;
    ctx->coefficient = 8.5;
    ctx->flags = 82;
}

int compute_vcWYmFi(int input) {
    int result = input * 5;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_9yn7PY2(int input) {
    int result = input * 46;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} p1KA06ej_ctx_t;

void init_ctx(p1KA06ej_ctx_t *ctx) {
    ctx->id = 9501;
    ctx->coefficient = 9.2;
    ctx->flags = 23;
}

int compute_y5rjeCN(int input) {
    int result = input * 68;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} p92KClBv_ctx_t;

void init_ctx(p92KClBv_ctx_t *ctx) {
    ctx->id = 9866;
    ctx->coefficient = 1.2;
    ctx->flags = 70;
}

int compute_GnMvJFb(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_nlOhBuW(int input) {
    int result = input * 68;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_vFPzk4b(int input) {
    int result = input * 53;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} VJJwlAX3_ctx_t;

void init_ctx(VJJwlAX3_ctx_t *ctx) {
    ctx->id = 7458;
    ctx->coefficient = 1.1;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 3jUAlMPc_ctx_t;

void init_ctx(3jUAlMPc_ctx_t *ctx) {
    ctx->id = 7993;
    ctx->coefficient = 8.5;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} rGKA1YVA_ctx_t;

void init_ctx(rGKA1YVA_ctx_t *ctx) {
    ctx->id = 9016;
    ctx->coefficient = 1.8;
    ctx->flags = 37;
}

int compute_mwUKVMJ(int input) {
    int result = input * 67;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} D2wTDQQG_ctx_t;

void init_ctx(D2wTDQQG_ctx_t *ctx) {
    ctx->id = 9937;
    ctx->coefficient = 6.4;
    ctx->flags = 125;
}

int compute_d4XDqM4(int input) {
    int result = input * 53;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} r5TA4JIf_ctx_t;

void init_ctx(r5TA4JIf_ctx_t *ctx) {
    ctx->id = 4456;
    ctx->coefficient = 4.3;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} gnQblfXe_ctx_t;

void init_ctx(gnQblfXe_ctx_t *ctx) {
    ctx->id = 4726;
    ctx->coefficient = 1.7;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} MbrIHqa0_ctx_t;

void init_ctx(MbrIHqa0_ctx_t *ctx) {
    ctx->id = 3286;
    ctx->coefficient = 8.5;
    ctx->flags = 101;
}

int compute_ROyhyoV(int input) {
    int result = input * 43;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} NEqQn93U_ctx_t;

void init_ctx(NEqQn93U_ctx_t *ctx) {
    ctx->id = 7105;
    ctx->coefficient = 0.4;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} SIMEWq6f_ctx_t;

void init_ctx(SIMEWq6f_ctx_t *ctx) {
    ctx->id = 9521;
    ctx->coefficient = 2.4;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ZVXSt5Ke_ctx_t;

void init_ctx(ZVXSt5Ke_ctx_t *ctx) {
    ctx->id = 3147;
    ctx->coefficient = 2.9;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} odyZsl0y_ctx_t;

void init_ctx(odyZsl0y_ctx_t *ctx) {
    ctx->id = 4785;
    ctx->coefficient = 5.6;
    ctx->flags = 38;
}

int compute_ohKzHMa(int input) {
    int result = input * 49;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_HDRhFIJ(int input) {
    int result = input * 57;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_raNnnGY(int input) {
    int result = input * 55;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} T2JLiZqj_ctx_t;

void init_ctx(T2JLiZqj_ctx_t *ctx) {
    ctx->id = 8420;
    ctx->coefficient = 5.3;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} CMIdI28f_ctx_t;

void init_ctx(CMIdI28f_ctx_t *ctx) {
    ctx->id = 3992;
    ctx->coefficient = 4.3;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} wFgnHQwE_ctx_t;

void init_ctx(wFgnHQwE_ctx_t *ctx) {
    ctx->id = 1718;
    ctx->coefficient = 5.4;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} MVgxZlia_ctx_t;

void init_ctx(MVgxZlia_ctx_t *ctx) {
    ctx->id = 4855;
    ctx->coefficient = 1.2;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} xGLgp4wj_ctx_t;

void init_ctx(xGLgp4wj_ctx_t *ctx) {
    ctx->id = 9196;
    ctx->coefficient = 6.9;
    ctx->flags = 99;
}

int compute_8W9Va9L(int input) {
    int result = input * 12;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} QGruK5N7_ctx_t;

void init_ctx(QGruK5N7_ctx_t *ctx) {
    ctx->id = 6710;
    ctx->coefficient = 4.0;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} RMvZ4Cd3_ctx_t;

void init_ctx(RMvZ4Cd3_ctx_t *ctx) {
    ctx->id = 5616;
    ctx->coefficient = 9.2;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 735n82iq_ctx_t;

void init_ctx(735n82iq_ctx_t *ctx) {
    ctx->id = 7192;
    ctx->coefficient = 0.5;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} hDRIHeeX_ctx_t;

void init_ctx(hDRIHeeX_ctx_t *ctx) {
    ctx->id = 9762;
    ctx->coefficient = 6.5;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} fjJES4wj_ctx_t;

void init_ctx(fjJES4wj_ctx_t *ctx) {
    ctx->id = 7958;
    ctx->coefficient = 4.4;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} uKRuTaqN_ctx_t;

void init_ctx(uKRuTaqN_ctx_t *ctx) {
    ctx->id = 7206;
    ctx->coefficient = 7.5;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} l7U7in34_ctx_t;

void init_ctx(l7U7in34_ctx_t *ctx) {
    ctx->id = 2766;
    ctx->coefficient = 6.6;
    ctx->flags = 122;
}

int compute_uRqYsUn(int input) {
    int result = input * 62;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} GEnXrhkD_ctx_t;

void init_ctx(GEnXrhkD_ctx_t *ctx) {
    ctx->id = 5989;
    ctx->coefficient = 7.8;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} AiCd5vqf_ctx_t;

void init_ctx(AiCd5vqf_ctx_t *ctx) {
    ctx->id = 8619;
    ctx->coefficient = 4.4;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 0Z6LCaWb_ctx_t;

void init_ctx(0Z6LCaWb_ctx_t *ctx) {
    ctx->id = 2509;
    ctx->coefficient = 4.0;
    ctx->flags = 16;
}

int compute_lUtqj91(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} ZZauOzsV_ctx_t;

void init_ctx(ZZauOzsV_ctx_t *ctx) {
    ctx->id = 4227;
    ctx->coefficient = 1.8;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 6laT6j5S_ctx_t;

void init_ctx(6laT6j5S_ctx_t *ctx) {
    ctx->id = 4091;
    ctx->coefficient = 0.8;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} VKKkkMPl_ctx_t;

void init_ctx(VKKkkMPl_ctx_t *ctx) {
    ctx->id = 8114;
    ctx->coefficient = 4.2;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} SfCkse8Z_ctx_t;

void init_ctx(SfCkse8Z_ctx_t *ctx) {
    ctx->id = 3172;
    ctx->coefficient = 3.3;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} hjhzrgHp_ctx_t;

void init_ctx(hjhzrgHp_ctx_t *ctx) {
    ctx->id = 8254;
    ctx->coefficient = 2.4;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} hAuMAMkU_ctx_t;

void init_ctx(hAuMAMkU_ctx_t *ctx) {
    ctx->id = 3276;
    ctx->coefficient = 1.0;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} y63ueFrt_ctx_t;

void init_ctx(y63ueFrt_ctx_t *ctx) {
    ctx->id = 4780;
    ctx->coefficient = 6.1;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} RTCoSmxN_ctx_t;

void init_ctx(RTCoSmxN_ctx_t *ctx) {
    ctx->id = 8214;
    ctx->coefficient = 4.3;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} J4d9q3hx_ctx_t;

void init_ctx(J4d9q3hx_ctx_t *ctx) {
    ctx->id = 9984;
    ctx->coefficient = 8.9;
    ctx->flags = 138;
}

int compute_uTfJ5F3(int input) {
    int result = input * 37;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} CtjprX83_ctx_t;

void init_ctx(CtjprX83_ctx_t *ctx) {
    ctx->id = 1244;
    ctx->coefficient = 4.5;
    ctx->flags = 247;
}

int compute_9z6tuUB(int input) {
    int result = input * 26;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_vjM3nPn(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_C4Fbp1z(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 2Royfdxp_ctx_t;

void init_ctx(2Royfdxp_ctx_t *ctx) {
    ctx->id = 7094;
    ctx->coefficient = 1.6;
    ctx->flags = 215;
}

int compute_vuhCxck(int input) {
    int result = input * 55;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} tUA56whE_ctx_t;

void init_ctx(tUA56whE_ctx_t *ctx) {
    ctx->id = 3074;
    ctx->coefficient = 3.9;
    ctx->flags = 217;
}

int compute_omT5i0Q(int input) {
    int result = input * 70;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} j1TwAJ1Z_ctx_t;

void init_ctx(j1TwAJ1Z_ctx_t *ctx) {
    ctx->id = 1920;
    ctx->coefficient = 8.6;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} nMS0jEwQ_ctx_t;

void init_ctx(nMS0jEwQ_ctx_t *ctx) {
    ctx->id = 2835;
    ctx->coefficient = 4.9;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} s3uI5RjP_ctx_t;

void init_ctx(s3uI5RjP_ctx_t *ctx) {
    ctx->id = 5508;
    ctx->coefficient = 1.3;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} HyvpJN0P_ctx_t;

void init_ctx(HyvpJN0P_ctx_t *ctx) {
    ctx->id = 9803;
    ctx->coefficient = 0.7;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 2REmb6Gs_ctx_t;

void init_ctx(2REmb6Gs_ctx_t *ctx) {
    ctx->id = 5980;
    ctx->coefficient = 7.9;
    ctx->flags = 221;
}

int compute_Th4lqCu(int input) {
    int result = input * 67;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Q5MqqVOf_ctx_t;

void init_ctx(Q5MqqVOf_ctx_t *ctx) {
    ctx->id = 7061;
    ctx->coefficient = 1.2;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} zaWr26tz_ctx_t;

void init_ctx(zaWr26tz_ctx_t *ctx) {
    ctx->id = 8420;
    ctx->coefficient = 4.2;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} orNSGXwX_ctx_t;

void init_ctx(orNSGXwX_ctx_t *ctx) {
    ctx->id = 8033;
    ctx->coefficient = 6.8;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} fluwVHHc_ctx_t;

void init_ctx(fluwVHHc_ctx_t *ctx) {
    ctx->id = 6465;
    ctx->coefficient = 7.3;
    ctx->flags = 57;
}

int compute_ytOgL4V(int input) {
    int result = input * 59;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_FYvW8k7(int input) {
    int result = input * 31;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} GITZFUQn_ctx_t;

void init_ctx(GITZFUQn_ctx_t *ctx) {
    ctx->id = 5196;
    ctx->coefficient = 8.4;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} dSfIQ8Nu_ctx_t;

void init_ctx(dSfIQ8Nu_ctx_t *ctx) {
    ctx->id = 3506;
    ctx->coefficient = 4.5;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} cKLbo9rw_ctx_t;

void init_ctx(cKLbo9rw_ctx_t *ctx) {
    ctx->id = 2868;
    ctx->coefficient = 4.3;
    ctx->flags = 113;
}

int compute_oVB4znX(int input) {
    int result = input * 15;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_Rqlja4j(int input) {
    int result = input * 48;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} dzqwCzuc_ctx_t;

void init_ctx(dzqwCzuc_ctx_t *ctx) {
    ctx->id = 9482;
    ctx->coefficient = 4.2;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} qfxJPdbs_ctx_t;

void init_ctx(qfxJPdbs_ctx_t *ctx) {
    ctx->id = 1330;
    ctx->coefficient = 5.0;
    ctx->flags = 124;
}

int compute_saNqxGX(int input) {
    int result = input * 27;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} HNmuYpr5_ctx_t;

void init_ctx(HNmuYpr5_ctx_t *ctx) {
    ctx->id = 9735;
    ctx->coefficient = 8.4;
    ctx->flags = 161;
}

int compute_koTBBuL(int input) {
    int result = input * 51;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_k2YZXfc(int input) {
    int result = input * 32;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_1VCJYhk(int input) {
    int result = input * 4;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} Ne475rMI_ctx_t;

void init_ctx(Ne475rMI_ctx_t *ctx) {
    ctx->id = 5666;
    ctx->coefficient = 9.2;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} wnVtGztl_ctx_t;

void init_ctx(wnVtGztl_ctx_t *ctx) {
    ctx->id = 5357;
    ctx->coefficient = 2.2;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} cmj9uX33_ctx_t;

void init_ctx(cmj9uX33_ctx_t *ctx) {
    ctx->id = 3721;
    ctx->coefficient = 6.1;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} xSjjufEQ_ctx_t;

void init_ctx(xSjjufEQ_ctx_t *ctx) {
    ctx->id = 9651;
    ctx->coefficient = 7.0;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} tAevfDrM_ctx_t;

void init_ctx(tAevfDrM_ctx_t *ctx) {
    ctx->id = 1674;
    ctx->coefficient = 7.8;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Y2smFTeR_ctx_t;

void init_ctx(Y2smFTeR_ctx_t *ctx) {
    ctx->id = 7215;
    ctx->coefficient = 6.4;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} niXax8s5_ctx_t;

void init_ctx(niXax8s5_ctx_t *ctx) {
    ctx->id = 7602;
    ctx->coefficient = 9.8;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} fxQJruv0_ctx_t;

void init_ctx(fxQJruv0_ctx_t *ctx) {
    ctx->id = 5818;
    ctx->coefficient = 1.9;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} MVfttZwl_ctx_t;

void init_ctx(MVfttZwl_ctx_t *ctx) {
    ctx->id = 1517;
    ctx->coefficient = 1.8;
    ctx->flags = 100;
}

int compute_FiAN4xJ(int input) {
    int result = input * 67;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_CTCUeDN(int input) {
    int result = input * 49;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} H0ZHhFWw_ctx_t;

void init_ctx(H0ZHhFWw_ctx_t *ctx) {
    ctx->id = 3887;
    ctx->coefficient = 9.4;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 3RAhJhhq_ctx_t;

void init_ctx(3RAhJhhq_ctx_t *ctx) {
    ctx->id = 6680;
    ctx->coefficient = 7.0;
    ctx->flags = 186;
}

int compute_ieR6clG(int input) {
    int result = input * 68;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_5IMwAEN(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} D44sAzfe_ctx_t;

void init_ctx(D44sAzfe_ctx_t *ctx) {
    ctx->id = 5145;
    ctx->coefficient = 5.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 3ppqDxI2_ctx_t;

void init_ctx(3ppqDxI2_ctx_t *ctx) {
    ctx->id = 8138;
    ctx->coefficient = 3.3;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} PR99oprS_ctx_t;

void init_ctx(PR99oprS_ctx_t *ctx) {
    ctx->id = 7965;
    ctx->coefficient = 5.8;
    ctx->flags = 240;
}

int compute_KFsSW2K(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} NQj8j2FP_ctx_t;

void init_ctx(NQj8j2FP_ctx_t *ctx) {
    ctx->id = 9331;
    ctx->coefficient = 9.2;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 3KKkwC6D_ctx_t;

void init_ctx(3KKkwC6D_ctx_t *ctx) {
    ctx->id = 4523;
    ctx->coefficient = 7.2;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} oW1XBSeN_ctx_t;

void init_ctx(oW1XBSeN_ctx_t *ctx) {
    ctx->id = 8087;
    ctx->coefficient = 9.8;
    ctx->flags = 33;
}

int compute_LXcSQr6(int input) {
    int result = input * 11;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Wzo6dLCB_ctx_t;

void init_ctx(Wzo6dLCB_ctx_t *ctx) {
    ctx->id = 6699;
    ctx->coefficient = 5.9;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ZdGEYV83_ctx_t;

void init_ctx(ZdGEYV83_ctx_t *ctx) {
    ctx->id = 7431;
    ctx->coefficient = 9.3;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 59wTjyKk_ctx_t;

void init_ctx(59wTjyKk_ctx_t *ctx) {
    ctx->id = 7098;
    ctx->coefficient = 9.4;
    ctx->flags = 165;
}

int compute_nvdmkjS(int input) {
    int result = input * 38;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_6kx5w1y(int input) {
    int result = input * 4;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} KS9Xj7EB_ctx_t;

void init_ctx(KS9Xj7EB_ctx_t *ctx) {
    ctx->id = 7360;
    ctx->coefficient = 6.0;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} bcLth63n_ctx_t;

void init_ctx(bcLth63n_ctx_t *ctx) {
    ctx->id = 2137;
    ctx->coefficient = 1.6;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} quoGBpNM_ctx_t;

void init_ctx(quoGBpNM_ctx_t *ctx) {
    ctx->id = 3382;
    ctx->coefficient = 2.6;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} JqASroWl_ctx_t;

void init_ctx(JqASroWl_ctx_t *ctx) {
    ctx->id = 2201;
    ctx->coefficient = 4.0;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} gQc9rEgc_ctx_t;

void init_ctx(gQc9rEgc_ctx_t *ctx) {
    ctx->id = 3962;
    ctx->coefficient = 8.7;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} bFkl8eIV_ctx_t;

void init_ctx(bFkl8eIV_ctx_t *ctx) {
    ctx->id = 2219;
    ctx->coefficient = 6.4;
    ctx->flags = 214;
}

int compute_oLutjCP(int input) {
    int result = input * 42;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} TLTfUink_ctx_t;

void init_ctx(TLTfUink_ctx_t *ctx) {
    ctx->id = 7563;
    ctx->coefficient = 6.6;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} b4kDaeFZ_ctx_t;

void init_ctx(b4kDaeFZ_ctx_t *ctx) {
    ctx->id = 4392;
    ctx->coefficient = 5.2;
    ctx->flags = 196;
}

int compute_9wyRHQm(int input) {
    int result = input * 34;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} SYo5s1hO_ctx_t;

void init_ctx(SYo5s1hO_ctx_t *ctx) {
    ctx->id = 7922;
    ctx->coefficient = 0.4;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} IEPEuAon_ctx_t;

void init_ctx(IEPEuAon_ctx_t *ctx) {
    ctx->id = 1528;
    ctx->coefficient = 5.7;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} KqMStQP9_ctx_t;

void init_ctx(KqMStQP9_ctx_t *ctx) {
    ctx->id = 5567;
    ctx->coefficient = 3.8;
    ctx->flags = 58;
}

int compute_JRwZgKT(int input) {
    int result = input * 65;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 5EKJKnxW_ctx_t;

void init_ctx(5EKJKnxW_ctx_t *ctx) {
    ctx->id = 9585;
    ctx->coefficient = 5.7;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} S6G0P2UN_ctx_t;

void init_ctx(S6G0P2UN_ctx_t *ctx) {
    ctx->id = 9632;
    ctx->coefficient = 3.7;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} M9GG9ngk_ctx_t;

void init_ctx(M9GG9ngk_ctx_t *ctx) {
    ctx->id = 8518;
    ctx->coefficient = 3.5;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} qmD5YkPZ_ctx_t;

void init_ctx(qmD5YkPZ_ctx_t *ctx) {
    ctx->id = 3636;
    ctx->coefficient = 3.9;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} t1hT6Ywa_ctx_t;

void init_ctx(t1hT6Ywa_ctx_t *ctx) {
    ctx->id = 2903;
    ctx->coefficient = 7.6;
    ctx->flags = 165;
}

int compute_o9p8IOK(int input) {
    int result = input * 6;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_aTpzfse(int input) {
    int result = input * 13;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} a0S7F7NP_ctx_t;

void init_ctx(a0S7F7NP_ctx_t *ctx) {
    ctx->id = 7769;
    ctx->coefficient = 2.3;
    ctx->flags = 175;
}

int compute_mkTQhnI(int input) {
    int result = input * 13;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_fYRdvoL(int input) {
    int result = input * 15;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} RPvrvhnT_ctx_t;

void init_ctx(RPvrvhnT_ctx_t *ctx) {
    ctx->id = 4382;
    ctx->coefficient = 3.2;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} elnN4O5r_ctx_t;

void init_ctx(elnN4O5r_ctx_t *ctx) {
    ctx->id = 5905;
    ctx->coefficient = 3.0;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} gWk8cp4H_ctx_t;

void init_ctx(gWk8cp4H_ctx_t *ctx) {
    ctx->id = 4533;
    ctx->coefficient = 5.0;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} oBXxrS7m_ctx_t;

void init_ctx(oBXxrS7m_ctx_t *ctx) {
    ctx->id = 8302;
    ctx->coefficient = 7.5;
    ctx->flags = 241;
}

int compute_WxkjzH0(int input) {
    int result = input * 54;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} TP3sxWlf_ctx_t;

void init_ctx(TP3sxWlf_ctx_t *ctx) {
    ctx->id = 8675;
    ctx->coefficient = 7.1;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 0mM6WHDP_ctx_t;

void init_ctx(0mM6WHDP_ctx_t *ctx) {
    ctx->id = 4010;
    ctx->coefficient = 4.4;
    ctx->flags = 159;
}

int compute_aSUjSSk(int input) {
    int result = input * 64;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} l9jgpFyt_ctx_t;

void init_ctx(l9jgpFyt_ctx_t *ctx) {
    ctx->id = 3207;
    ctx->coefficient = 9.7;
    ctx->flags = 72;
}

int compute_IlgwwQv(int input) {
    int result = input * 63;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} hwiGurbQ_ctx_t;

void init_ctx(hwiGurbQ_ctx_t *ctx) {
    ctx->id = 3465;
    ctx->coefficient = 2.7;
    ctx->flags = 55;
}

int compute_4h4D16K(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_xfF9W0B(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} iaiY3iWW_ctx_t;

void init_ctx(iaiY3iWW_ctx_t *ctx) {
    ctx->id = 2832;
    ctx->coefficient = 9.4;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} gHYifGOM_ctx_t;

void init_ctx(gHYifGOM_ctx_t *ctx) {
    ctx->id = 7794;
    ctx->coefficient = 7.5;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} wITOIYvQ_ctx_t;

void init_ctx(wITOIYvQ_ctx_t *ctx) {
    ctx->id = 3633;
    ctx->coefficient = 6.5;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} E5vZ3Eo2_ctx_t;

void init_ctx(E5vZ3Eo2_ctx_t *ctx) {
    ctx->id = 7957;
    ctx->coefficient = 6.6;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 2qxCkxeL_ctx_t;

void init_ctx(2qxCkxeL_ctx_t *ctx) {
    ctx->id = 2536;
    ctx->coefficient = 4.3;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 7hhjwYe9_ctx_t;

void init_ctx(7hhjwYe9_ctx_t *ctx) {
    ctx->id = 1730;
    ctx->coefficient = 1.1;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 2DGMGeLJ_ctx_t;

void init_ctx(2DGMGeLJ_ctx_t *ctx) {
    ctx->id = 9103;
    ctx->coefficient = 5.8;
    ctx->flags = 143;
}

int compute_OhZOam6(int input) {
    int result = input * 43;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} EAhEm5Q4_ctx_t;

void init_ctx(EAhEm5Q4_ctx_t *ctx) {
    ctx->id = 4486;
    ctx->coefficient = 5.2;
    ctx->flags = 67;
}

int compute_IJ5bVJ5(int input) {
    int result = input * 21;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_sR3eVFu(int input) {
    int result = input * 22;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} daSj30IL_ctx_t;

void init_ctx(daSj30IL_ctx_t *ctx) {
    ctx->id = 9286;
    ctx->coefficient = 7.8;
    ctx->flags = 68;
}

int compute_QlXGiX0(int input) {
    int result = input * 21;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_yzn6Sa7(int input) {
    int result = input * 57;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} QvAGq3CV_ctx_t;

void init_ctx(QvAGq3CV_ctx_t *ctx) {
    ctx->id = 6256;
    ctx->coefficient = 1.9;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 0No6XQQh_ctx_t;

void init_ctx(0No6XQQh_ctx_t *ctx) {
    ctx->id = 7122;
    ctx->coefficient = 8.9;
    ctx->flags = 182;
}

int compute_qTBTmKB(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_MLLl23G(int input) {
    int result = input * 53;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ljdiAUkQ_ctx_t;

void init_ctx(ljdiAUkQ_ctx_t *ctx) {
    ctx->id = 7914;
    ctx->coefficient = 3.6;
    ctx->flags = 10;
}

int compute_oORAUmg(int input) {
    int result = input * 3;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} nt43k3TI_ctx_t;

void init_ctx(nt43k3TI_ctx_t *ctx) {
    ctx->id = 9065;
    ctx->coefficient = 4.3;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 5qPnSwpt_ctx_t;

void init_ctx(5qPnSwpt_ctx_t *ctx) {
    ctx->id = 9204;
    ctx->coefficient = 0.3;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} y8ho83KW_ctx_t;

void init_ctx(y8ho83KW_ctx_t *ctx) {
    ctx->id = 2863;
    ctx->coefficient = 8.2;
    ctx->flags = 135;
}

int compute_hStMhoc(int input) {
    int result = input * 23;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 0Mn8K2Ae_ctx_t;

void init_ctx(0Mn8K2Ae_ctx_t *ctx) {
    ctx->id = 2305;
    ctx->coefficient = 4.0;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} W9igrCOw_ctx_t;

void init_ctx(W9igrCOw_ctx_t *ctx) {
    ctx->id = 8117;
    ctx->coefficient = 7.6;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} svFciQKu_ctx_t;

void init_ctx(svFciQKu_ctx_t *ctx) {
    ctx->id = 4263;
    ctx->coefficient = 3.1;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Pr5ipeC5_ctx_t;

void init_ctx(Pr5ipeC5_ctx_t *ctx) {
    ctx->id = 9134;
    ctx->coefficient = 0.8;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} egF03iK1_ctx_t;

void init_ctx(egF03iK1_ctx_t *ctx) {
    ctx->id = 3243;
    ctx->coefficient = 6.7;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} FJnRbMay_ctx_t;

void init_ctx(FJnRbMay_ctx_t *ctx) {
    ctx->id = 4436;
    ctx->coefficient = 0.2;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} V7nMzH6t_ctx_t;

void init_ctx(V7nMzH6t_ctx_t *ctx) {
    ctx->id = 2284;
    ctx->coefficient = 4.8;
    ctx->flags = 103;
}

int compute_4UXG148(int input) {
    int result = input * 23;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} YepW547F_ctx_t;

void init_ctx(YepW547F_ctx_t *ctx) {
    ctx->id = 1728;
    ctx->coefficient = 5.0;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} R78Aohf2_ctx_t;

void init_ctx(R78Aohf2_ctx_t *ctx) {
    ctx->id = 9962;
    ctx->coefficient = 4.6;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} IQsSeK91_ctx_t;

void init_ctx(IQsSeK91_ctx_t *ctx) {
    ctx->id = 4264;
    ctx->coefficient = 5.7;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 2TNcsON7_ctx_t;

void init_ctx(2TNcsON7_ctx_t *ctx) {
    ctx->id = 2415;
    ctx->coefficient = 3.7;
    ctx->flags = 35;
}

int compute_07QTBTp(int input) {
    int result = input * 15;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_JW5OQib(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Nnmk5E0U_ctx_t;

void init_ctx(Nnmk5E0U_ctx_t *ctx) {
    ctx->id = 5495;
    ctx->coefficient = 8.4;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} dut1q9cj_ctx_t;

void init_ctx(dut1q9cj_ctx_t *ctx) {
    ctx->id = 3477;
    ctx->coefficient = 3.1;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 9EHRgBjb_ctx_t;

void init_ctx(9EHRgBjb_ctx_t *ctx) {
    ctx->id = 7946;
    ctx->coefficient = 0.9;
    ctx->flags = 102;
}

int compute_vzG2GpQ(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_l7fYqUt(int input) {
    int result = input * 27;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 0maDs0du_ctx_t;

void init_ctx(0maDs0du_ctx_t *ctx) {
    ctx->id = 4092;
    ctx->coefficient = 1.5;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} WmcPiW3h_ctx_t;

void init_ctx(WmcPiW3h_ctx_t *ctx) {
    ctx->id = 3789;
    ctx->coefficient = 6.7;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} vLjLnlhr_ctx_t;

void init_ctx(vLjLnlhr_ctx_t *ctx) {
    ctx->id = 5989;
    ctx->coefficient = 9.4;
    ctx->flags = 211;
}

int compute_q8vtG4y(int input) {
    int result = input * 14;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} FxkZ6gCD_ctx_t;

void init_ctx(FxkZ6gCD_ctx_t *ctx) {
    ctx->id = 8490;
    ctx->coefficient = 6.4;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Uq7XzFbJ_ctx_t;

void init_ctx(Uq7XzFbJ_ctx_t *ctx) {
    ctx->id = 6505;
    ctx->coefficient = 3.5;
    ctx->flags = 186;
}

int compute_H4ZMUpz(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} b76FFngw_ctx_t;

void init_ctx(b76FFngw_ctx_t *ctx) {
    ctx->id = 3975;
    ctx->coefficient = 1.5;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 45XXADMq_ctx_t;

void init_ctx(45XXADMq_ctx_t *ctx) {
    ctx->id = 9425;
    ctx->coefficient = 8.3;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} NCsJFY7u_ctx_t;

void init_ctx(NCsJFY7u_ctx_t *ctx) {
    ctx->id = 9398;
    ctx->coefficient = 8.5;
    ctx->flags = 224;
}

int compute_am5Al4G(int input) {
    int result = input * 52;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_WUq9jtV(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} WuiRR82C_ctx_t;

void init_ctx(WuiRR82C_ctx_t *ctx) {
    ctx->id = 8101;
    ctx->coefficient = 5.1;
    ctx->flags = 78;
}

int compute_QhicdH5(int input) {
    int result = input * 25;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} CAkgT4cN_ctx_t;

void init_ctx(CAkgT4cN_ctx_t *ctx) {
    ctx->id = 1922;
    ctx->coefficient = 4.7;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 0oA0joZG_ctx_t;

void init_ctx(0oA0joZG_ctx_t *ctx) {
    ctx->id = 4763;
    ctx->coefficient = 8.2;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} IMY3SWvN_ctx_t;

void init_ctx(IMY3SWvN_ctx_t *ctx) {
    ctx->id = 4814;
    ctx->coefficient = 3.8;
    ctx->flags = 163;
}

int compute_wL86EIv(int input) {
    int result = input * 52;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} EnH6ZOFl_ctx_t;

void init_ctx(EnH6ZOFl_ctx_t *ctx) {
    ctx->id = 6788;
    ctx->coefficient = 0.9;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} oUDtlP8m_ctx_t;

void init_ctx(oUDtlP8m_ctx_t *ctx) {
    ctx->id = 2161;
    ctx->coefficient = 5.9;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} G3azxyb0_ctx_t;

void init_ctx(G3azxyb0_ctx_t *ctx) {
    ctx->id = 1292;
    ctx->coefficient = 1.2;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 3BiuIBCS_ctx_t;

void init_ctx(3BiuIBCS_ctx_t *ctx) {
    ctx->id = 9705;
    ctx->coefficient = 3.1;
    ctx->flags = 186;
}

int compute_2gKdbnp(int input) {
    int result = input * 67;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_E441zUP(int input) {
    int result = input * 55;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Fm4BMlAO_ctx_t;

void init_ctx(Fm4BMlAO_ctx_t *ctx) {
    ctx->id = 6685;
    ctx->coefficient = 8.2;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} TTdmDIF6_ctx_t;

void init_ctx(TTdmDIF6_ctx_t *ctx) {
    ctx->id = 6194;
    ctx->coefficient = 9.5;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Vrqj8Hi4_ctx_t;

void init_ctx(Vrqj8Hi4_ctx_t *ctx) {
    ctx->id = 3694;
    ctx->coefficient = 3.4;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ekpcqPeH_ctx_t;

void init_ctx(ekpcqPeH_ctx_t *ctx) {
    ctx->id = 7696;
    ctx->coefficient = 1.4;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} SedA8j2m_ctx_t;

void init_ctx(SedA8j2m_ctx_t *ctx) {
    ctx->id = 4856;
    ctx->coefficient = 5.0;
    ctx->flags = 203;
}

int compute_ao1OIi1(int input) {
    int result = input * 34;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Dia27lXg_ctx_t;

void init_ctx(Dia27lXg_ctx_t *ctx) {
    ctx->id = 7128;
    ctx->coefficient = 1.8;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} xmqsOuKd_ctx_t;

void init_ctx(xmqsOuKd_ctx_t *ctx) {
    ctx->id = 2761;
    ctx->coefficient = 0.6;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} GJwRNTyT_ctx_t;

void init_ctx(GJwRNTyT_ctx_t *ctx) {
    ctx->id = 3701;
    ctx->coefficient = 7.8;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 7JFnVMyY_ctx_t;

void init_ctx(7JFnVMyY_ctx_t *ctx) {
    ctx->id = 4777;
    ctx->coefficient = 3.3;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} YOErMKde_ctx_t;

void init_ctx(YOErMKde_ctx_t *ctx) {
    ctx->id = 7998;
    ctx->coefficient = 1.1;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} PK4pfPVb_ctx_t;

void init_ctx(PK4pfPVb_ctx_t *ctx) {
    ctx->id = 5737;
    ctx->coefficient = 5.2;
    ctx->flags = 154;
}

int compute_NmjC0Li(int input) {
    int result = input * 14;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_3tE4Xft(int input) {
    int result = input * 68;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_EImN1az(int input) {
    int result = input * 54;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_sTfjpyf(int input) {
    int result = input * 25;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} EwiuN7XN_ctx_t;

void init_ctx(EwiuN7XN_ctx_t *ctx) {
    ctx->id = 9923;
    ctx->coefficient = 7.1;
    ctx->flags = 242;
}

int compute_phyRHye(int input) {
    int result = input * 57;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} NeH7yjYv_ctx_t;

void init_ctx(NeH7yjYv_ctx_t *ctx) {
    ctx->id = 8745;
    ctx->coefficient = 7.7;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} LF9N20tI_ctx_t;

void init_ctx(LF9N20tI_ctx_t *ctx) {
    ctx->id = 8186;
    ctx->coefficient = 8.9;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} m4ZA44nL_ctx_t;

void init_ctx(m4ZA44nL_ctx_t *ctx) {
    ctx->id = 5524;
    ctx->coefficient = 1.2;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} hHhpa6eo_ctx_t;

void init_ctx(hHhpa6eo_ctx_t *ctx) {
    ctx->id = 6394;
    ctx->coefficient = 4.5;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} tl5Ed4p6_ctx_t;

void init_ctx(tl5Ed4p6_ctx_t *ctx) {
    ctx->id = 1902;
    ctx->coefficient = 1.0;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} Y9UwAgLJ_ctx_t;

void init_ctx(Y9UwAgLJ_ctx_t *ctx) {
    ctx->id = 6760;
    ctx->coefficient = 5.3;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} KpqIouWJ_ctx_t;

void init_ctx(KpqIouWJ_ctx_t *ctx) {
    ctx->id = 8615;
    ctx->coefficient = 6.3;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} xLmiVe9P_ctx_t;

void init_ctx(xLmiVe9P_ctx_t *ctx) {
    ctx->id = 6784;
    ctx->coefficient = 3.4;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} w9XTKkiQ_ctx_t;

void init_ctx(w9XTKkiQ_ctx_t *ctx) {
    ctx->id = 5822;
    ctx->coefficient = 5.4;
    ctx->flags = 229;
}

int compute_b8ntaqd(int input) {
    int result = input * 61;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_czHgNPB(int input) {
    int result = input * 64;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} FUPDJP6T_ctx_t;

void init_ctx(FUPDJP6T_ctx_t *ctx) {
    ctx->id = 9984;
    ctx->coefficient = 9.9;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} PNwcBl6g_ctx_t;

void init_ctx(PNwcBl6g_ctx_t *ctx) {
    ctx->id = 9752;
    ctx->coefficient = 7.6;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 9kwD5fnd_ctx_t;

void init_ctx(9kwD5fnd_ctx_t *ctx) {
    ctx->id = 5453;
    ctx->coefficient = 7.2;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 3WASghXY_ctx_t;

void init_ctx(3WASghXY_ctx_t *ctx) {
    ctx->id = 6028;
    ctx->coefficient = 2.0;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} PBvGguT7_ctx_t;

void init_ctx(PBvGguT7_ctx_t *ctx) {
    ctx->id = 5780;
    ctx->coefficient = 9.2;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} VUcv7xjR_ctx_t;

void init_ctx(VUcv7xjR_ctx_t *ctx) {
    ctx->id = 7139;
    ctx->coefficient = 2.4;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} ShAbpZAB_ctx_t;

void init_ctx(ShAbpZAB_ctx_t *ctx) {
    ctx->id = 5691;
    ctx->coefficient = 8.3;
    ctx->flags = 195;
}

int compute_D3fv3gS(int input) {
    int result = input * 27;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_h1g5zqc(int input) {
    int result = input * 66;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_MKtU4oE(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} YX4oblam_ctx_t;

void init_ctx(YX4oblam_ctx_t *ctx) {
    ctx->id = 1992;
    ctx->coefficient = 9.3;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Gmj9GKtg_ctx_t;

void init_ctx(Gmj9GKtg_ctx_t *ctx) {
    ctx->id = 5773;
    ctx->coefficient = 2.1;
    ctx->flags = 35;
}

int compute_xYoPqJ5(int input) {
    int result = input * 47;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} zUNLbqj0_ctx_t;

void init_ctx(zUNLbqj0_ctx_t *ctx) {
    ctx->id = 1309;
    ctx->coefficient = 0.1;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} QziyqodG_ctx_t;

void init_ctx(QziyqodG_ctx_t *ctx) {
    ctx->id = 6111;
    ctx->coefficient = 5.6;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} u5PFsxb6_ctx_t;

void init_ctx(u5PFsxb6_ctx_t *ctx) {
    ctx->id = 3555;
    ctx->coefficient = 5.0;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} a5QmWdAM_ctx_t;

void init_ctx(a5QmWdAM_ctx_t *ctx) {
    ctx->id = 9894;
    ctx->coefficient = 2.2;
    ctx->flags = 131;
}

int compute_vRrgJCX(int input) {
    int result = input * 29;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_eerj5mB(int input) {
    int result = input * 37;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_eBfZk33(int input) {
    int result = input * 36;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 2XbsHMEF_ctx_t;

void init_ctx(2XbsHMEF_ctx_t *ctx) {
    ctx->id = 9733;
    ctx->coefficient = 2.9;
    ctx->flags = 224;
}

int compute_7S44NWu(int input) {
    int result = input * 59;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_QVPnH74(int input) {
    int result = input * 34;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_aVPq8VO(int input) {
    int result = input * 9;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} NlNzmi7B_ctx_t;

void init_ctx(NlNzmi7B_ctx_t *ctx) {
    ctx->id = 9757;
    ctx->coefficient = 3.0;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Lcpaz9wK_ctx_t;

void init_ctx(Lcpaz9wK_ctx_t *ctx) {
    ctx->id = 1036;
    ctx->coefficient = 6.9;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} VERDQbFP_ctx_t;

void init_ctx(VERDQbFP_ctx_t *ctx) {
    ctx->id = 1598;
    ctx->coefficient = 1.1;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 6DGfXua0_ctx_t;

void init_ctx(6DGfXua0_ctx_t *ctx) {
    ctx->id = 2507;
    ctx->coefficient = 0.3;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} sfWmxovQ_ctx_t;

void init_ctx(sfWmxovQ_ctx_t *ctx) {
    ctx->id = 3658;
    ctx->coefficient = 0.5;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 9ETDOvNy_ctx_t;

void init_ctx(9ETDOvNy_ctx_t *ctx) {
    ctx->id = 6938;
    ctx->coefficient = 6.1;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} y01vfEjz_ctx_t;

void init_ctx(y01vfEjz_ctx_t *ctx) {
    ctx->id = 1890;
    ctx->coefficient = 9.1;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} yh7ZH8Dw_ctx_t;

void init_ctx(yh7ZH8Dw_ctx_t *ctx) {
    ctx->id = 2900;
    ctx->coefficient = 2.8;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} N3MaaBcq_ctx_t;

void init_ctx(N3MaaBcq_ctx_t *ctx) {
    ctx->id = 1267;
    ctx->coefficient = 7.4;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} fyVXf2yu_ctx_t;

void init_ctx(fyVXf2yu_ctx_t *ctx) {
    ctx->id = 5521;
    ctx->coefficient = 4.5;
    ctx->flags = 127;
}

int compute_MRbggc6(int input) {
    int result = input * 14;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 6N9UOQoK_ctx_t;

void init_ctx(6N9UOQoK_ctx_t *ctx) {
    ctx->id = 8106;
    ctx->coefficient = 0.2;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} qBilBIiB_ctx_t;

void init_ctx(qBilBIiB_ctx_t *ctx) {
    ctx->id = 2612;
    ctx->coefficient = 7.2;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} K0HYY2Cb_ctx_t;

void init_ctx(K0HYY2Cb_ctx_t *ctx) {
    ctx->id = 4032;
    ctx->coefficient = 5.3;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} OdQ9DKVE_ctx_t;

void init_ctx(OdQ9DKVE_ctx_t *ctx) {
    ctx->id = 9768;
    ctx->coefficient = 1.3;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} NUAARxnD_ctx_t;

void init_ctx(NUAARxnD_ctx_t *ctx) {
    ctx->id = 6038;
    ctx->coefficient = 8.1;
    ctx->flags = 194;
}

int compute_ZBbbwqg(int input) {
    int result = input * 23;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_AuCAyDF(int input) {
    int result = input * 4;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} OMWfsZFA_ctx_t;

void init_ctx(OMWfsZFA_ctx_t *ctx) {
    ctx->id = 2839;
    ctx->coefficient = 9.5;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} KAdv7GcL_ctx_t;

void init_ctx(KAdv7GcL_ctx_t *ctx) {
    ctx->id = 8324;
    ctx->coefficient = 1.0;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} yP0c6Rl4_ctx_t;

void init_ctx(yP0c6Rl4_ctx_t *ctx) {
    ctx->id = 9408;
    ctx->coefficient = 2.2;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} KvCis2Jr_ctx_t;

void init_ctx(KvCis2Jr_ctx_t *ctx) {
    ctx->id = 5860;
    ctx->coefficient = 7.3;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} EgVBRG0M_ctx_t;

void init_ctx(EgVBRG0M_ctx_t *ctx) {
    ctx->id = 2109;
    ctx->coefficient = 2.4;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} bJhacBA8_ctx_t;

void init_ctx(bJhacBA8_ctx_t *ctx) {
    ctx->id = 6444;
    ctx->coefficient = 4.1;
    ctx->flags = 255;
}

int compute_wgHRzF3(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} vFiNNg4u_ctx_t;

void init_ctx(vFiNNg4u_ctx_t *ctx) {
    ctx->id = 4942;
    ctx->coefficient = 2.8;
    ctx->flags = 193;
}

int compute_Hl16yTu(int input) {
    int result = input * 61;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 72y2ue8i_ctx_t;

void init_ctx(72y2ue8i_ctx_t *ctx) {
    ctx->id = 7439;
    ctx->coefficient = 5.5;
    ctx->flags = 160;
}

int compute_dSA1U5o(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} rCpHk8bP_ctx_t;

void init_ctx(rCpHk8bP_ctx_t *ctx) {
    ctx->id = 1062;
    ctx->coefficient = 9.5;
    ctx->flags = 51;
}

int compute_IsTnHou(int input) {
    int result = input * 11;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} QIVh6o97_ctx_t;

void init_ctx(QIVh6o97_ctx_t *ctx) {
    ctx->id = 1628;
    ctx->coefficient = 8.0;
    ctx->flags = 57;
}

int compute_622VBSW(int input) {
    int result = input * 46;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} d1p662xd_ctx_t;

void init_ctx(d1p662xd_ctx_t *ctx) {
    ctx->id = 7745;
    ctx->coefficient = 1.9;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} nz9ejCgm_ctx_t;

void init_ctx(nz9ejCgm_ctx_t *ctx) {
    ctx->id = 1933;
    ctx->coefficient = 7.2;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ILhJCRLz_ctx_t;

void init_ctx(ILhJCRLz_ctx_t *ctx) {
    ctx->id = 9739;
    ctx->coefficient = 1.1;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 45wKJJqN_ctx_t;

void init_ctx(45wKJJqN_ctx_t *ctx) {
    ctx->id = 9365;
    ctx->coefficient = 1.9;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} saHVnhIH_ctx_t;

void init_ctx(saHVnhIH_ctx_t *ctx) {
    ctx->id = 5112;
    ctx->coefficient = 5.2;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} IoG4kNjL_ctx_t;

void init_ctx(IoG4kNjL_ctx_t *ctx) {
    ctx->id = 1515;
    ctx->coefficient = 8.7;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 1NZbW7Ka_ctx_t;

void init_ctx(1NZbW7Ka_ctx_t *ctx) {
    ctx->id = 1369;
    ctx->coefficient = 4.1;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 1bi30JrZ_ctx_t;

void init_ctx(1bi30JrZ_ctx_t *ctx) {
    ctx->id = 2625;
    ctx->coefficient = 8.7;
    ctx->flags = 65;
}

int compute_5ruBvxa(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_RJLt6mS(int input) {
    int result = input * 27;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} bh9AUzsH_ctx_t;

void init_ctx(bh9AUzsH_ctx_t *ctx) {
    ctx->id = 6276;
    ctx->coefficient = 5.2;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} gX0QRMBn_ctx_t;

void init_ctx(gX0QRMBn_ctx_t *ctx) {
    ctx->id = 2609;
    ctx->coefficient = 2.2;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} uQNZtIkV_ctx_t;

void init_ctx(uQNZtIkV_ctx_t *ctx) {
    ctx->id = 5688;
    ctx->coefficient = 6.3;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} GNEGXKGX_ctx_t;

void init_ctx(GNEGXKGX_ctx_t *ctx) {
    ctx->id = 8805;
    ctx->coefficient = 2.1;
    ctx->flags = 54;
}

int compute_f5ai5uv(int input) {
    int result = input * 36;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} WHVN0g91_ctx_t;

void init_ctx(WHVN0g91_ctx_t *ctx) {
    ctx->id = 4001;
    ctx->coefficient = 7.3;
    ctx->flags = 39;
}

int compute_6Ds57cj(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} G07zo4T7_ctx_t;

void init_ctx(G07zo4T7_ctx_t *ctx) {
    ctx->id = 3756;
    ctx->coefficient = 9.3;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 5yoixCZN_ctx_t;

void init_ctx(5yoixCZN_ctx_t *ctx) {
    ctx->id = 6731;
    ctx->coefficient = 4.8;
    ctx->flags = 11;
}

int compute_h62ylFa(int input) {
    int result = input * 8;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} UL8trb5p_ctx_t;

void init_ctx(UL8trb5p_ctx_t *ctx) {
    ctx->id = 1778;
    ctx->coefficient = 6.7;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} VxGow36n_ctx_t;

void init_ctx(VxGow36n_ctx_t *ctx) {
    ctx->id = 7358;
    ctx->coefficient = 5.2;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} oDjwve52_ctx_t;

void init_ctx(oDjwve52_ctx_t *ctx) {
    ctx->id = 9127;
    ctx->coefficient = 1.0;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} OcrmTG0m_ctx_t;

void init_ctx(OcrmTG0m_ctx_t *ctx) {
    ctx->id = 1185;
    ctx->coefficient = 2.1;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} B2gDdckv_ctx_t;

void init_ctx(B2gDdckv_ctx_t *ctx) {
    ctx->id = 1499;
    ctx->coefficient = 2.0;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ysBkC5Wu_ctx_t;

void init_ctx(ysBkC5Wu_ctx_t *ctx) {
    ctx->id = 5439;
    ctx->coefficient = 9.2;
    ctx->flags = 167;
}

int compute_jpmpH4V(int input) {
    int result = input * 20;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} nULoXeLa_ctx_t;

void init_ctx(nULoXeLa_ctx_t *ctx) {
    ctx->id = 4187;
    ctx->coefficient = 8.6;
    ctx->flags = 34;
}

int compute_TYns3v9(int input) {
    int result = input * 7;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} BMNI9omZ_ctx_t;

void init_ctx(BMNI9omZ_ctx_t *ctx) {
    ctx->id = 5160;
    ctx->coefficient = 3.6;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} sKJRXEbm_ctx_t;

void init_ctx(sKJRXEbm_ctx_t *ctx) {
    ctx->id = 8563;
    ctx->coefficient = 1.9;
    ctx->flags = 153;
}

int compute_FkosbXU(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} m2cXGYUF_ctx_t;

void init_ctx(m2cXGYUF_ctx_t *ctx) {
    ctx->id = 2785;
    ctx->coefficient = 8.8;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} z6XzvMKW_ctx_t;

void init_ctx(z6XzvMKW_ctx_t *ctx) {
    ctx->id = 6930;
    ctx->coefficient = 0.4;
    ctx->flags = 124;
}

int compute_wmqLpkR(int input) {
    int result = input * 31;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} YHgVqpic_ctx_t;

void init_ctx(YHgVqpic_ctx_t *ctx) {
    ctx->id = 4861;
    ctx->coefficient = 6.2;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} UNuCKYur_ctx_t;

void init_ctx(UNuCKYur_ctx_t *ctx) {
    ctx->id = 2149;
    ctx->coefficient = 0.9;
    ctx->flags = 255;
}

int compute_RY0ouTZ(int input) {
    int result = input * 13;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} dulLvgN1_ctx_t;

void init_ctx(dulLvgN1_ctx_t *ctx) {
    ctx->id = 6097;
    ctx->coefficient = 4.1;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} B3S5B1Vi_ctx_t;

void init_ctx(B3S5B1Vi_ctx_t *ctx) {
    ctx->id = 9351;
    ctx->coefficient = 5.4;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} WmLqtfy2_ctx_t;

void init_ctx(WmLqtfy2_ctx_t *ctx) {
    ctx->id = 5950;
    ctx->coefficient = 9.1;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} SQTSIWrc_ctx_t;

void init_ctx(SQTSIWrc_ctx_t *ctx) {
    ctx->id = 7597;
    ctx->coefficient = 3.3;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} rEOCsMQW_ctx_t;

void init_ctx(rEOCsMQW_ctx_t *ctx) {
    ctx->id = 9948;
    ctx->coefficient = 2.6;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} jqObRQll_ctx_t;

void init_ctx(jqObRQll_ctx_t *ctx) {
    ctx->id = 6748;
    ctx->coefficient = 6.3;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} FePCkVoF_ctx_t;

void init_ctx(FePCkVoF_ctx_t *ctx) {
    ctx->id = 4760;
    ctx->coefficient = 6.2;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 4V4TUmFt_ctx_t;

void init_ctx(4V4TUmFt_ctx_t *ctx) {
    ctx->id = 4846;
    ctx->coefficient = 7.5;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} BE38iu0C_ctx_t;

void init_ctx(BE38iu0C_ctx_t *ctx) {
    ctx->id = 4586;
    ctx->coefficient = 5.9;
    ctx->flags = 45;
}

int compute_whKyrKt(int input) {
    int result = input * 11;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} NaFSTvvC_ctx_t;

void init_ctx(NaFSTvvC_ctx_t *ctx) {
    ctx->id = 2160;
    ctx->coefficient = 5.8;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} n4mGwbX4_ctx_t;

void init_ctx(n4mGwbX4_ctx_t *ctx) {
    ctx->id = 1174;
    ctx->coefficient = 7.2;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 9Kyiqm49_ctx_t;

void init_ctx(9Kyiqm49_ctx_t *ctx) {
    ctx->id = 2458;
    ctx->coefficient = 7.4;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} PZR8KQW8_ctx_t;

void init_ctx(PZR8KQW8_ctx_t *ctx) {
    ctx->id = 3327;
    ctx->coefficient = 8.2;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} b0DDAdpE_ctx_t;

void init_ctx(b0DDAdpE_ctx_t *ctx) {
    ctx->id = 3975;
    ctx->coefficient = 4.3;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 6Nq9TZpt_ctx_t;

void init_ctx(6Nq9TZpt_ctx_t *ctx) {
    ctx->id = 2405;
    ctx->coefficient = 3.7;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} E4HQuRP4_ctx_t;

void init_ctx(E4HQuRP4_ctx_t *ctx) {
    ctx->id = 5043;
    ctx->coefficient = 6.5;
    ctx->flags = 142;
}

int compute_QzN57jU(int input) {
    int result = input * 22;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 4L15akk4_ctx_t;

void init_ctx(4L15akk4_ctx_t *ctx) {
    ctx->id = 3947;
    ctx->coefficient = 7.3;
    ctx->flags = 136;
}

int compute_m260NKb(int input) {
    int result = input * 68;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 5JfP9SwT_ctx_t;

void init_ctx(5JfP9SwT_ctx_t *ctx) {
    ctx->id = 3329;
    ctx->coefficient = 2.5;
    ctx->flags = 122;
}

int compute_Esa5loL(int input) {
    int result = input * 12;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_sDtRDPm(int input) {
    int result = input * 33;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_9NRWe9a(int input) {
    int result = input * 36;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} o1JvxLGn_ctx_t;

void init_ctx(o1JvxLGn_ctx_t *ctx) {
    ctx->id = 9621;
    ctx->coefficient = 9.5;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} qZDEqoze_ctx_t;

void init_ctx(qZDEqoze_ctx_t *ctx) {
    ctx->id = 8160;
    ctx->coefficient = 2.9;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ryyVSykI_ctx_t;

void init_ctx(ryyVSykI_ctx_t *ctx) {
    ctx->id = 6114;
    ctx->coefficient = 0.3;
    ctx->flags = 142;
}

int compute_kA8419i(int input) {
    int result = input * 51;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} gPtWHHsa_ctx_t;

void init_ctx(gPtWHHsa_ctx_t *ctx) {
    ctx->id = 1419;
    ctx->coefficient = 4.1;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 99exftK3_ctx_t;

void init_ctx(99exftK3_ctx_t *ctx) {
    ctx->id = 2922;
    ctx->coefficient = 2.9;
    ctx->flags = 42;
}

int compute_nEm3p43(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} t6UEY291_ctx_t;

void init_ctx(t6UEY291_ctx_t *ctx) {
    ctx->id = 6639;
    ctx->coefficient = 6.6;
    ctx->flags = 1;
}

int compute_s6ML06e(int input) {
    int result = input * 37;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_5HJSuyw(int input) {
    int result = input * 62;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_m74s4gH(int input) {
    int result = input * 26;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_bPyED3i(int input) {
    int result = input * 44;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} DKymSrPo_ctx_t;

void init_ctx(DKymSrPo_ctx_t *ctx) {
    ctx->id = 4875;
    ctx->coefficient = 7.4;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} jfJzXknd_ctx_t;

void init_ctx(jfJzXknd_ctx_t *ctx) {
    ctx->id = 1081;
    ctx->coefficient = 5.6;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} tuSmMy06_ctx_t;

void init_ctx(tuSmMy06_ctx_t *ctx) {
    ctx->id = 7414;
    ctx->coefficient = 6.4;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} dA6kyK4n_ctx_t;

void init_ctx(dA6kyK4n_ctx_t *ctx) {
    ctx->id = 8249;
    ctx->coefficient = 2.5;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} FrmzKX0t_ctx_t;

void init_ctx(FrmzKX0t_ctx_t *ctx) {
    ctx->id = 8583;
    ctx->coefficient = 0.3;
    ctx->flags = 32;
}

int compute_UC1jhZC(int input) {
    int result = input * 23;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 6Hg05TNU_ctx_t;

void init_ctx(6Hg05TNU_ctx_t *ctx) {
    ctx->id = 6852;
    ctx->coefficient = 7.8;
    ctx->flags = 104;
}

int compute_19tPD3a(int input) {
    int result = input * 44;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 7qBJBfiR_ctx_t;

void init_ctx(7qBJBfiR_ctx_t *ctx) {
    ctx->id = 4178;
    ctx->coefficient = 9.4;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} kX38FTA7_ctx_t;

void init_ctx(kX38FTA7_ctx_t *ctx) {
    ctx->id = 4540;
    ctx->coefficient = 2.2;
    ctx->flags = 147;
}

int compute_cqH4cLZ(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Z61qmg5E_ctx_t;

void init_ctx(Z61qmg5E_ctx_t *ctx) {
    ctx->id = 6487;
    ctx->coefficient = 9.9;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} SF7ttYoZ_ctx_t;

void init_ctx(SF7ttYoZ_ctx_t *ctx) {
    ctx->id = 4142;
    ctx->coefficient = 5.0;
    ctx->flags = 75;
}

int compute_lIt5mcU(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} VO3PYBzy_ctx_t;

void init_ctx(VO3PYBzy_ctx_t *ctx) {
    ctx->id = 2261;
    ctx->coefficient = 6.6;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} PLEkt51u_ctx_t;

void init_ctx(PLEkt51u_ctx_t *ctx) {
    ctx->id = 8297;
    ctx->coefficient = 6.3;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} a8A1CmzS_ctx_t;

void init_ctx(a8A1CmzS_ctx_t *ctx) {
    ctx->id = 7550;
    ctx->coefficient = 6.4;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} hUMDV7OH_ctx_t;

void init_ctx(hUMDV7OH_ctx_t *ctx) {
    ctx->id = 7099;
    ctx->coefficient = 5.8;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} rOKbsEz6_ctx_t;

void init_ctx(rOKbsEz6_ctx_t *ctx) {
    ctx->id = 2392;
    ctx->coefficient = 0.1;
    ctx->flags = 58;
}

int compute_SIL830H(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_jVRx6q0(int input) {
    int result = input * 40;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} cJE8JGEH_ctx_t;

void init_ctx(cJE8JGEH_ctx_t *ctx) {
    ctx->id = 5691;
    ctx->coefficient = 0.8;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} FHrgm3d8_ctx_t;

void init_ctx(FHrgm3d8_ctx_t *ctx) {
    ctx->id = 4615;
    ctx->coefficient = 1.3;
    ctx->flags = 196;
}

int compute_QHLmHQi(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_KwHkQ6G(int input) {
    int result = input * 56;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_xFWlWhf(int input) {
    int result = input * 11;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} LlMpklwj_ctx_t;

void init_ctx(LlMpklwj_ctx_t *ctx) {
    ctx->id = 9646;
    ctx->coefficient = 0.2;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} bg00BJob_ctx_t;

void init_ctx(bg00BJob_ctx_t *ctx) {
    ctx->id = 9146;
    ctx->coefficient = 9.4;
    ctx->flags = 26;
}

int compute_7NZrGXD(int input) {
    int result = input * 67;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_yPJOewe(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_qFVsT5C(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} u2M6sUH5_ctx_t;

void init_ctx(u2M6sUH5_ctx_t *ctx) {
    ctx->id = 5148;
    ctx->coefficient = 9.2;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} d5Zr1gYf_ctx_t;

void init_ctx(d5Zr1gYf_ctx_t *ctx) {
    ctx->id = 3957;
    ctx->coefficient = 7.1;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} OdNVD5VY_ctx_t;

void init_ctx(OdNVD5VY_ctx_t *ctx) {
    ctx->id = 4871;
    ctx->coefficient = 7.1;
    ctx->flags = 41;
}

int compute_C7WwTUP(int input) {
    int result = input * 26;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_eFq7qG3(int input) {
    int result = input * 54;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} T1Oncysd_ctx_t;

void init_ctx(T1Oncysd_ctx_t *ctx) {
    ctx->id = 3460;
    ctx->coefficient = 3.0;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} nrh6yl9q_ctx_t;

void init_ctx(nrh6yl9q_ctx_t *ctx) {
    ctx->id = 5507;
    ctx->coefficient = 0.9;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} nDudOoOO_ctx_t;

void init_ctx(nDudOoOO_ctx_t *ctx) {
    ctx->id = 2291;
    ctx->coefficient = 2.8;
    ctx->flags = 45;
}

int compute_HsNtA5s(int input) {
    int result = input * 4;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} r3EK5i3c_ctx_t;

void init_ctx(r3EK5i3c_ctx_t *ctx) {
    ctx->id = 9517;
    ctx->coefficient = 2.9;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} zLM2NT8b_ctx_t;

void init_ctx(zLM2NT8b_ctx_t *ctx) {
    ctx->id = 3421;
    ctx->coefficient = 4.8;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} W1VsBezh_ctx_t;

void init_ctx(W1VsBezh_ctx_t *ctx) {
    ctx->id = 6426;
    ctx->coefficient = 8.9;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 9jQrrpex_ctx_t;

void init_ctx(9jQrrpex_ctx_t *ctx) {
    ctx->id = 2596;
    ctx->coefficient = 1.5;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} vQYGk10X_ctx_t;

void init_ctx(vQYGk10X_ctx_t *ctx) {
    ctx->id = 9862;
    ctx->coefficient = 7.7;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} U7HaKVyZ_ctx_t;

void init_ctx(U7HaKVyZ_ctx_t *ctx) {
    ctx->id = 4011;
    ctx->coefficient = 1.6;
    ctx->flags = 224;
}

int compute_BWNUiQs(int input) {
    int result = input * 36;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Vy2oQpQo_ctx_t;

void init_ctx(Vy2oQpQo_ctx_t *ctx) {
    ctx->id = 8818;
    ctx->coefficient = 6.5;
    ctx->flags = 43;
}

int compute_f257ZKF(int input) {
    int result = input * 20;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 1Q1luzDy_ctx_t;

void init_ctx(1Q1luzDy_ctx_t *ctx) {
    ctx->id = 5210;
    ctx->coefficient = 10.0;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} YoDqrQyL_ctx_t;

void init_ctx(YoDqrQyL_ctx_t *ctx) {
    ctx->id = 4912;
    ctx->coefficient = 0.5;
    ctx->flags = 19;
}

int compute_XuPCqH8(int input) {
    int result = input * 61;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_uAIfd1i(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_zJixKyS(int input) {
    int result = input * 67;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} EYHDhFVT_ctx_t;

void init_ctx(EYHDhFVT_ctx_t *ctx) {
    ctx->id = 7237;
    ctx->coefficient = 0.1;
    ctx->flags = 248;
}

int compute_10Ga0FI(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_mzrHxiG(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 3ByIGoCd_ctx_t;

void init_ctx(3ByIGoCd_ctx_t *ctx) {
    ctx->id = 3863;
    ctx->coefficient = 9.1;
    ctx->flags = 6;
}

int compute_Va8ZHsJ(int input) {
    int result = input * 38;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} A4G8kLwF_ctx_t;

void init_ctx(A4G8kLwF_ctx_t *ctx) {
    ctx->id = 1790;
    ctx->coefficient = 8.0;
    ctx->flags = 38;
}

int compute_Cn4EVmv(int input) {
    int result = input * 42;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_O2mcpnd(int input) {
    int result = input * 27;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} vTfV38Cu_ctx_t;

void init_ctx(vTfV38Cu_ctx_t *ctx) {
    ctx->id = 1237;
    ctx->coefficient = 4.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} P4pGVzY0_ctx_t;

void init_ctx(P4pGVzY0_ctx_t *ctx) {
    ctx->id = 6485;
    ctx->coefficient = 8.9;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} Uh8alOnT_ctx_t;

void init_ctx(Uh8alOnT_ctx_t *ctx) {
    ctx->id = 6099;
    ctx->coefficient = 9.1;
    ctx->flags = 138;
}

int compute_6tYMASq(int input) {
    int result = input * 33;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} wfLtGghb_ctx_t;

void init_ctx(wfLtGghb_ctx_t *ctx) {
    ctx->id = 8330;
    ctx->coefficient = 0.7;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} mkKbr4XQ_ctx_t;

void init_ctx(mkKbr4XQ_ctx_t *ctx) {
    ctx->id = 9174;
    ctx->coefficient = 5.8;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} SouPgNv7_ctx_t;

void init_ctx(SouPgNv7_ctx_t *ctx) {
    ctx->id = 8774;
    ctx->coefficient = 1.8;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} sUj4TD0F_ctx_t;

void init_ctx(sUj4TD0F_ctx_t *ctx) {
    ctx->id = 4267;
    ctx->coefficient = 2.9;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} S1iqDiqx_ctx_t;

void init_ctx(S1iqDiqx_ctx_t *ctx) {
    ctx->id = 7073;
    ctx->coefficient = 0.4;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} JdDSFJWc_ctx_t;

void init_ctx(JdDSFJWc_ctx_t *ctx) {
    ctx->id = 3948;
    ctx->coefficient = 0.3;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Op1Erodo_ctx_t;

void init_ctx(Op1Erodo_ctx_t *ctx) {
    ctx->id = 1734;
    ctx->coefficient = 0.8;
    ctx->flags = 52;
}

int compute_mZMdCP7(int input) {
    int result = input * 38;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 4EfuxhEZ_ctx_t;

void init_ctx(4EfuxhEZ_ctx_t *ctx) {
    ctx->id = 2282;
    ctx->coefficient = 2.9;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} BgVsLoZo_ctx_t;

void init_ctx(BgVsLoZo_ctx_t *ctx) {
    ctx->id = 8965;
    ctx->coefficient = 7.3;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} ts5kRJgE_ctx_t;

void init_ctx(ts5kRJgE_ctx_t *ctx) {
    ctx->id = 9396;
    ctx->coefficient = 8.9;
    ctx->flags = 81;
}

int compute_JbbCVfT(int input) {
    int result = input * 45;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_1d3QzO6(int input) {
    int result = input * 36;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} rB1jn95n_ctx_t;

void init_ctx(rB1jn95n_ctx_t *ctx) {
    ctx->id = 1348;
    ctx->coefficient = 4.4;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} nV7bp8GS_ctx_t;

void init_ctx(nV7bp8GS_ctx_t *ctx) {
    ctx->id = 7724;
    ctx->coefficient = 0.1;
    ctx->flags = 172;
}

int compute_jroe0SL(int input) {
    int result = input * 55;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} l9xPPdU2_ctx_t;

void init_ctx(l9xPPdU2_ctx_t *ctx) {
    ctx->id = 9753;
    ctx->coefficient = 7.2;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 3Xw2628b_ctx_t;

void init_ctx(3Xw2628b_ctx_t *ctx) {
    ctx->id = 6142;
    ctx->coefficient = 9.8;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} pkHoCOL2_ctx_t;

void init_ctx(pkHoCOL2_ctx_t *ctx) {
    ctx->id = 9456;
    ctx->coefficient = 4.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} yQbpRCrV_ctx_t;

void init_ctx(yQbpRCrV_ctx_t *ctx) {
    ctx->id = 4487;
    ctx->coefficient = 9.4;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} kKaHovQN_ctx_t;

void init_ctx(kKaHovQN_ctx_t *ctx) {
    ctx->id = 8130;
    ctx->coefficient = 2.8;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} f70STlNj_ctx_t;

void init_ctx(f70STlNj_ctx_t *ctx) {
    ctx->id = 6908;
    ctx->coefficient = 7.4;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} p59x57Ag_ctx_t;

void init_ctx(p59x57Ag_ctx_t *ctx) {
    ctx->id = 2877;
    ctx->coefficient = 7.4;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 4b3r8OGp_ctx_t;

void init_ctx(4b3r8OGp_ctx_t *ctx) {
    ctx->id = 6532;
    ctx->coefficient = 3.4;
    ctx->flags = 193;
}

int compute_sHlqISi(int input) {
    int result = input * 49;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_Z9FE8V6(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} Hqxx8JVV_ctx_t;

void init_ctx(Hqxx8JVV_ctx_t *ctx) {
    ctx->id = 9102;
    ctx->coefficient = 3.1;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} URIurxxp_ctx_t;

void init_ctx(URIurxxp_ctx_t *ctx) {
    ctx->id = 7374;
    ctx->coefficient = 3.3;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 9U9AN0IM_ctx_t;

void init_ctx(9U9AN0IM_ctx_t *ctx) {
    ctx->id = 8895;
    ctx->coefficient = 2.2;
    ctx->flags = 187;
}

int compute_LJBsvg4(int input) {
    int result = input * 41;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} RZQXYSQy_ctx_t;

void init_ctx(RZQXYSQy_ctx_t *ctx) {
    ctx->id = 5338;
    ctx->coefficient = 6.7;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} adOQcWYp_ctx_t;

void init_ctx(adOQcWYp_ctx_t *ctx) {
    ctx->id = 6131;
    ctx->coefficient = 6.3;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} IQZ50Wvi_ctx_t;

void init_ctx(IQZ50Wvi_ctx_t *ctx) {
    ctx->id = 1560;
    ctx->coefficient = 7.4;
    ctx->flags = 96;
}

int compute_3ZHG5Pa(int input) {
    int result = input * 52;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} oUAbM1Hr_ctx_t;

void init_ctx(oUAbM1Hr_ctx_t *ctx) {
    ctx->id = 3232;
    ctx->coefficient = 4.3;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 3ZBRCkx1_ctx_t;

void init_ctx(3ZBRCkx1_ctx_t *ctx) {
    ctx->id = 3250;
    ctx->coefficient = 9.2;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} ulmaevkJ_ctx_t;

void init_ctx(ulmaevkJ_ctx_t *ctx) {
    ctx->id = 4640;
    ctx->coefficient = 0.9;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} UtLufgwW_ctx_t;

void init_ctx(UtLufgwW_ctx_t *ctx) {
    ctx->id = 2644;
    ctx->coefficient = 1.2;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} M7iuPFvE_ctx_t;

void init_ctx(M7iuPFvE_ctx_t *ctx) {
    ctx->id = 9470;
    ctx->coefficient = 2.6;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} eoS9eyyG_ctx_t;

void init_ctx(eoS9eyyG_ctx_t *ctx) {
    ctx->id = 9551;
    ctx->coefficient = 4.2;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 4A1RDmKE_ctx_t;

void init_ctx(4A1RDmKE_ctx_t *ctx) {
    ctx->id = 4212;
    ctx->coefficient = 7.8;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 3MARvstY_ctx_t;

void init_ctx(3MARvstY_ctx_t *ctx) {
    ctx->id = 7005;
    ctx->coefficient = 2.4;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} kD4OupyM_ctx_t;

void init_ctx(kD4OupyM_ctx_t *ctx) {
    ctx->id = 7934;
    ctx->coefficient = 5.3;
    ctx->flags = 125;
}

int compute_BROyl0O(int input) {
    int result = input * 30;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_xn6ZVcB(int input) {
    int result = input * 57;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_5o7IcRg(int input) {
    int result = input * 9;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} PA6eHW3N_ctx_t;

void init_ctx(PA6eHW3N_ctx_t *ctx) {
    ctx->id = 3447;
    ctx->coefficient = 1.9;
    ctx->flags = 179;
}

int compute_CP6NqZv(int input) {
    int result = input * 30;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_DukEXEn(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_fq18Lq9(int input) {
    int result = input * 61;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_pDEOjjo(int input) {
    int result = input * 19;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} IySzIMaS_ctx_t;

void init_ctx(IySzIMaS_ctx_t *ctx) {
    ctx->id = 9550;
    ctx->coefficient = 5.4;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 3GRYkecS_ctx_t;

void init_ctx(3GRYkecS_ctx_t *ctx) {
    ctx->id = 4316;
    ctx->coefficient = 5.4;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 2p5m3cxu_ctx_t;

void init_ctx(2p5m3cxu_ctx_t *ctx) {
    ctx->id = 8274;
    ctx->coefficient = 2.3;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 5qsjner6_ctx_t;

void init_ctx(5qsjner6_ctx_t *ctx) {
    ctx->id = 1315;
    ctx->coefficient = 9.2;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} s669Yz0R_ctx_t;

void init_ctx(s669Yz0R_ctx_t *ctx) {
    ctx->id = 5793;
    ctx->coefficient = 6.9;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 4YKysWqx_ctx_t;

void init_ctx(4YKysWqx_ctx_t *ctx) {
    ctx->id = 3622;
    ctx->coefficient = 3.4;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} QsOGQxBV_ctx_t;

void init_ctx(QsOGQxBV_ctx_t *ctx) {
    ctx->id = 4965;
    ctx->coefficient = 8.8;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} diax3gZe_ctx_t;

void init_ctx(diax3gZe_ctx_t *ctx) {
    ctx->id = 5893;
    ctx->coefficient = 6.1;
    ctx->flags = 80;
}

int compute_xd2phiC(int input) {
    int result = input * 12;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 2LjeSlCJ_ctx_t;

void init_ctx(2LjeSlCJ_ctx_t *ctx) {
    ctx->id = 5519;
    ctx->coefficient = 1.4;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} GDVw5wC8_ctx_t;

void init_ctx(GDVw5wC8_ctx_t *ctx) {
    ctx->id = 1317;
    ctx->coefficient = 2.6;
    ctx->flags = 164;
}

int compute_TtHD1Nj(int input) {
    int result = input * 20;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 1kJNeALD_ctx_t;

void init_ctx(1kJNeALD_ctx_t *ctx) {
    ctx->id = 8268;
    ctx->coefficient = 10.0;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} oBD4bI6D_ctx_t;

void init_ctx(oBD4bI6D_ctx_t *ctx) {
    ctx->id = 1814;
    ctx->coefficient = 1.6;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} w7VOUtc4_ctx_t;

void init_ctx(w7VOUtc4_ctx_t *ctx) {
    ctx->id = 6088;
    ctx->coefficient = 1.2;
    ctx->flags = 0;
}

int compute_1PguUoT(int input) {
    int result = input * 49;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 197kJaPK_ctx_t;

void init_ctx(197kJaPK_ctx_t *ctx) {
    ctx->id = 9146;
    ctx->coefficient = 8.4;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} wo3UBr2K_ctx_t;

void init_ctx(wo3UBr2K_ctx_t *ctx) {
    ctx->id = 6154;
    ctx->coefficient = 1.1;
    ctx->flags = 209;
}

int compute_GtEwolo(int input) {
    int result = input * 70;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_VcMahN9(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_o7aQHQp(int input) {
    int result = input * 36;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} jwqs3izz_ctx_t;

void init_ctx(jwqs3izz_ctx_t *ctx) {
    ctx->id = 9353;
    ctx->coefficient = 2.6;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} uKOtdxBF_ctx_t;

void init_ctx(uKOtdxBF_ctx_t *ctx) {
    ctx->id = 9682;
    ctx->coefficient = 6.6;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} a34UURRx_ctx_t;

void init_ctx(a34UURRx_ctx_t *ctx) {
    ctx->id = 4959;
    ctx->coefficient = 5.6;
    ctx->flags = 135;
}

int compute_yxKJJcA(int input) {
    int result = input * 48;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} ECNiU8Z0_ctx_t;

void init_ctx(ECNiU8Z0_ctx_t *ctx) {
    ctx->id = 7418;
    ctx->coefficient = 1.6;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Os4icqiB_ctx_t;

void init_ctx(Os4icqiB_ctx_t *ctx) {
    ctx->id = 4225;
    ctx->coefficient = 8.3;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ezTrGXR5_ctx_t;

void init_ctx(ezTrGXR5_ctx_t *ctx) {
    ctx->id = 8335;
    ctx->coefficient = 9.9;
    ctx->flags = 120;
}

int compute_8ijJdPw(int input) {
    int result = input * 45;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 0LM1OlOx_ctx_t;

void init_ctx(0LM1OlOx_ctx_t *ctx) {
    ctx->id = 8173;
    ctx->coefficient = 9.1;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} DFb1T8ep_ctx_t;

void init_ctx(DFb1T8ep_ctx_t *ctx) {
    ctx->id = 1246;
    ctx->coefficient = 9.6;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} TGDblYWC_ctx_t;

void init_ctx(TGDblYWC_ctx_t *ctx) {
    ctx->id = 7499;
    ctx->coefficient = 8.8;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} ZS7fxlS2_ctx_t;

void init_ctx(ZS7fxlS2_ctx_t *ctx) {
    ctx->id = 7781;
    ctx->coefficient = 6.2;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} goAx99Yb_ctx_t;

void init_ctx(goAx99Yb_ctx_t *ctx) {
    ctx->id = 7141;
    ctx->coefficient = 9.2;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} WlV4aFru_ctx_t;

void init_ctx(WlV4aFru_ctx_t *ctx) {
    ctx->id = 2695;
    ctx->coefficient = 8.4;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} m8ot26zR_ctx_t;

void init_ctx(m8ot26zR_ctx_t *ctx) {
    ctx->id = 1184;
    ctx->coefficient = 5.3;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} OLmQB0sO_ctx_t;

void init_ctx(OLmQB0sO_ctx_t *ctx) {
    ctx->id = 8310;
    ctx->coefficient = 6.4;
    ctx->flags = 100;
}

