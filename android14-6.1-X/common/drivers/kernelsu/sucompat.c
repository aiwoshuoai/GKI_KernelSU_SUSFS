// 声明缺失的标识符
static struct kprobe execve_kp;
static struct kprobe newfstatat_kp;
static struct kprobe faccessat_kp;
static struct kprobe pts_unix98_lookup_kp;

int init_module(void)
{
    enable_kprobe(&execve_kp);
    enable_kprobe(&newfstatat_kp);
    enable_kprobe(&faccessat_kp);
    enable_kprobe(&pts_unix98_lookup_kp);
}

void cleanup_module(void)
{
    disable_kprobe(&execve_kp);
    disable_kprobe(&newfstatat_kp);
    disable_kprobe(&faccessat_kp);
    disable_kprobe(&pts_unix98_lookup_kp);
}
