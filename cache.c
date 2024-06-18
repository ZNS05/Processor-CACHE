#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
#define ITER 1000000

int g_aTest[ITER];
int i;
static int __init lkm_example_init(void)
{

    printk(KERN_INFO "Start. 0x%x \n", read_cr0());

    for (i = 0; i < ITER; i++)
    {
        g_aTest[i] = i;
    }

    printk(KERN_INFO "Time with enabled cache. 0x%x \n", read_cr0());

    write_cr0(read_cr0() | 0x40000000);

    for (i = 0; i < ITER; i++)
    {
        g_aTest[i] = i;
    }

    write_cr0(read_cr0() & 0xbfffffff);
    printk(KERN_INFO "Time with disabled cache. 0x%x \n", read_c());
    return 0;
}

static void __exit lkm_example_exit(void)
{
    printk(KERN_INFO "Goodbye, World!\n");
}
module_init(lkm_example_init);
module_exit(lkm_example_exit);
