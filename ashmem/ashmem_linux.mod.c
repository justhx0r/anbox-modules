#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x88db9f48, "__check_object_size" },
	{ 0x592c0d31, "misc_deregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb98244, "register_shrinker" },
	{ 0xc809491a, "kmem_cache_create" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92997ed8, "_printk" },
	{ 0x3786592c, "vfs_fallocate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x5d1321eb, "unregister_shrinker" },
	{ 0x8369b216, "kmem_cache_alloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x62eb0871, "shmem_file_setup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xea378e6, "fput" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd3922682, "kmem_cache_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98794516, "current_task" },
	{ 0xb364c9fb, "misc_register" },
	{ 0xe8d3ac59, "kernel_read" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8522d6bc, "strncpy_from_user" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbbce408a, "vfs_llseek" },
	{ 0x7e47aecd, "generic_file_open" },
	{ 0xdcfc19ae, "shmem_zero_setup" },
	{ 0xe4737709, "kmem_cache_destroy" },
	{ 0xb83992f2, "module_layout" },
};

MODULE_INFO(depends, "");

