#ifndef _I386_PGTABLE_2LEVEL_DEFS_H
#define _I386_PGTABLE_2LEVEL_DEFS_H

/*
 * I386 PAE禁止时使用2级页表
 */
/*
 * traditional i386 two-level paging structure:
 */

/*
 *---------------------------------------------------------
 * | GLOBAL_DIR | UPPER DIR | MIDDLE DIR | TABLE | OFFSET |
 *---------------------------------------------------------
 * PAE禁止 PGDIR_SHIFT=22：
 * 	页全局目录、页上级目录、页中间目录、页表中的表项个数分别为1024、1、1、1024；
 * 	GLOBAL_DIR、UPPER_DIR、MIDDLE_DIR、TABLE、OFFSET分别为10、0、0、10 + 12
 * PAE激活 PGDIR_SHIFT=30：
 * 	页全局目录、页上级目录、页中间目录、页表中的表项个数分别为4、1、512、512：
 * 	GLOBAL_DIR、UPPER_DIR、MIDDLE_DIR、TABLE、OFFSET分别为2、0、9、9、12
 */
#define PGDIR_SHIFT	22
#define PTRS_PER_PGD	1024

/*
 * the i386 is two-level, so we don't really have any
 * PMD directory physically.
 */

#define PTRS_PER_PTE	1024

#endif /* _I386_PGTABLE_2LEVEL_DEFS_H */
