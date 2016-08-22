#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Miguel, Juan Cristian");
MODULE_DESCRIPTION("Un pequeño driver para saludar el mundo");
MODULE_VERSION("0.1");



static int __init hallo_init(void)
{
	printk(KERN_ALERT "Hallo Welt!");
	return 0;
}


static void __exit hallo_exit(void)
{
	printk(KERN_ALERT "Auf Wiedersehen Welt!");
}


module_init(hallo_init);
module_exit(hallo_exit);
