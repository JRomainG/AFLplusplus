#ifndef _ENVS_H

#define _ENVS_H

static char *afl_environment_deprecated[] = {

    "AFL_LLVM_WHITELIST",
    "AFL_GCC_WHITELIST",
    "AFL_DEBUG_CHILD_OUTPUT",
    "AFL_DEFER_FORKSRV",
    "AFL_POST_LIBRARY",
    "AFL_PERSISTENT",
    NULL

};

static char *afl_environment_variables[] = {

    "AFL_ALIGNED_ALLOC",
    "AFL_ALLOW_TMP",
    "AFL_ANALYZE_HEX",
    "AFL_AS",
    "AFL_AUTORESUME",
    "AFL_AS_FORCE_INSTRUMENT",
    "AFL_BENCH_JUST_ONE",
    "AFL_BENCH_UNTIL_CRASH",
    "AFL_CAL_FAST",
    "AFL_CC",
    "AFL_CC_COMPILER",
    "AFL_CMIN_ALLOW_ANY",
    "AFL_CMIN_CRASHES_ONLY",
    "AFL_CMPLOG_ONLY_NEW",
    "AFL_CODE_END",
    "AFL_CODE_START",
    "AFL_COMPCOV_BINNAME",
    "AFL_COMPCOV_LEVEL",
    "AFL_CRASH_EXITCODE",
    "AFL_CRASHING_SEEDS_AS_NEW_CRASH",
    "AFL_CUSTOM_MUTATOR_LIBRARY",
    "AFL_CUSTOM_MUTATOR_ONLY",
    "AFL_CUSTOM_INFO_PROGRAM",
    "AFL_CUSTOM_INFO_PROGRAM_ARGV",
    "AFL_CUSTOM_INFO_PROGRAM_INPUT",
    "AFL_CUSTOM_INFO_OUT",
    "AFL_CXX",
    "AFL_CYCLE_SCHEDULES",
    "AFL_DEBUG",
    "AFL_DEBUG_CHILD",
    "AFL_DEBUG_GDB",
    "AFL_DEBUG_UNICORN",
    "AFL_DISABLE_TRIM",
    "AFL_DISABLE_LLVM_INSTRUMENTATION",
    "AFL_DONT_OPTIMIZE",
    "AFL_DRIVER_STDERR_DUPLICATE_FILENAME",
    "AFL_DUMB_FORKSRV",
    "AFL_EARLY_FORKSERVER",
    "AFL_ENTRYPOINT",
    "AFL_EXIT_WHEN_DONE",
    "AFL_EXIT_ON_TIME",
    "AFL_EXIT_ON_SEED_ISSUES",
    "AFL_FAST_CAL",
    "AFL_FINAL_SYNC",
    "AFL_FORCE_UI",
    "AFL_FRIDA_DEBUG_MAPS",
    "AFL_FRIDA_DRIVER_NO_HOOK",
    "AFL_FRIDA_EXCLUDE_RANGES",
    "AFL_FRIDA_INST_CACHE_SIZE",
    "AFL_FRIDA_INST_COVERAGE_ABSOLUTE",
    "AFL_FRIDA_INST_COVERAGE_FILE",
    "AFL_FRIDA_INST_DEBUG_FILE",
    "AFL_FRIDA_INST_INSN",
    "AFL_FRIDA_INST_JIT",
    "AFL_FRIDA_INST_NO_CACHE",
    "AFL_FRIDA_INST_NO_DYNAMIC_LOAD",
    "AFL_FRIDA_INST_NO_OPTIMIZE",
    "AFL_FRIDA_INST_NO_PREFETCH",
    "AFL_FRIDA_INST_NO_PREFETCH_BACKPATCH",
    "AFL_FRIDA_INST_NO_SUPPRESS"
    "AFL_FRIDA_INST_RANGES",
    "AFL_FRIDA_INST_REGS_FILE",
    "AFL_FRIDA_INST_SEED",
    "AFL_FRIDA_INST_TRACE",
    "AFL_FRIDA_INST_TRACE_UNIQUE",
    "AFL_FRIDA_INST_UNSTABLE_COVERAGE_FILE",
    "AFL_FRIDA_JS_SCRIPT",
    "AFL_FRIDA_OUTPUT_STDOUT",
    "AFL_FRIDA_OUTPUT_STDERR",
    "AFL_FRIDA_PERSISTENT_ADDR",
    "AFL_FRIDA_PERSISTENT_CNT",
    "AFL_FRIDA_PERSISTENT_DEBUG",
    "AFL_FRIDA_PERSISTENT_HOOK",
    "AFL_FRIDA_PERSISTENT_RET",
    "AFL_FRIDA_STALKER_ADJACENT_BLOCKS",
    "AFL_FRIDA_STALKER_IC_ENTRIES",
    "AFL_FRIDA_STALKER_NO_BACKPATCH",
    "AFL_FRIDA_STATS_FILE",
    "AFL_FRIDA_STATS_INTERVAL",
    "AFL_FRIDA_TRACEABLE",
    "AFL_FRIDA_VERBOSE",
    "AFL_FUZZER_ARGS",  // oss-fuzz
    "AFL_FUZZER_STATS_UPDATE_INTERVAL",
    "AFL_GDB",
    "AFL_GCC_ALLOWLIST",
    "AFL_GCC_DENYLIST",
    "AFL_GCC_BLOCKLIST",
    "AFL_GCC_INSTRUMENT_FILE",
    "AFL_GCC_OUT_OF_LINE",
    "AFL_GCC_SKIP_NEVERZERO",
    "AFL_GCJ",
    "AFL_HANG_TMOUT",
    "AFL_FORKSRV_INIT_TMOUT",
    "AFL_HARDEN",
    "AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES",
    "AFL_IGNORE_PROBLEMS",
    "AFL_IGNORE_PROBLEMS_COVERAGE",
    "AFL_IGNORE_SEED_PROBLEMS",
    "AFL_IGNORE_TIMEOUTS",
    "AFL_IGNORE_UNKNOWN_ENVS",
    "AFL_IMPORT_FIRST",
    "AFL_INPUT_LEN_MIN",
    "AFL_INPUT_LEN_MAX",
    "AFL_INST_LIBS",
    "AFL_INST_RATIO",
    "AFL_KEEP_TIMEOUTS",
    "AFL_KILL_SIGNAL",
    "AFL_FORK_SERVER_KILL_SIGNAL",
    "AFL_KEEP_TRACES",
    "AFL_KEEP_ASSEMBLY",
    "AFL_LD_HARD_FAIL",
    "AFL_LD_LIMIT_MB",
    "AFL_LD_NO_CALLOC_OVER",
    "AFL_LD_PASSTHROUGH",
    "AFL_REAL_LD",
    "AFL_LD_PRELOAD",
    "AFL_LD_VERBOSE",
    "AFL_LLVM_ALLOWLIST",
    "AFL_LLVM_DENYLIST",
    "AFL_LLVM_BLOCKLIST",
    "AFL_CMPLOG",
    "AFL_LLVM_CMPLOG",
    "AFL_GCC_CMPLOG",
    "AFL_LLVM_INSTRIM",
    "AFL_LLVM_CALLER",
    "AFL_LLVM_CTX",
    "AFL_LLVM_CTX_K",
    "AFL_LLVM_DICT2FILE",
    "AFL_LLVM_DICT2FILE_NO_MAIN",
    "AFL_LLVM_DOCUMENT_IDS",
    "AFL_LLVM_INSTRIM_LOOPHEAD",
    "AFL_LLVM_INSTRUMENT",
    "AFL_LLVM_LTO_AUTODICTIONARY",
    "AFL_LLVM_AUTODICTIONARY",
    "AFL_LLVM_SKIPSINGLEBLOCK",
    "AFL_LLVM_INSTRIM_SKIPSINGLEBLOCK",
    "AFL_LLVM_LAF_SPLIT_COMPARES",
    "AFL_LLVM_LAF_SPLIT_COMPARES_BITW",
    "AFL_LLVM_LAF_SPLIT_FLOATS",
    "AFL_LLVM_LAF_SPLIT_SWITCHES",
    "AFL_LLVM_LAF_ALL",
    "AFL_LLVM_LAF_TRANSFORM_COMPARES",
    "AFL_LLVM_MAP_ADDR",
    "AFL_LLVM_MAP_DYNAMIC",
    "AFL_LLVM_NGRAM_SIZE",
    "AFL_NGRAM_SIZE",
    "AFL_LLVM_NOT_ZERO",
    "AFL_LLVM_INSTRUMENT_FILE",
    "AFL_LLVM_THREADSAFE_INST",
    "AFL_LLVM_SKIP_NEVERZERO",
    "AFL_NO_AFFINITY",
    "AFL_TRY_AFFINITY",
    "AFL_LLVM_LTO_DONTWRITEID",
    "AFL_LLVM_LTO_SKIPINIT"
    "AFL_LLVM_LTO_STARTID",
    "AFL_NO_ARITH",
    "AFL_NO_AUTODICT",
    "AFL_NO_BUILTIN",
#if defined USE_COLOR && !defined ALWAYS_COLORED
    "AFL_NO_COLOR",
    "AFL_NO_COLOUR",
#endif
    "AFL_NO_CPU_RED",
    "AFL_NO_CFG_FUZZING",  // afl.rs rust crate option
    "AFL_NO_CRASH_README",
    "AFL_NO_FORKSRV",
    "AFL_NO_UI",
    "AFL_NO_PYTHON",
    "AFL_NO_STARTUP_CALIBRATION",
    "AFL_NO_WARN_INSTABILITY",
    "AFL_UNTRACER_FILE",
    "AFL_LLVM_USE_TRACE_PC",
    "AFL_MAP_SIZE",
    "AFL_MAPSIZE",
    "AFL_MAX_DET_EXTRAS",
    "AFL_NO_X86",  // not really an env but we dont want to warn on it
    "AFL_NOOPT",
    "AFL_NYX_AUX_SIZE",
    "AFL_NYX_DISABLE_SNAPSHOT_MODE",
    "AFL_NYX_LOG",
    "AFL_NYX_REUSE_SNAPSHOT",
    "AFL_PASSTHROUGH",
    "AFL_PATH",
    "AFL_PERFORMANCE_FILE",
    "AFL_PERSISTENT_RECORD",
    "AFL_POST_PROCESS_KEEP_ORIGINAL",
    "AFL_PRELOAD",
    "AFL_TARGET_ENV",
    "AFL_PYTHON_MODULE",
    "AFL_QEMU_CUSTOM_BIN",
    "AFL_QEMU_COMPCOV",
    "AFL_QEMU_COMPCOV_DEBUG",
    "AFL_QEMU_DEBUG_MAPS",
    "AFL_QEMU_DISABLE_CACHE",
    "AFL_QEMU_DRIVER_NO_HOOK",
    "AFL_QEMU_FORCE_DFL",
    "AFL_QEMU_PERSISTENT_ADDR",
    "AFL_QEMU_PERSISTENT_CNT",
    "AFL_QEMU_PERSISTENT_GPR",
    "AFL_QEMU_PERSISTENT_HOOK",
    "AFL_QEMU_PERSISTENT_MEM",
    "AFL_QEMU_PERSISTENT_RET",
    "AFL_QEMU_PERSISTENT_RETADDR_OFFSET",
    "AFL_QEMU_PERSISTENT_EXITS",
    "AFL_QEMU_INST_RANGES",
    "AFL_QEMU_EXCLUDE_RANGES",
    "AFL_QEMU_SNAPSHOT",
    "AFL_QEMU_TRACK_UNSTABLE",
    "AFL_QUIET",
    "AFL_RANDOM_ALLOC_CANARY",
    "AFL_REAL_PATH",
    "AFL_SHUFFLE_QUEUE",
    "AFL_SKIP_BIN_CHECK",
    "AFL_SKIP_CPUFREQ",
    "AFL_SKIP_CRASHES",
    "AFL_SKIP_OSSFUZZ",
    "AFL_STATSD",
    "AFL_STATSD_HOST",
    "AFL_STATSD_PORT",
    "AFL_STATSD_TAGS_FLAVOR",
    "AFL_SYNC_TIME",
    "AFL_TESTCACHE_SIZE",
    "AFL_TESTCACHE_ENTRIES",
    "AFL_TMIN_EXACT",
    "AFL_TMPDIR",
    "AFL_TOKEN_FILE",
    "AFL_TRACE_PC",
    "AFL_USE_ASAN",
    "AFL_USE_MSAN",
    "AFL_USE_TRACE_PC",
    "AFL_USE_UBSAN",
    "AFL_USE_TSAN",
    "AFL_USE_CFISAN",
    "AFL_USE_LSAN",
    "AFL_WINE_PATH",
    "AFL_NO_SNAPSHOT",
    "AFL_EXPAND_HAVOC_NOW",
    "AFL_USE_FASAN",
    "AFL_USE_QASAN",
    "AFL_PRINT_FILENAMES",
    "AFL_PIZZA_MODE",
    NULL

};

extern char *afl_environment_variables[];

#endif

