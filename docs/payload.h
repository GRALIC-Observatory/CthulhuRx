
constexpr size_t N_PT_PER_FRAME=4096;


struct Payload{
    uint32_t head=0x12345678;//4 4
    uint32_t version=0xdeadbeef;//4 8
    uint64_t pkt_cnt=0;//8 16
    int64_t base_id=0;//8 24
    uint64_t port_id=0;//8 32
    uint64_t npt_per_frame=N_PT_PER_FRAME;//8 40
    uint64_t _reserve1=0;//8 48
    uint64_t _reserve2=0;//8 56
    uint64_t _reserve3=0;//8 64
    int16_t data[N_PT_PER_FRAME]={};//8192 8256
};

