extern int arm_dmacount, arm_dmalatch, arm_dmalength;

extern int arm_cpu_type;

extern int arm_cpu_speed, arm_mem_speed;
extern int arm_has_swp;
extern int arm_has_cp15;

extern void cache_flush();

extern int linecyc;

extern void arm_clock_i(int cycles);

extern void cache_read_timing(uint32_t addr, int is_n_cycle);
extern void cache_write_timing(uint32_t addr, int is_n_cycle);

#define ARM_USER_MODE (!(armregs[15] & 3))
