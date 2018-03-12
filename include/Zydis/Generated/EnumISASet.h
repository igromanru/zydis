/**
 * @brief   Defines the `ZydisISASet` datatype.
 */
typedef ZydisU8 ZydisISASet;

/**
 * @brief   Values that represent `ZydisISASet` elements.
 */
enum ZydisISASets
{
    ZYDIS_ISA_SET_INVALID,
    ZYDIS_ISA_SET_ADOX_ADCX,
    ZYDIS_ISA_SET_AES,
    ZYDIS_ISA_SET_AMD,
    ZYDIS_ISA_SET_AMD3DNOW,
    ZYDIS_ISA_SET_AVX,
    ZYDIS_ISA_SET_AVX2,
    ZYDIS_ISA_SET_AVX2GATHER,
    ZYDIS_ISA_SET_AVX512BW_128,
    ZYDIS_ISA_SET_AVX512BW_128N,
    ZYDIS_ISA_SET_AVX512BW_256,
    ZYDIS_ISA_SET_AVX512BW_512,
    ZYDIS_ISA_SET_AVX512BW_KOP,
    ZYDIS_ISA_SET_AVX512CD_128,
    ZYDIS_ISA_SET_AVX512CD_256,
    ZYDIS_ISA_SET_AVX512CD_512,
    ZYDIS_ISA_SET_AVX512DQ_128,
    ZYDIS_ISA_SET_AVX512DQ_128N,
    ZYDIS_ISA_SET_AVX512DQ_256,
    ZYDIS_ISA_SET_AVX512DQ_512,
    ZYDIS_ISA_SET_AVX512DQ_KOP,
    ZYDIS_ISA_SET_AVX512DQ_SCALAR,
    ZYDIS_ISA_SET_AVX512ER_512,
    ZYDIS_ISA_SET_AVX512ER_SCALAR,
    ZYDIS_ISA_SET_AVX512F_128,
    ZYDIS_ISA_SET_AVX512F_128N,
    ZYDIS_ISA_SET_AVX512F_256,
    ZYDIS_ISA_SET_AVX512F_512,
    ZYDIS_ISA_SET_AVX512F_KOP,
    ZYDIS_ISA_SET_AVX512F_SCALAR,
    ZYDIS_ISA_SET_AVX512PF_512,
    ZYDIS_ISA_SET_AVX512_4FMAPS_512,
    ZYDIS_ISA_SET_AVX512_4FMAPS_SCALAR,
    ZYDIS_ISA_SET_AVX512_4VNNIW_512,
    ZYDIS_ISA_SET_AVX512_BITALG_128,
    ZYDIS_ISA_SET_AVX512_BITALG_256,
    ZYDIS_ISA_SET_AVX512_BITALG_512,
    ZYDIS_ISA_SET_AVX512_GFNI_128,
    ZYDIS_ISA_SET_AVX512_GFNI_256,
    ZYDIS_ISA_SET_AVX512_GFNI_512,
    ZYDIS_ISA_SET_AVX512_IFMA_128,
    ZYDIS_ISA_SET_AVX512_IFMA_256,
    ZYDIS_ISA_SET_AVX512_IFMA_512,
    ZYDIS_ISA_SET_AVX512_VAES_128,
    ZYDIS_ISA_SET_AVX512_VAES_256,
    ZYDIS_ISA_SET_AVX512_VAES_512,
    ZYDIS_ISA_SET_AVX512_VBMI2_128,
    ZYDIS_ISA_SET_AVX512_VBMI2_256,
    ZYDIS_ISA_SET_AVX512_VBMI2_512,
    ZYDIS_ISA_SET_AVX512_VBMI_128,
    ZYDIS_ISA_SET_AVX512_VBMI_256,
    ZYDIS_ISA_SET_AVX512_VBMI_512,
    ZYDIS_ISA_SET_AVX512_VNNI_128,
    ZYDIS_ISA_SET_AVX512_VNNI_256,
    ZYDIS_ISA_SET_AVX512_VNNI_512,
    ZYDIS_ISA_SET_AVX512_VPCLMULQDQ_128,
    ZYDIS_ISA_SET_AVX512_VPCLMULQDQ_256,
    ZYDIS_ISA_SET_AVX512_VPCLMULQDQ_512,
    ZYDIS_ISA_SET_AVX512_VPOPCNTDQ_128,
    ZYDIS_ISA_SET_AVX512_VPOPCNTDQ_256,
    ZYDIS_ISA_SET_AVX512_VPOPCNTDQ_512,
    ZYDIS_ISA_SET_AVXAES,
    ZYDIS_ISA_SET_AVX_GFNI,
    ZYDIS_ISA_SET_BMI1,
    ZYDIS_ISA_SET_BMI2,
    ZYDIS_ISA_SET_CET,
    ZYDIS_ISA_SET_CLFLUSHOPT,
    ZYDIS_ISA_SET_CLFSH,
    ZYDIS_ISA_SET_CLWB,
    ZYDIS_ISA_SET_CLZERO,
    ZYDIS_ISA_SET_CMOV,
    ZYDIS_ISA_SET_CMPXCHG16B,
    ZYDIS_ISA_SET_F16C,
    ZYDIS_ISA_SET_FAT_NOP,
    ZYDIS_ISA_SET_FCMOV,
    ZYDIS_ISA_SET_FMA,
    ZYDIS_ISA_SET_FMA4,
    ZYDIS_ISA_SET_FXSAVE,
    ZYDIS_ISA_SET_FXSAVE64,
    ZYDIS_ISA_SET_GFNI,
    ZYDIS_ISA_SET_I186,
    ZYDIS_ISA_SET_I286PROTECTED,
    ZYDIS_ISA_SET_I286REAL,
    ZYDIS_ISA_SET_I386,
    ZYDIS_ISA_SET_I486,
    ZYDIS_ISA_SET_I486REAL,
    ZYDIS_ISA_SET_I86,
    ZYDIS_ISA_SET_INVPCID,
    ZYDIS_ISA_SET_KNCE,
    ZYDIS_ISA_SET_KNCJKBR,
    ZYDIS_ISA_SET_KNCSTREAM,
    ZYDIS_ISA_SET_KNCV,
    ZYDIS_ISA_SET_KNC_MISC,
    ZYDIS_ISA_SET_KNC_PF_HINT,
    ZYDIS_ISA_SET_LAHF,
    ZYDIS_ISA_SET_LONGMODE,
    ZYDIS_ISA_SET_LZCNT,
    ZYDIS_ISA_SET_MONITOR,
    ZYDIS_ISA_SET_MONITORX,
    ZYDIS_ISA_SET_MOVBE,
    ZYDIS_ISA_SET_MPX,
    ZYDIS_ISA_SET_PAUSE,
    ZYDIS_ISA_SET_PCLMULQDQ,
    ZYDIS_ISA_SET_PCONFIG,
    ZYDIS_ISA_SET_PENTIUMMMX,
    ZYDIS_ISA_SET_PENTIUMREAL,
    ZYDIS_ISA_SET_PKU,
    ZYDIS_ISA_SET_POPCNT,
    ZYDIS_ISA_SET_PPRO,
    ZYDIS_ISA_SET_PREFETCHWT1,
    ZYDIS_ISA_SET_PREFETCH_NOP,
    ZYDIS_ISA_SET_PT,
    ZYDIS_ISA_SET_RDPID,
    ZYDIS_ISA_SET_RDPMC,
    ZYDIS_ISA_SET_RDRAND,
    ZYDIS_ISA_SET_RDSEED,
    ZYDIS_ISA_SET_RDTSCP,
    ZYDIS_ISA_SET_RDWRFSGS,
    ZYDIS_ISA_SET_RTM,
    ZYDIS_ISA_SET_SGX,
    ZYDIS_ISA_SET_SGX_ENCLV,
    ZYDIS_ISA_SET_SHA,
    ZYDIS_ISA_SET_SMAP,
    ZYDIS_ISA_SET_SMX,
    ZYDIS_ISA_SET_SSE,
    ZYDIS_ISA_SET_SSE2,
    ZYDIS_ISA_SET_SSE2MMX,
    ZYDIS_ISA_SET_SSE3,
    ZYDIS_ISA_SET_SSE3X87,
    ZYDIS_ISA_SET_SSE4,
    ZYDIS_ISA_SET_SSE42,
    ZYDIS_ISA_SET_SSE4A,
    ZYDIS_ISA_SET_SSEMXCSR,
    ZYDIS_ISA_SET_SSE_PREFETCH,
    ZYDIS_ISA_SET_SSSE3,
    ZYDIS_ISA_SET_SSSE3MMX,
    ZYDIS_ISA_SET_SVM,
    ZYDIS_ISA_SET_TBM,
    ZYDIS_ISA_SET_VAES,
    ZYDIS_ISA_SET_VMFUNC,
    ZYDIS_ISA_SET_VPCLMULQDQ,
    ZYDIS_ISA_SET_VTX,
    ZYDIS_ISA_SET_X87,
    ZYDIS_ISA_SET_XOP,
    ZYDIS_ISA_SET_XSAVE,
    ZYDIS_ISA_SET_XSAVEC,
    ZYDIS_ISA_SET_XSAVEOPT,
    ZYDIS_ISA_SET_XSAVES,

    /**
     * @brief   Maximum value of this enum.
     */
    ZYDIS_ISA_SET_MAX_VALUE = ZYDIS_ISA_SET_XSAVES,
    /**
     * @brief   Minimum amount of bits required to store a value of this enum.
     */
    ZYDIS_ISA_SET_MIN_BITS  = 0x0008
};
