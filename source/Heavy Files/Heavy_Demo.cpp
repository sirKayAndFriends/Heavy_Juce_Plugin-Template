/** SKAF */

#include "Heavy_Demo.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_Demo *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Demo_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Demo));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Demo(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_Demo_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Demo));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Demo(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_Demo_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_Demo();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Demo::Heavy_Demo(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sLine_init(&sLine_34biuOpu);
  numBytes += sLine_init(&sLine_GVC8EOv0);
  numBytes += sLine_init(&sLine_JMLI4xvg);
  numBytes += sLine_init(&sLine_7XIzATsd);
  numBytes += sLine_init(&sLine_dVPDUY3B);
  numBytes += sBiquad_init(&sBiquad_s_vgIl2uDb);
  numBytes += sLine_init(&sLine_SyuUHNy5);
  numBytes += sLine_init(&sLine_ARlO2hTf);
  numBytes += sLine_init(&sLine_ClX8cKq8);
  numBytes += sLine_init(&sLine_zuxmJvm6);
  numBytes += sLine_init(&sLine_Grklo6Fs);
  numBytes += sBiquad_init(&sBiquad_s_cT6iV1ap);
  numBytes += sLine_init(&sLine_NTDMXVlU);
  numBytes += sLine_init(&sLine_hUgrnJZu);
  numBytes += sLine_init(&sLine_Xb3UTKz6);
  numBytes += sLine_init(&sLine_OIxno7BL);
  numBytes += sLine_init(&sLine_ekTSyBMf);
  numBytes += sBiquad_init(&sBiquad_s_st26xr2o);
  numBytes += sLine_init(&sLine_cfyVNX2K);
  numBytes += sLine_init(&sLine_i4AxKAeE);
  numBytes += sLine_init(&sLine_thgcuVbz);
  numBytes += sLine_init(&sLine_XoQIKPb7);
  numBytes += sLine_init(&sLine_MjvDqqKv);
  numBytes += sBiquad_init(&sBiquad_s_C559XdIe);
  numBytes += cVar_init_f(&cVar_HmJWSOop, 0.707f);
  numBytes += cVar_init_f(&cVar_Le785lIN, 0.0f);
  numBytes += cBinop_init(&cBinop_gHDllkhX, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_3r7ewWxF, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_2jmgtUyb, 740.0f);
  numBytes += cBinop_init(&cBinop_dKJRSsqK, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yxWn5Jtv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iw9E9YDB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FeobJl8W, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Dk88YbYz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_5S4Ma918, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_5Bts8pW5, 0.707f);
  numBytes += cVar_init_f(&cVar_4WV6jxLT, 0.0f);
  numBytes += cVar_init_f(&cVar_1LFcrkbz, 4000.0f);
  numBytes += cBinop_init(&cBinop_5A3Wd0DT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jKsOiGtY, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_RtzU80En, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_oUdGbcFc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_k6KNaIQR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HWLuYBCM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_C4mZGe71, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_51QqEKuQ, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_AuA0kDB0, 0.707f);
  numBytes += cVar_init_f(&cVar_yNO9QYnN, 4000.0f);
  numBytes += cVar_init_f(&cVar_yMUWPRDE, 0.0f);
  numBytes += cBinop_init(&cBinop_kLx3Ftau, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_L3WWN4ii, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_Dx41fmPL, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bqwYkw07, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_slgY7Frb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ez96qfte, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FirnqbBL, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gA1HtNRl, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_AkpWPiyH, 12000.0f);
  numBytes += cBinop_init(&cBinop_p3ITkIef, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_k7p4f6d7, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_veYfOdjE, 0.707f);
  numBytes += cVar_init_f(&cVar_130W0LOJ, 0.0f);
  numBytes += cBinop_init(&cBinop_uD0Int4n, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_UVqpGJEF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CsfyW0k1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Vd3rt7OR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XbwrCuil, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_g8C0Ttuu, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_3nf2xQlc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xQ04v8Xu, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Demo::~Heavy_Demo() {
  // nothing to free
}

HvTable *Heavy_Demo::getTableForHash(hv_uint32_t tableHash) {
  return nullptr;
}

void Heavy_Demo::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x766D1755: { // GAIN
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_w17VJPx8_sendMessage);
      break;
    }
    case 0xCD345ED7: { // LEVEL
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FLL3uUUz_sendMessage);
      break;
    }
    case 0x4F7510B7: { // TONE
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zHwhhf5Q_sendMessage);
      break;
    }
    case 0xEF15F25F: { // 1031-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HpvRRui9_sendMessage);
      break;
    }
    case 0x5CC3A960: { // 1031-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mudTdE8e_sendMessage);
      break;
    }
    case 0xAA413D24: { // 1031-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_geKqT2jq_sendMessage);
      break;
    }
    case 0x3D58F3D2: { // 1075-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HMUF2a65_sendMessage);
      break;
    }
    case 0xD6774726: { // 1075-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_550x0ymP_sendMessage);
      break;
    }
    case 0x3B2034BF: { // 1075-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OdRYtfti_sendMessage);
      break;
    }
    case 0xD08468BF: { // 1116-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GBiDKUR2_sendMessage);
      break;
    }
    case 0x41A8B6CA: { // 1116-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Jq2GqDQ9_sendMessage);
      break;
    }
    case 0xDBB8DA42: { // 1116-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_W8EDRsIL_sendMessage);
      break;
    }
    case 0xF763418F: { // 1157-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_10yeAp0p_sendMessage);
      break;
    }
    case 0x1AD52B1A: { // 1157-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yPUDqhHk_sendMessage);
      break;
    }
    case 0xA662AE75: { // 1157-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_q0lKwzZa_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hbefOWQN_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Demo::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "GAIN";
        info->hash = 0x766D1755;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.2f;
        break;
      }
      case 1: {
        info->name = "LEVEL";
        info->hash = 0xCD345ED7;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 2: {
        info->name = "TONE";
        info->hash = 0x4F7510B7;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 3;
}



/*
 * Send Function Implementations
 */


void Heavy_Demo::cBinop_hN175v6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oLlAPUkn_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_aW764qio_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_hN175v6X_sendMessage);
}

void Heavy_Demo::cVar_HmJWSOop_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_aW764qio_sendMessage);
}

void Heavy_Demo::cVar_Le785lIN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bHWZd6lZ_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_EoHb3YCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FeobJl8W, HV_BINOP_MULTIPLY, 1, m, &cBinop_FeobJl8W_sendMessage);
}

void Heavy_Demo::cBinop_iVouCEnE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_EoHb3YCE_sendMessage);
}

void Heavy_Demo::cBinop_SMoPF1Yz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iw9E9YDB, HV_BINOP_MULTIPLY, 1, m, &cBinop_iw9E9YDB_sendMessage);
}

void Heavy_Demo::cBinop_gXOrzu95_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_SMoPF1Yz_sendMessage);
}

void Heavy_Demo::cUnop_PSJJAonT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_KSxsjeW4_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_O9tHaeY3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dk88YbYz, HV_BINOP_MULTIPLY, 1, m, &cBinop_Dk88YbYz_sendMessage);
}

void Heavy_Demo::cBinop_QSjWXzWd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Le785lIN, 1, m, &cVar_Le785lIN_sendMessage);
}

void Heavy_Demo::cBinop_0TEf8EWA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dKJRSsqK, HV_BINOP_MULTIPLY, 1, m, &cBinop_dKJRSsqK_sendMessage);
}

void Heavy_Demo::cMsg_YBhPQsON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_0TEf8EWA_sendMessage);
}

void Heavy_Demo::cUnop_AX59Z5yS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_uj1YQ1hq_sendMessage);
}

void Heavy_Demo::cMsg_XOlSyNeU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UcOqlu7Z_sendMessage);
}

void Heavy_Demo::cSystem_UcOqlu7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3r7ewWxF, HV_BINOP_DIVIDE, 1, m, &cBinop_3r7ewWxF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UnpiG5UQ_sendMessage);
}

void Heavy_Demo::cBinop_gHDllkhX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_m3rznm0e_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CpfLYwj3_sendMessage);
}

void Heavy_Demo::cBinop_uj1YQ1hq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3r7ewWxF, HV_BINOP_DIVIDE, 0, m, &cBinop_3r7ewWxF_sendMessage);
}

void Heavy_Demo::cBinop_3r7ewWxF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gHDllkhX, HV_BINOP_MULTIPLY, 1, m, &cBinop_gHDllkhX_sendMessage);
}

void Heavy_Demo::cMsg_JN1YNV5r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_AX59Z5yS_sendMessage);
}

void Heavy_Demo::cCast_UnpiG5UQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JN1YNV5r_sendMessage(_c, 0, m);
}

void Heavy_Demo::cVar_2jmgtUyb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KIRYzW01_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_j2SvIlRK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7yzgzzL3_sendMessage);
}

void Heavy_Demo::cUnop_dpsQPN7J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_oLGgGZ6t_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_vShNNcHu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gHDllkhX, HV_BINOP_MULTIPLY, 0, m, &cBinop_gHDllkhX_sendMessage);
}

void Heavy_Demo::cBinop_j2SvIlRK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_vShNNcHu_sendMessage);
}

void Heavy_Demo::cBinop_dZQzhIJa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5S4Ma918, HV_BINOP_MULTIPLY, 1, m, &cBinop_5S4Ma918_sendMessage);
}

void Heavy_Demo::cBinop_ySng467K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_dZQzhIJa_sendMessage);
}

void Heavy_Demo::cBinop_ufKJnRYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MZGfN6RU_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_dKJRSsqK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_twQGDo13_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_yxWn5Jtv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ufKJnRYT_sendMessage);
}

void Heavy_Demo::cBinop_iw9E9YDB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4MoPGmz8_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_FeobJl8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lKoTdWUS_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_Dk88YbYz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SPPkIe9K_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_5S4Ma918_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8DdosM3F_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_pQ8paSg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yxWn5Jtv, HV_BINOP_MULTIPLY, 1, m, &cBinop_yxWn5Jtv_sendMessage);
}

void Heavy_Demo::cBinop_EIB5IWMT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_g5v6M4PJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FLoZi4cE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Sa5Gu7Ka_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5prTPQCI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sQT8ilj9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wJb42nRJ_sendMessage);
}

void Heavy_Demo::cMsg_oLlAPUkn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_pQ8paSg1_sendMessage);
}

void Heavy_Demo::cMsg_bHWZd6lZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_EIB5IWMT_sendMessage);
}

void Heavy_Demo::cSend_oLGgGZ6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_q0lKwzZa_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_KSxsjeW4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yPUDqhHk_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_MZGfN6RU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_10yeAp0p_sendMessage(_c, 0, m);
}

void Heavy_Demo::cCast_nsXAxOri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2jmgtUyb, 0, m, &cVar_2jmgtUyb_sendMessage);
}

void Heavy_Demo::cCast_ae8LX2ZN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HmJWSOop, 1, m, &cVar_HmJWSOop_sendMessage);
}

void Heavy_Demo::cCast_m3rznm0e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_dpsQPN7J_sendMessage);
}

void Heavy_Demo::cCast_CpfLYwj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_PSJJAonT_sendMessage);
}

void Heavy_Demo::cCast_sQT8ilj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5S4Ma918, HV_BINOP_MULTIPLY, 0, m, &cBinop_5S4Ma918_sendMessage);
}

void Heavy_Demo::cCast_Sa5Gu7Ka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dk88YbYz, HV_BINOP_MULTIPLY, 0, m, &cBinop_Dk88YbYz_sendMessage);
}

void Heavy_Demo::cCast_g5v6M4PJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Demo::cCast_5prTPQCI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iw9E9YDB, HV_BINOP_MULTIPLY, 0, m, &cBinop_iw9E9YDB_sendMessage);
}

void Heavy_Demo::cCast_wJb42nRJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FeobJl8W, HV_BINOP_MULTIPLY, 0, m, &cBinop_FeobJl8W_sendMessage);
}

void Heavy_Demo::cCast_FLoZi4cE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dKJRSsqK, HV_BINOP_MULTIPLY, 0, m, &cBinop_dKJRSsqK_sendMessage);
}

void Heavy_Demo::cCast_KIRYzW01_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HmJWSOop, 0, m, &cVar_HmJWSOop_sendMessage);
}

void Heavy_Demo::cCast_7yzgzzL3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Le785lIN, 0, m, &cVar_Le785lIN_sendMessage);
}

void Heavy_Demo::cMsg_4MoPGmz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ClX8cKq8, 0, m, NULL);
}

void Heavy_Demo::cMsg_lKoTdWUS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_SyuUHNy5, 0, m, NULL);
}

void Heavy_Demo::cMsg_SPPkIe9K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_zuxmJvm6, 0, m, NULL);
}

void Heavy_Demo::cMsg_8DdosM3F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ARlO2hTf, 0, m, NULL);
}

void Heavy_Demo::cMsg_twQGDo13_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Grklo6Fs, 0, m, NULL);
}

void Heavy_Demo::cMsg_M9OTznrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Xb3UTKz6, 0, m, NULL);
}

void Heavy_Demo::cMsg_5EswCX6f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_hUgrnJZu, 0, m, NULL);
}

void Heavy_Demo::cBinop_qNOo4TZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_87R3epMR_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_iLLv6K1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_qNOo4TZf_sendMessage);
}

void Heavy_Demo::cVar_5Bts8pW5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_iLLv6K1f_sendMessage);
}

void Heavy_Demo::cBinop_bZDJ2hbL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k6KNaIQR, HV_BINOP_MULTIPLY, 1, m, &cBinop_k6KNaIQR_sendMessage);
}

void Heavy_Demo::cMsg_6r76R3Uy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_bZDJ2hbL_sendMessage);
}

void Heavy_Demo::cBinop_8Ta4bKu6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HWLuYBCM, HV_BINOP_MULTIPLY, 1, m, &cBinop_HWLuYBCM_sendMessage);
}

void Heavy_Demo::cBinop_EMWrwTu2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8Ta4bKu6_sendMessage);
}

void Heavy_Demo::cMsg_79sgys9D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_EMWrwTu2_sendMessage);
}

void Heavy_Demo::cBinop_7HuhfN6o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4WV6jxLT, 1, m, &cVar_4WV6jxLT_sendMessage);
}

void Heavy_Demo::cVar_4WV6jxLT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UJZION0o_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_W15UqXYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_51QqEKuQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_51QqEKuQ_sendMessage);
}

void Heavy_Demo::cMsg_PzSxnT6Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_W15UqXYU_sendMessage);
}

void Heavy_Demo::cUnop_d6jwrn18_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_mBzIgsmW_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_piC9I9kx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5A3Wd0DT, HV_BINOP_MULTIPLY, 0, m, &cBinop_5A3Wd0DT_sendMessage);
}

void Heavy_Demo::cBinop_LwmWB2dW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_piC9I9kx_sendMessage);
}

void Heavy_Demo::cVar_1LFcrkbz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XWOUuLCe_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_LwmWB2dW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KH8W37Dm_sendMessage);
}

void Heavy_Demo::cBinop_SACXV8gt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oUdGbcFc, HV_BINOP_MULTIPLY, 1, m, &cBinop_oUdGbcFc_sendMessage);
}

void Heavy_Demo::cBinop_jOXrIgcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_SACXV8gt_sendMessage);
}

void Heavy_Demo::cMsg_JWxdTxbx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_jOXrIgcc_sendMessage);
}

void Heavy_Demo::cBinop_3v6Nqab5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C4mZGe71, HV_BINOP_MULTIPLY, 1, m, &cBinop_C4mZGe71_sendMessage);
}

void Heavy_Demo::cMsg_TcUGRJcg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_voqiAQxJ_sendMessage);
}

void Heavy_Demo::cSystem_voqiAQxJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jKsOiGtY, HV_BINOP_DIVIDE, 1, m, &cBinop_jKsOiGtY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NBIH4wAB_sendMessage);
}

void Heavy_Demo::cUnop_zYjGeQJN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_xsmSy3ag_sendMessage);
}

void Heavy_Demo::cBinop_xsmSy3ag_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jKsOiGtY, HV_BINOP_DIVIDE, 0, m, &cBinop_jKsOiGtY_sendMessage);
}

void Heavy_Demo::cBinop_5A3Wd0DT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_L6zIUuL7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6Zf27hyu_sendMessage);
}

void Heavy_Demo::cBinop_jKsOiGtY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5A3Wd0DT, HV_BINOP_MULTIPLY, 1, m, &cBinop_5A3Wd0DT_sendMessage);
}

void Heavy_Demo::cMsg_qp5r9fKA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_zYjGeQJN_sendMessage);
}

void Heavy_Demo::cCast_NBIH4wAB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qp5r9fKA_sendMessage(_c, 0, m);
}

void Heavy_Demo::cUnop_npUb2FDw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DlJR61mP_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_RtzU80En_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_wTbWmyOW_sendMessage);
}

void Heavy_Demo::cBinop_oUdGbcFc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M9OTznrJ_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_wTbWmyOW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_LqNK4mMQ_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_k6KNaIQR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_c2snELeA_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_HWLuYBCM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ww1eIpcB_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_C4mZGe71_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XkmgEXil_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_51QqEKuQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5EswCX6f_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_Rf5daqDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RtzU80En, HV_BINOP_MULTIPLY, 1, m, &cBinop_RtzU80En_sendMessage);
}

void Heavy_Demo::cBinop_iQ9bvhAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_c0ZdOp1q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2k0eoTnN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AOb7EYhq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CUr2uXNZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZnCrciHK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ONIzVqBU_sendMessage);
}

void Heavy_Demo::cMsg_UJZION0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_iQ9bvhAH_sendMessage);
}

void Heavy_Demo::cMsg_87R3epMR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Rf5daqDl_sendMessage);
}

void Heavy_Demo::cSend_mBzIgsmW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Jq2GqDQ9_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_DlJR61mP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_W8EDRsIL_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_LqNK4mMQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GBiDKUR2_sendMessage(_c, 0, m);
}

void Heavy_Demo::cCast_6Zf27hyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_d6jwrn18_sendMessage);
}

void Heavy_Demo::cCast_L6zIUuL7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_npUb2FDw_sendMessage);
}

void Heavy_Demo::cCast_AOb7EYhq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C4mZGe71, HV_BINOP_MULTIPLY, 0, m, &cBinop_C4mZGe71_sendMessage);
}

void Heavy_Demo::cCast_CUr2uXNZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oUdGbcFc, HV_BINOP_MULTIPLY, 0, m, &cBinop_oUdGbcFc_sendMessage);
}

void Heavy_Demo::cCast_2k0eoTnN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k6KNaIQR, HV_BINOP_MULTIPLY, 0, m, &cBinop_k6KNaIQR_sendMessage);
}

void Heavy_Demo::cCast_c0ZdOp1q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Demo::cCast_ONIzVqBU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HWLuYBCM, HV_BINOP_MULTIPLY, 0, m, &cBinop_HWLuYBCM_sendMessage);
}

void Heavy_Demo::cCast_ZnCrciHK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_51QqEKuQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_51QqEKuQ_sendMessage);
}

void Heavy_Demo::cCast_XWOUuLCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5Bts8pW5, 0, m, &cVar_5Bts8pW5_sendMessage);
}

void Heavy_Demo::cCast_KH8W37Dm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4WV6jxLT, 0, m, &cVar_4WV6jxLT_sendMessage);
}

void Heavy_Demo::cCast_akZSWYxX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1LFcrkbz, 0, m, &cVar_1LFcrkbz_sendMessage);
}

void Heavy_Demo::cCast_RYQnihUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5Bts8pW5, 1, m, &cVar_5Bts8pW5_sendMessage);
}

void Heavy_Demo::cMsg_Ww1eIpcB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NTDMXVlU, 0, m, NULL);
}

void Heavy_Demo::cMsg_c2snELeA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ekTSyBMf, 0, m, NULL);
}

void Heavy_Demo::cMsg_XkmgEXil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_OIxno7BL, 0, m, NULL);
}

void Heavy_Demo::cUnop_sYkdpEtA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_y9Rhqo3t_sendMessage(_c, 0, m);
}

void Heavy_Demo::cVar_AuA0kDB0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_tORpSeq7_sendMessage);
}

void Heavy_Demo::cBinop_wT4YzaXl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_slgY7Frb, HV_BINOP_MULTIPLY, 1, m, &cBinop_slgY7Frb_sendMessage);
}

void Heavy_Demo::cMsg_4fhvIyqr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_wT4YzaXl_sendMessage);
}

void Heavy_Demo::cBinop_WUfLUrXg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yMUWPRDE, 1, m, &cVar_yMUWPRDE_sendMessage);
}

void Heavy_Demo::cBinop_iUXkcDB8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kLx3Ftau, HV_BINOP_MULTIPLY, 0, m, &cBinop_kLx3Ftau_sendMessage);
}

void Heavy_Demo::cBinop_dRkVZSH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_iUXkcDB8_sendMessage);
}

void Heavy_Demo::cBinop_DGiJojUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gA1HtNRl, HV_BINOP_MULTIPLY, 1, m, &cBinop_gA1HtNRl_sendMessage);
}

void Heavy_Demo::cMsg_4jakB8m2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_DGiJojUQ_sendMessage);
}

void Heavy_Demo::cVar_yNO9QYnN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8NLwmqzn_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_dRkVZSH9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y7kXRK1d_sendMessage);
}

void Heavy_Demo::cBinop_aLQNO26F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bqwYkw07, HV_BINOP_MULTIPLY, 1, m, &cBinop_bqwYkw07_sendMessage);
}

void Heavy_Demo::cBinop_3sPREXEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_aLQNO26F_sendMessage);
}

void Heavy_Demo::cMsg_32nYS7Az_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_3sPREXEu_sendMessage);
}

void Heavy_Demo::cVar_yMUWPRDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NzvaqSf7_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_4lhhcbSW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dx41fmPL, HV_BINOP_MULTIPLY, 1, m, &cBinop_Dx41fmPL_sendMessage);
}

void Heavy_Demo::cBinop_yGHoebyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4lhhcbSW_sendMessage);
}

void Heavy_Demo::cMsg_9ohYEyIY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_yGHoebyq_sendMessage);
}

void Heavy_Demo::cBinop_KlUYieP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ez96qfte, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ez96qfte_sendMessage);
}

void Heavy_Demo::cBinop_fLAanMr8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5v4v9bnh_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_tORpSeq7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_fLAanMr8_sendMessage);
}

void Heavy_Demo::cUnop_yphUZEGv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_KI5a9JjV_sendMessage(_c, 0, m);
}

void Heavy_Demo::cUnop_DJ1EeuOt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_TwKNhDgk_sendMessage);
}

void Heavy_Demo::cMsg_dDqByDTF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_t9ayc5QZ_sendMessage);
}

void Heavy_Demo::cSystem_t9ayc5QZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L3WWN4ii, HV_BINOP_DIVIDE, 1, m, &cBinop_L3WWN4ii_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VMUWXolf_sendMessage);
}

void Heavy_Demo::cBinop_TwKNhDgk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L3WWN4ii, HV_BINOP_DIVIDE, 0, m, &cBinop_L3WWN4ii_sendMessage);
}

void Heavy_Demo::cBinop_kLx3Ftau_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GZsPurIg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GzkfIjmq_sendMessage);
}

void Heavy_Demo::cBinop_L3WWN4ii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kLx3Ftau, HV_BINOP_MULTIPLY, 1, m, &cBinop_kLx3Ftau_sendMessage);
}

void Heavy_Demo::cMsg_z920SXBh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_DJ1EeuOt_sendMessage);
}

void Heavy_Demo::cCast_VMUWXolf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z920SXBh_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_Dx41fmPL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9C3tm3mB_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_bqwYkw07_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pZnfx1Yd_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_slgY7Frb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_liOTiyoM_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_Ez96qfte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fT0CaLVa_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_NadwUy2W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_xHBBYD6C_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_FirnqbBL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_NadwUy2W_sendMessage);
}

void Heavy_Demo::cBinop_gA1HtNRl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TZpo0lWN_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_crbi8VRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FirnqbBL, HV_BINOP_MULTIPLY, 1, m, &cBinop_FirnqbBL_sendMessage);
}

void Heavy_Demo::cBinop_0lyOEqEp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iE8EBlC1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_X7z7a9vk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dYyT8XuD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TEfOcaGM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_degbjoVS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FXHL9oKI_sendMessage);
}

void Heavy_Demo::cMsg_NzvaqSf7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0lyOEqEp_sendMessage);
}

void Heavy_Demo::cMsg_5v4v9bnh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_crbi8VRm_sendMessage);
}

void Heavy_Demo::cSend_KI5a9JjV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_550x0ymP_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_y9Rhqo3t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OdRYtfti_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_xHBBYD6C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HMUF2a65_sendMessage(_c, 0, m);
}

void Heavy_Demo::cCast_QFjry6pu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AuA0kDB0, 1, m, &cVar_AuA0kDB0_sendMessage);
}

void Heavy_Demo::cCast_aGoYrKhP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yNO9QYnN, 0, m, &cVar_yNO9QYnN_sendMessage);
}

void Heavy_Demo::cCast_8NLwmqzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AuA0kDB0, 0, m, &cVar_AuA0kDB0_sendMessage);
}

void Heavy_Demo::cCast_y7kXRK1d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yMUWPRDE, 0, m, &cVar_yMUWPRDE_sendMessage);
}

void Heavy_Demo::cCast_degbjoVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_slgY7Frb, HV_BINOP_MULTIPLY, 0, m, &cBinop_slgY7Frb_sendMessage);
}

void Heavy_Demo::cCast_TEfOcaGM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bqwYkw07, HV_BINOP_MULTIPLY, 0, m, &cBinop_bqwYkw07_sendMessage);
}

void Heavy_Demo::cCast_X7z7a9vk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gA1HtNRl, HV_BINOP_MULTIPLY, 0, m, &cBinop_gA1HtNRl_sendMessage);
}

void Heavy_Demo::cCast_iE8EBlC1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Demo::cCast_dYyT8XuD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ez96qfte, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ez96qfte_sendMessage);
}

void Heavy_Demo::cCast_FXHL9oKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dx41fmPL, HV_BINOP_MULTIPLY, 0, m, &cBinop_Dx41fmPL_sendMessage);
}

void Heavy_Demo::cCast_GzkfIjmq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_yphUZEGv_sendMessage);
}

void Heavy_Demo::cCast_GZsPurIg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_sYkdpEtA_sendMessage);
}

void Heavy_Demo::cMsg_liOTiyoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_i4AxKAeE, 0, m, NULL);
}

void Heavy_Demo::cMsg_TZpo0lWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_MjvDqqKv, 0, m, NULL);
}

void Heavy_Demo::cMsg_fT0CaLVa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_XoQIKPb7, 0, m, NULL);
}

void Heavy_Demo::cMsg_pZnfx1Yd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_thgcuVbz, 0, m, NULL);
}

void Heavy_Demo::cMsg_9C3tm3mB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_cfyVNX2K, 0, m, NULL);
}

void Heavy_Demo::cMsg_jOqO8OCI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_34biuOpu, 0, m, NULL);
}

void Heavy_Demo::cMsg_DZmLEM9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JMLI4xvg, 0, m, NULL);
}

void Heavy_Demo::cMsg_WpiWhdnZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_GVC8EOv0, 0, m, NULL);
}

void Heavy_Demo::cUnop_pOLc7XwH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_AN0yC9uK_sendMessage(_c, 0, m);
}

void Heavy_Demo::cUnop_8i1562zA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_degb2POW_sendMessage(_c, 0, m);
}

void Heavy_Demo::cVar_AkpWPiyH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_InywLZFi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_RGdVTCQ7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Csf4JUWc_sendMessage);
}

void Heavy_Demo::cBinop_AX8SSaJR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g8C0Ttuu, HV_BINOP_MULTIPLY, 1, m, &cBinop_g8C0Ttuu_sendMessage);
}

void Heavy_Demo::cMsg_XT0LGB15_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_AX8SSaJR_sendMessage);
}

void Heavy_Demo::cBinop_FhcQ324U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CsfyW0k1, HV_BINOP_MULTIPLY, 1, m, &cBinop_CsfyW0k1_sendMessage);
}

void Heavy_Demo::cMsg_wCznSVn2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_FhcQ324U_sendMessage);
}

void Heavy_Demo::cUnop_602saeqb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_1IwbWHjR_sendMessage);
}

void Heavy_Demo::cMsg_Obvmw9Yp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iQsx8ljb_sendMessage);
}

void Heavy_Demo::cSystem_iQsx8ljb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k7p4f6d7, HV_BINOP_DIVIDE, 1, m, &cBinop_k7p4f6d7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xu5vTAsj_sendMessage);
}

void Heavy_Demo::cBinop_1IwbWHjR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k7p4f6d7, HV_BINOP_DIVIDE, 0, m, &cBinop_k7p4f6d7_sendMessage);
}

void Heavy_Demo::cBinop_p3ITkIef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5U0LLzVB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_f9oYC891_sendMessage);
}

void Heavy_Demo::cBinop_k7p4f6d7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p3ITkIef, HV_BINOP_MULTIPLY, 1, m, &cBinop_p3ITkIef_sendMessage);
}

void Heavy_Demo::cMsg_0YvET57Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_602saeqb_sendMessage);
}

void Heavy_Demo::cCast_xu5vTAsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0YvET57Y_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_OeZuuyTX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p3ITkIef, HV_BINOP_MULTIPLY, 0, m, &cBinop_p3ITkIef_sendMessage);
}

void Heavy_Demo::cBinop_RGdVTCQ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_OeZuuyTX_sendMessage);
}

void Heavy_Demo::cVar_veYfOdjE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_94yBfUx7_sendMessage);
}

void Heavy_Demo::cBinop_aqwb1dBN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_130W0LOJ, 1, m, &cVar_130W0LOJ_sendMessage);
}

void Heavy_Demo::cBinop_rO1f2CL0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uNUw0m7V_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_94yBfUx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_rO1f2CL0_sendMessage);
}

void Heavy_Demo::cVar_130W0LOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_U2WRfHyH_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_5HO4XSwn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XbwrCuil, HV_BINOP_MULTIPLY, 1, m, &cBinop_XbwrCuil_sendMessage);
}

void Heavy_Demo::cBinop_Whp6K7jV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_5HO4XSwn_sendMessage);
}

void Heavy_Demo::cMsg_ikddMeH8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Whp6K7jV_sendMessage);
}

void Heavy_Demo::cBinop_6mh0z93n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UVqpGJEF, HV_BINOP_MULTIPLY, 1, m, &cBinop_UVqpGJEF_sendMessage);
}

void Heavy_Demo::cBinop_ljFO5M0P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_6mh0z93n_sendMessage);
}

void Heavy_Demo::cMsg_BYW0vwYb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ljFO5M0P_sendMessage);
}

void Heavy_Demo::cBinop_uPNhs02y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Vd3rt7OR, HV_BINOP_MULTIPLY, 1, m, &cBinop_Vd3rt7OR_sendMessage);
}

void Heavy_Demo::cBinop_uD0Int4n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ci121zqP_sendMessage);
}

void Heavy_Demo::cBinop_ci121zqP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_11fIRQKx_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_UVqpGJEF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jOqO8OCI_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_CsfyW0k1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hPkGBaPV_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_Vd3rt7OR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FLXyATWu_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_XbwrCuil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DZmLEM9v_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_g8C0Ttuu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WpiWhdnZ_sendMessage(_c, 0, m);
}

void Heavy_Demo::cBinop_F1SRPT9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tl5uxDf9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AQ6prPzG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LllTY5xA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WWOjBzef_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bpzn7K3D_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dqG0WiIN_sendMessage);
}

void Heavy_Demo::cBinop_N07CfiKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uD0Int4n, HV_BINOP_MULTIPLY, 1, m, &cBinop_uD0Int4n_sendMessage);
}

void Heavy_Demo::cMsg_U2WRfHyH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_F1SRPT9k_sendMessage);
}

void Heavy_Demo::cMsg_uNUw0m7V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_N07CfiKL_sendMessage);
}

void Heavy_Demo::cSend_11fIRQKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HpvRRui9_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_AN0yC9uK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_geKqT2jq_sendMessage(_c, 0, m);
}

void Heavy_Demo::cSend_degb2POW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_mudTdE8e_sendMessage(_c, 0, m);
}

void Heavy_Demo::cCast_InywLZFi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_veYfOdjE, 0, m, &cVar_veYfOdjE_sendMessage);
}

void Heavy_Demo::cCast_Csf4JUWc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_130W0LOJ, 0, m, &cVar_130W0LOJ_sendMessage);
}

void Heavy_Demo::cCast_AQ6prPzG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CsfyW0k1, HV_BINOP_MULTIPLY, 0, m, &cBinop_CsfyW0k1_sendMessage);
}

void Heavy_Demo::cCast_dqG0WiIN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UVqpGJEF, HV_BINOP_MULTIPLY, 0, m, &cBinop_UVqpGJEF_sendMessage);
}

void Heavy_Demo::cCast_tl5uxDf9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Demo::cCast_bpzn7K3D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g8C0Ttuu, HV_BINOP_MULTIPLY, 0, m, &cBinop_g8C0Ttuu_sendMessage);
}

void Heavy_Demo::cCast_LllTY5xA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Vd3rt7OR, HV_BINOP_MULTIPLY, 0, m, &cBinop_Vd3rt7OR_sendMessage);
}

void Heavy_Demo::cCast_WWOjBzef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XbwrCuil, HV_BINOP_MULTIPLY, 0, m, &cBinop_XbwrCuil_sendMessage);
}

void Heavy_Demo::cCast_BBS2Ffar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AkpWPiyH, 0, m, &cVar_AkpWPiyH_sendMessage);
}

void Heavy_Demo::cCast_o4UjCe4N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_veYfOdjE, 1, m, &cVar_veYfOdjE_sendMessage);
}

void Heavy_Demo::cCast_f9oYC891_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_8i1562zA_sendMessage);
}

void Heavy_Demo::cCast_5U0LLzVB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_pOLc7XwH_sendMessage);
}

void Heavy_Demo::cMsg_hPkGBaPV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_dVPDUY3B, 0, m, NULL);
}

void Heavy_Demo::cMsg_FLXyATWu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7XIzATsd, 0, m, NULL);
}

void Heavy_Demo::cBinop_DvCAKvOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xQ04v8Xu, m);
}

void Heavy_Demo::cBinop_gdcOiDyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2000.0f, 0, m, &cBinop_mURlxLdP_sendMessage);
}

void Heavy_Demo::cBinop_mURlxLdP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yNO9QYnN, 0, m, &cVar_yNO9QYnN_sendMessage);
}

void Heavy_Demo::cReceive_hbefOWQN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Obvmw9Yp_sendMessage(_c, 0, m);
  cMsg_dDqByDTF_sendMessage(_c, 0, m);
  cMsg_TcUGRJcg_sendMessage(_c, 0, m);
  cMsg_XOlSyNeU_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_AkpWPiyH, 0, m, &cVar_AkpWPiyH_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yNO9QYnN, 0, m, &cVar_yNO9QYnN_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_1LFcrkbz, 0, m, &cVar_1LFcrkbz_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_2jmgtUyb, 0, m, &cVar_2jmgtUyb_sendMessage);
}

void Heavy_Demo::cReceive_10yeAp0p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_QSjWXzWd_sendMessage);
  cMsg_YBhPQsON_sendMessage(_c, 0, m);
}

void Heavy_Demo::cReceive_yPUDqhHk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_iVouCEnE_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ySng467K_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_gXOrzu95_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_O9tHaeY3_sendMessage);
}

void Heavy_Demo::cReceive_q0lKwzZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yxWn5Jtv, HV_BINOP_MULTIPLY, 0, m, &cBinop_yxWn5Jtv_sendMessage);
}

void Heavy_Demo::cReceive_GBiDKUR2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_7HuhfN6o_sendMessage);
  cMsg_6r76R3Uy_sendMessage(_c, 0, m);
}

void Heavy_Demo::cReceive_W8EDRsIL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RtzU80En, HV_BINOP_MULTIPLY, 0, m, &cBinop_RtzU80En_sendMessage);
}

void Heavy_Demo::cReceive_Jq2GqDQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_79sgys9D_sendMessage(_c, 0, m);
  cMsg_PzSxnT6Y_sendMessage(_c, 0, m);
  cMsg_JWxdTxbx_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_3v6Nqab5_sendMessage);
}

void Heavy_Demo::cReceive_550x0ymP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9ohYEyIY_sendMessage(_c, 0, m);
  cMsg_4fhvIyqr_sendMessage(_c, 0, m);
  cMsg_32nYS7Az_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_KlUYieP8_sendMessage);
}

void Heavy_Demo::cReceive_OdRYtfti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FirnqbBL, HV_BINOP_MULTIPLY, 0, m, &cBinop_FirnqbBL_sendMessage);
}

void Heavy_Demo::cReceive_HMUF2a65_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WUfLUrXg_sendMessage);
  cMsg_4jakB8m2_sendMessage(_c, 0, m);
}

void Heavy_Demo::cReceive_mudTdE8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BYW0vwYb_sendMessage(_c, 0, m);
  cMsg_XT0LGB15_sendMessage(_c, 0, m);
  cMsg_ikddMeH8_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_uPNhs02y_sendMessage);
}

void Heavy_Demo::cReceive_HpvRRui9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aqwb1dBN_sendMessage);
  cMsg_wCznSVn2_sendMessage(_c, 0, m);
}

void Heavy_Demo::cReceive_geKqT2jq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uD0Int4n, HV_BINOP_MULTIPLY, 0, m, &cBinop_uD0Int4n_sendMessage);
}

void Heavy_Demo::cReceive_w17VJPx8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_DvCAKvOp_sendMessage);
}

void Heavy_Demo::cReceive_FLL3uUUz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3nf2xQlc, m);
}

void Heavy_Demo::cReceive_zHwhhf5Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_gdcOiDyK_sendMessage);
}




/*
 * Context Process Implementation
 */

int Heavy_Demo::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0, I1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));
    __hv_load_f(inputBuffers[1]+n, VOf(I1));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_line_f(&sLine_34biuOpu, VOf(Bf0));
    __hv_line_f(&sLine_GVC8EOv0, VOf(Bf1));
    __hv_line_f(&sLine_JMLI4xvg, VOf(Bf2));
    __hv_line_f(&sLine_7XIzATsd, VOf(Bf3));
    __hv_line_f(&sLine_dVPDUY3B, VOf(Bf4));
    __hv_biquad_f(&sBiquad_s_vgIl2uDb, VIf(I0), VIf(Bf0), VIf(Bf1), VIf(Bf2), VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_xQ04v8Xu, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_SyuUHNy5, VOf(Bf4));
    __hv_line_f(&sLine_ARlO2hTf, VOf(Bf2));
    __hv_line_f(&sLine_ClX8cKq8, VOf(Bf1));
    __hv_line_f(&sLine_zuxmJvm6, VOf(Bf0));
    __hv_line_f(&sLine_Grklo6Fs, VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_cT6iV1ap, VIf(Bf3), VIf(Bf4), VIf(Bf2), VIf(Bf1), VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_NTDMXVlU, VOf(Bf0));
    __hv_line_f(&sLine_hUgrnJZu, VOf(Bf1));
    __hv_line_f(&sLine_Xb3UTKz6, VOf(Bf2));
    __hv_line_f(&sLine_OIxno7BL, VOf(Bf4));
    __hv_line_f(&sLine_ekTSyBMf, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_st26xr2o, VIf(Bf5), VIf(Bf0), VIf(Bf1), VIf(Bf2), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf4));
    __hv_var_k_f(VOf(Bf2), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf2), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf4), VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_div_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_cfyVNX2K, VOf(Bf3));
    __hv_line_f(&sLine_i4AxKAeE, VOf(Bf1));
    __hv_line_f(&sLine_thgcuVbz, VOf(Bf0));
    __hv_line_f(&sLine_XoQIKPb7, VOf(Bf4));
    __hv_line_f(&sLine_MjvDqqKv, VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_C559XdIe, VIf(Bf2), VIf(Bf3), VIf(Bf1), VIf(Bf0), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_3nf2xQlc, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf4), VIf(O1), VOf(O1));
    __hv_add_f(VIf(Bf4), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_Demo::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s)
  float **const bIn = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bIn[0] = inputBuffers+(0*n4);
  bIn[1] = inputBuffers+(1*n4);

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_Demo::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s), uninterleave
  float *const bIn = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));
  #if HV_SIMD_SSE || HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 a = _mm_load_ps(inputBuffers+i);                // LRLR
    __m128 b = _mm_load_ps(inputBuffers+4+i);              // LRLR
    __m128 x = _mm_shuffle_ps(a, b, _MM_SHUFFLE(2,0,2,0)); // LLLL
    __m128 y = _mm_shuffle_ps(a, b, _MM_SHUFFLE(3,1,3,1)); // RRRR
    _mm_store_ps(bIn+j, x);
    _mm_store_ps(bIn+n4+j, y);
  }
  #elif HV_SIMD_NEON
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4x2_t a = vld2q_f32(inputBuffers+i); // load and uninterleave
    vst1q_f32(bIn+j, a.val[0]);
    vst1q_f32(bIn+n4+j, a.val[1]);
  }
  #else // HV_SIMD_NONE
  for (int j = 0; j < n4; ++j) {
    bIn[0*n4+j] = inputBuffers[0+2*j];
    bIn[1*n4+j] = inputBuffers[1+2*j];
  }
  #endif

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
