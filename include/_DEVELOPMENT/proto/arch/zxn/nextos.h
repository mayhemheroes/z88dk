include(__link__.m4)

#ifndef __NEXTOS_H__
#define __NEXTOS_H__

#include <arch.h>

// Global Variables - same port numbers are aliases

extern unsigned char GLOBAL_ZX_PORT_1FFD;
extern unsigned char GLOBAL_ZX_PORT_7FFD;

extern unsigned char GLOBAL_ZXN_PORT_1FFD;
extern unsigned char GLOBAL_ZXN_PORT_7FFD;
extern unsigned char GLOBAL_ZXN_PORT_DFFD;

// NEXTOS API 1.89
// https://github.com/z88dk/techdocs/blob/master/targets/zx-next/nextos/nextos_api.odt

// Filesystem Related

#define NEXTOS_DOS_VERSION  __NEXTOS_DOS_VERSION
#define NEXTOS_DOS_OPEN  __NEXTOS_DOS_OPEN
#define NEXTOS_DOS_CLOSE  __NEXTOS_DOS_CLOSE
#define NEXTOS_DOS_ABANDON  __NEXTOS_DOS_ABANDON
#define NEXTOS_DOS_REF_HEAD  __NEXTOS_DOS_REF_HEAD
#define NEXTOS_DOS_READ  __NEXTOS_DOS_READ
#define NEXTOS_DOS_WRITE  __NEXTOS_DOS_WRITE
#define NEXTOS_DOS_BYTE_READ  __NEXTOS_DOS_BYTE_READ
#define NEXTOS_DOS_BYTE_WRITE  __NEXTOS_DOS_BYTE_WRITE
#define NEXTOS_DOS_CATALOG  __NEXTOS_DOS_CATALOG
#define NEXTOS_DOS_FREE_SPACE  __NEXTOS_DOS_FREE_SPACE
#define NEXTOS_DOS_DELETE  __NEXTOS_DOS_DELETE
#define NEXTOS_DOS_RENAME  __NEXTOS_DOS_RENAME
#define NEXTOS_DOS_BOOT  __NEXTOS_DOS_BOOT
#define NEXTOS_DOS_SET_DRIVE  __NEXTOS_DOS_SET_DRIVE
#define NEXTOS_DOS_SET_USER  __NEXTOS_DOS_SET_USER
#define NEXTOS_DOS_GET_POSITION  __NEXTOS_DOS_GET_POSITION
#define NEXTOS_DOS_SET_POSITION  __NEXTOS_DOS_SET_POSITION
#define NEXTOS_DOS_GET_EOF  __NEXTOS_DOS_GET_EOF
#define NEXTOS_DOS_GET_1346  __NEXTOS_DOS_GET_1346
#define NEXTOS_DOS_SET_1346  __NEXTOS_DOS_SET_1346
#define NEXTOS_DOS_FLUSH  __NEXTOS_DOS_FLUSH
#define NEXTOS_DOS_SET_ACCESS  __NEXTOS_DOS_SET_ACCESS
#define NEXTOS_DOS_SET_ATTRIBUTES  __NEXTOS_DOS_SET_ATTRIBUTES
#define NEXTOS_DOS_SET_MESSAGE  __NEXTOS_DOS_SET_MESSAGE

#define NEXTOS_IDE_VERSION  __NEXTOS_IDE_VERSION
#define NEXTOS_IDE_SWAP_OPEN  __NEXTOS_IDE_SWAP_OPEN
#define NEXTOS_IDE_SWAP_CLOSE  __NEXTOS_IDE_SWAP_CLOSE
#define NEXTOS_IDE_SWAP_OUT  __NEXTOS_IDE_SWAP_OUT
#define NEXTOS_IDE_SWAP_IN  __NEXTOS_IDE_SWAP_IN
#define NEXTOS_IDE_SWAP_EX  __NEXTOS_IDE_SWAP_EX
#define NEXTOS_IDE_SWAP_POS  __NEXTOS_IDE_SWAP_POS
#define NEXTOS_IDE_SWAP_MOVE  __NEXTOS_IDE_SWAP_MOVE
#define NEXTOS_IDE_SWAP_RESIZE  __NEXTOS_IDE_SWAP_RESIZE
#define NEXTOS_IDE_PARTITION_FIND  __NEXTOS_IDE_PARTITION_FIND
#define NEXTOS_IDE_DOS_MAP  __NEXTOS_IDE_DOS_MAP
#define NEXTOS_IDE_DOS_UNMAP  __NEXTOS_IDE_DOS_UNMAP
#define NEXTOS_IDE_DOS_MAPPING  __NEXTOS_IDE_DOS_MAPPING
#define NEXTOS_IDE_SNAPLOAD  __NEXTOS_IDE_SNAPLOAD

#define NEXTOS_IDE_PATH  __NEXTOS_IDE_PATH
#define nextos_rc_path_change  __nextos_rc_path_change
#define nextos_rc_path_get  __nextos_rc_path_get
#define nextos_rc_path_make  __nextos_rc_path_make
#define nextos_rc_path_delete  __nextos_rc_path_delete

#define NEXTOS_IDE_CAPACITY  __NEXTOS_IDE_CAPACITY
#define NEXTOS_IDE_GET_LFN  __NEXTOS_IDE_GET_LFN

#define NEXTOS_IDE_BROWSER  __NEXTOS_IDE_BROWSER
#define nextos_browsercaps_none  __nextos_browsercaps_none
#define nextos_browsercaps_copy  __nextos_browsercaps_copy
#define nextos_browsercaps_rename  __nextos_browsercaps_rename
#define nextos_browsercaps_mkdir  __nextos_browsercaps_mkdir
#define nextos_browsercaps_erase  __nextos_browsercaps_erase
#define nextos_browsercaps_remount  __nextos_browsercaps_remount
#define nextos_browsercaps_syscfg  __nextos_browsercaps_syscfg
#define nextos_browsercaps_all  __nextos_browsercaps_all

// Not Filesystem Related

#define NEXTOS_IDE_STREAM_OPEN  __NEXTOS_IDE_STREAM_OPEN
#define NEXTOS_IDE_STREAM_CLOSE  __NEXTOS_IDE_STREAM_CLOSE
#define NEXTOS_IDE_STREAM_IN  __NEXTOS_IDE_STREAM_IN
#define NEXTOS_IDE_STREAM_OUT  __NEXTOS_IDE_STREAM_OUT
#define NEXTOS_IDE_STREAM_PTR  __NEXTOS_IDE_STREAM_PTR

#define NEXTOS_IDE_BANK  __NEXTOS_IDE_BANK
#define nextos_rc_banktype_zx  __nextos_rc_banktype_zx
#define nextos_rc_banktype_mmc  __nextos_rc_banktype_mmc
#define nextos_rc_bank_total  __nextos_rc_bank_total
#define nextos_rc_bank_alloc  __nextos_rc_bank_alloc
#define nextos_rc_bank_reserve  __nextos_rc_bank_reserve
#define nextos_rc_bank_free  __nextos_rc_bank_free

#define NEXTOS_IDE_BASIC  __NEXTOS_IDE_BASIC
#define NEXTOS_IDE_STREAM_LINEIN  __NEXTOS_IDE_STREAM_LINEIN
#define NEXTOS_IDE_WINDOW_STRING  __NEXTOS_IDE_WINDOW_STRING
#define NEXTOS_IDE_INTEGER_VAR  __NEXTOS_IDE_INTEGER_VAR

// Legacy - Floppy Drive

#define NEXTOS_DOS_REF_XDPB  __NEXTOS_DOS_REF_XDPB
#define NEXTOS_DOS_MAP_B  __NEXTOS_DOS_MAP_B
#define NEXTOS_DD_INTERFACE  __NEXTOS_DD_INTERFACE
#define NEXTOS_DD_INIT  __NEXTOS_DD_INIT
#define NEXTOS_DD_SETUP  __NEXTOS_DD_SETUP
#define NEXTOS_DD_SET_RETRY  __NEXTOS_DD_SET_RETRY
#define NEXTOS_DD_READ_SECTOR  __NEXTOS_DD_READ_SECTOR
#define NEXTOS_DD_WRITE_SECTOR  __NEXTOS_DD_WRITE_SECTOR
#define NEXTOS_DD_CHECK_SECTOR  __NEXTOS_DD_CHECK_SECTOR
#define NEXTOS_DD_FORMAT  __NEXTOS_DD_FORMAT
#define NEXTOS_DD_READ_ID  __NEXTOS_DD_READ_ID
#define NEXTOS_DD_TEST_UNSUITABLE  __NEXTOS_DD_TEST_UNSUITABLE
#define NEXTOS_DD_LOGIN  __NEXTOS_DD_LOGIN
#define NEXTOS_DD_SEL_FORMAT  __NEXTOS_DD_SEL_FORMAT
#define NEXTOS_DD_ASK_1  __NEXTOS_DD_ASK_1
#define NEXTOS_DD_DRIVE_STATUS  __NEXTOS_DD_DRIVE_STATUS
#define NEXTOS_DD_EQUIPMENT  __NEXTOS_DD_EQUIPMENT
#define NEXTOS_DD_ENCODE  __NEXTOS_DD_ENCODE
#define NEXTOS_DD_L_XDPB  __NEXTOS_DD_L_XDPB
#define NEXTOS_DD_L_DPB  __NEXTOS_DD_L_DPB
#define NEXTOS_DD_L_SEEK  __NEXTOS_DD_L_SEEK
#define NEXTOS_DD_L_READ  __NEXTOS_DD_L_READ
#define NEXTOS_DD_L_WRITE  __NEXTOS_DD_L_WRITE
#define NEXTOS_DD_L_ON_MOTOR  __NEXTOS_DD_L_ON_MOTOR
#define NEXTOS_DD_T_OFF_MOTOR  __NEXTOS_DD_T_OFF_MOTOR
#define NEXTOS_DD_L_OFF_MOTOR  __NEXTOS_DD_L_OFF_MOTOR

// System Use

#define NEXTOS_DOS_INITIALISE  __NEXTOS_DOS_INITIALISE
#define NEXTOS_DOS_INITIALIZE  __NEXTOS_DOS_INITIALIZE
#define NEXTOS_IDE_INTERFACE  __NEXTOS_IDE_INTERFACE
#define NEXTOS_IDE_INIT  __NEXTOS_IDE_INIT
#define NEXTOS_IDE_DRIVE  __NEXTOS_IDE_DRIVE
#define NEXTOS_IDE_SECTOR_READ  __NEXTOS_IDE_SECTOR_READ
#define NEXTOS_IDE_SECTOR_WRITE  __NEXTOS_IDE_SECTOR_WRITE
#define NEXTOS_IDE_PARTITION_NEW  __NEXTOS_IDE_PARTITION_NEW
#define NEXTOS_IDE_PARTITION_INIT  __NEXTOS_IDE_PARTITION_INIT
#define NEXTOS_IDE_PARTITION_READ  __NEXTOS_IDE_PARTITION_READ
#define NEXTOS_IDE_PARTITION_OPEN  __NEXTOS_IDE_PARTITION_OPEN
#define NEXTOS_IDE_PARTITION_CLOSE  __NEXTOS_IDE_PARTITION_CLOSE
#define NEXTOS_IDE_PARTITIONS  __NEXTOS_IDE_PARTITIONS

// Error Codes - Recoverable Disk Errors

#define NEXTOS_RC_READY  __NEXTOS_RC_READY
#define NEXTOS_RC_WP  __NEXTOS_RC_WP
#define NEXTOS_RC_SEEK  __NEXTOS_RC_SEEK
#define NEXTOS_RC_CRC  __NEXTOS_RC_CRC
#define NEXTOS_RC_NODATA  __NEXTOS_RC_NODATA
#define NEXTOS_RC_MARK  __NEXTOS_RC_MARK
#define NEXTOS_RC_UNRECOG  __NEXTOS_RC_UNRECOG
#define NEXTOS_RC_UNKNOWN  __NEXTOS_RC_UNKNOWN
#define NEXTOS_RC_DISKCHG  __NEXTOS_RC_DISKCHG
#define NEXTOS_RC_UNSUIT  __NEXTOS_RC_UNSUIT

// Error Codes - Non-Recoverable Disk Errors

#define NEXTOS_RC_BADNAME  __NEXTOS_RC_BADNAME
#define NEXTOS_RC_BADPARAM  __NEXTOS_RC_BADPARAM
#define NEXTOS_RC_NODRIVE  __NEXTOS_RC_NODRIVE
#define NEXTOS_RC_NOFILE  __NEXTOS_RC_NOFILE
#define NEXTOS_RC_EXISTS  __NEXTOS_RC_EXISTS
#define NEXTOS_RC_EOF  __NEXTOS_RC_EOF
#define NEXTOS_RC_DISKFULL  __NEXTOS_RC_DISKFULL
#define NEXTOS_RC_DIRFULL  __NEXTOS_RC_DIRFULL
#define NEXTOS_RC_RO  __NEXTOS_RC_RO
#define NEXTOS_RC_NUMBER  __NEXTOS_RC_NUMBER
#define NEXTOS_RC_DENIED  __NEXTOS_RC_DENIED
#define NEXTOS_RC_NORENAME  __NEXTOS_RC_NORENAME
#define NEXTOS_RC_EXTENT  __NEXTOS_RC_EXTENT
#define NEXTOS_RC_UNCACHED  __NEXTOS_RC_UNCACHED
#define NEXTOS_RC_TOOBIG  __NEXTOS_RC_TOOBIG
#define NEXTOS_RC_NOTBOOT  __NEXTOS_RC_NOTBOOT
#define NEXTOS_RC_INUSE  __NEXTOS_RC_INUSE

#define NEXTOS_RC_INVPARTITION  __NEXTOS_RC_INVPARTITION
#define NEXTOS_RC_PARTEXIST  __NEXTOS_RC_PARTEXIST
#define NEXTOS_RC_NOTIMP  __NEXTOS_RC_NOTIMP
#define NEXTOS_RC_PARTOPEN  __NEXTOS_RC_PARTOPEN
#define NEXTOS_RC_NOHANDLE  __NEXTOS_RC_NOHANDLE
#define NEXTOS_RC_NOTSWAP  __NEXTOS_RC_NOTSWAP
#define NEXTOS_RC_MAPPED  __NEXTOS_RC_MAPPED
#define NEXTOS_RC_NOXDPB  __NEXTOS_RC_NOXDPB
#define NEXTOS_RC_NOSWAP  __NEXTOS_RC_NOSWAP
#define NEXTOS_RC_INVDEVICE  __NEXTOS_RC_INVDEVICE
#define NEXTOS_RC_CMDPHASE  __NEXTOS_RC_CMDPHASE
#define NEXTOS_RC_DATAPHASE  __NEXTOS_RC_DATAPHASE
#define NEXTOS_RC_NOTDIR  __NEXTOS_RC_NOTDIR

#endif
