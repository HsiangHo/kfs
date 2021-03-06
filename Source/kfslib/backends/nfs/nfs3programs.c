/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "nfs3.h"
#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <netdb.h>
#include <signal.h>
#include <sys/ttycom.h>
#ifdef __cplusplus
#include <sysent.h>
#endif /* __cplusplus */
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <syslog.h>

#ifdef __STDC__
#define SIG_PF void(*)(int)
#endif

#ifdef DEBUG
#define RPC_SVC_FG
#endif

#define _RPCSVC_CLOSEDOWN 120
extern int _rpcpmstart;		/* Started by a port monitor ? */
extern int _rpcfdtype;		/* Whether Stream or Datagram ? */
extern int _rpcsvcdirty;	/* Still serving ? */

static
void _msgout(char* msg)
{
#ifdef RPC_SVC_FG
	if (_rpcpmstart)
		syslog(LOG_ERR, "%s", msg);
	else
		(void) fprintf(stderr, "%s\n", msg);
#else
	syslog(LOG_ERR, "%s", msg);
#endif
}

static void *
_nfsproc3_null_3(void  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_null_3_svc(rqstp));
}

static GETATTR3res *
_nfsproc3_getattr_3(GETATTR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_getattr_3_svc(*argp, rqstp));
}

static SETATTR3res *
_nfsproc3_setattr_3(SETATTR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_setattr_3_svc(*argp, rqstp));
}

static LOOKUP3res *
_nfsproc3_lookup_3(LOOKUP3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_lookup_3_svc(*argp, rqstp));
}

static ACCESS3res *
_nfsproc3_access_3(ACCESS3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_access_3_svc(*argp, rqstp));
}

static READLINK3res *
_nfsproc3_readlink_3(READLINK3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_readlink_3_svc(*argp, rqstp));
}

static READ3res *
_nfsproc3_read_3(READ3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_read_3_svc(*argp, rqstp));
}

static WRITE3res *
_nfsproc3_write_3(WRITE3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_write_3_svc(*argp, rqstp));
}

static CREATE3res *
_nfsproc3_create_3(CREATE3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_create_3_svc(*argp, rqstp));
}

static MKDIR3res *
_nfsproc3_mkdir_3(MKDIR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_mkdir_3_svc(*argp, rqstp));
}

static SYMLINK3res *
_nfsproc3_symlink_3(SYMLINK3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_symlink_3_svc(*argp, rqstp));
}

static MKNOD3res *
_nfsproc3_mknod_3(MKNOD3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_mknod_3_svc(*argp, rqstp));
}

static REMOVE3res *
_nfsproc3_remove_3(REMOVE3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_remove_3_svc(*argp, rqstp));
}

static RMDIR3res *
_nfsproc3_rmdir_3(RMDIR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_rmdir_3_svc(*argp, rqstp));
}

static RENAME3res *
_nfsproc3_rename_3(RENAME3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_rename_3_svc(*argp, rqstp));
}

static LINK3res *
_nfsproc3_link_3(LINK3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_link_3_svc(*argp, rqstp));
}

static READDIR3res *
_nfsproc3_readdir_3(READDIR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_readdir_3_svc(*argp, rqstp));
}

static READDIRPLUS3res *
_nfsproc3_readdirplus_3(READDIRPLUS3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_readdirplus_3_svc(*argp, rqstp));
}

static FSSTAT3res *
_nfsproc3_fsstat_3(FSSTAT3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_fsstat_3_svc(*argp, rqstp));
}

static FSINFO3res *
_nfsproc3_fsinfo_3(FSINFO3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_fsinfo_3_svc(*argp, rqstp));
}

static PATHCONF3res *
_nfsproc3_pathconf_3(PATHCONF3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_pathconf_3_svc(*argp, rqstp));
}

static COMMIT3res *
_nfsproc3_commit_3(COMMIT3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_commit_3_svc(*argp, rqstp));
}

static void *
_mountproc3_null_3(void  *argp, struct svc_req *rqstp)
{
	return(mountproc3_null_3_svc(rqstp));
}

static mountres3 *
_mountproc3_mnt_3(dirpath  *argp, struct svc_req *rqstp)
{
	return(mountproc3_mnt_3_svc(*argp, rqstp));
}

static mountlist *
_mountproc3_dump_3(void  *argp, struct svc_req *rqstp)
{
	return(mountproc3_dump_3_svc(rqstp));
}

static void *
_mountproc3_umnt_3(dirpath  *argp, struct svc_req *rqstp)
{
	return(mountproc3_umnt_3_svc(*argp, rqstp));
}

static void *
_mountproc3_umntall_3(void  *argp, struct svc_req *rqstp)
{
	return(mountproc3_umntall_3_svc(rqstp));
}

static exports *
_mountproc3_export_3(void  *argp, struct svc_req *rqstp)
{
	return(mountproc3_export_3_svc(rqstp));
}

void nfs_program_3(struct svc_req *rqstp, SVCXPRT *transp);

void
nfs_program_3(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		GETATTR3args nfsproc3_getattr_3_arg;
		SETATTR3args nfsproc3_setattr_3_arg;
		LOOKUP3args nfsproc3_lookup_3_arg;
		ACCESS3args nfsproc3_access_3_arg;
		READLINK3args nfsproc3_readlink_3_arg;
		READ3args nfsproc3_read_3_arg;
		WRITE3args nfsproc3_write_3_arg;
		CREATE3args nfsproc3_create_3_arg;
		MKDIR3args nfsproc3_mkdir_3_arg;
		SYMLINK3args nfsproc3_symlink_3_arg;
		MKNOD3args nfsproc3_mknod_3_arg;
		REMOVE3args nfsproc3_remove_3_arg;
		RMDIR3args nfsproc3_rmdir_3_arg;
		RENAME3args nfsproc3_rename_3_arg;
		LINK3args nfsproc3_link_3_arg;
		READDIR3args nfsproc3_readdir_3_arg;
		READDIRPLUS3args nfsproc3_readdirplus_3_arg;
		FSSTAT3args nfsproc3_fsstat_3_arg;
		FSINFO3args nfsproc3_fsinfo_3_arg;
		PATHCONF3args nfsproc3_pathconf_3_arg;
		COMMIT3args nfsproc3_commit_3_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	_rpcsvcdirty = 1;
	switch (rqstp->rq_proc) {
	case NFSPROC3_NULL:
		xdr_argument = (xdrproc_t) xdr_void;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_null_3;
		break;

	case NFSPROC3_GETATTR:
		xdr_argument = (xdrproc_t) xdr_GETATTR3args;
		xdr_result = (xdrproc_t) xdr_GETATTR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_getattr_3;
		break;

	case NFSPROC3_SETATTR:
		xdr_argument = (xdrproc_t) xdr_SETATTR3args;
		xdr_result = (xdrproc_t) xdr_SETATTR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_setattr_3;
		break;

	case NFSPROC3_LOOKUP:
		xdr_argument = (xdrproc_t) xdr_LOOKUP3args;
		xdr_result = (xdrproc_t) xdr_LOOKUP3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_lookup_3;
		break;

	case NFSPROC3_ACCESS:
		xdr_argument = (xdrproc_t) xdr_ACCESS3args;
		xdr_result = (xdrproc_t) xdr_ACCESS3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_access_3;
		break;

	case NFSPROC3_READLINK:
		xdr_argument = (xdrproc_t) xdr_READLINK3args;
		xdr_result = (xdrproc_t) xdr_READLINK3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_readlink_3;
		break;

	case NFSPROC3_READ:
		xdr_argument = (xdrproc_t) xdr_READ3args;
		xdr_result = (xdrproc_t) xdr_READ3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_read_3;
		break;

	case NFSPROC3_WRITE:
		xdr_argument = (xdrproc_t) xdr_WRITE3args;
		xdr_result = (xdrproc_t) xdr_WRITE3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_write_3;
		break;

	case NFSPROC3_CREATE:
		xdr_argument = (xdrproc_t) xdr_CREATE3args;
		xdr_result = (xdrproc_t) xdr_CREATE3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_create_3;
		break;

	case NFSPROC3_MKDIR:
		xdr_argument = (xdrproc_t) xdr_MKDIR3args;
		xdr_result = (xdrproc_t) xdr_MKDIR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_mkdir_3;
		break;

	case NFSPROC3_SYMLINK:
		xdr_argument = (xdrproc_t) xdr_SYMLINK3args;
		xdr_result = (xdrproc_t) xdr_SYMLINK3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_symlink_3;
		break;

	case NFSPROC3_MKNOD:
		xdr_argument = (xdrproc_t) xdr_MKNOD3args;
		xdr_result = (xdrproc_t) xdr_MKNOD3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_mknod_3;
		break;

	case NFSPROC3_REMOVE:
		xdr_argument = (xdrproc_t) xdr_REMOVE3args;
		xdr_result = (xdrproc_t) xdr_REMOVE3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_remove_3;
		break;

	case NFSPROC3_RMDIR:
		xdr_argument = (xdrproc_t) xdr_RMDIR3args;
		xdr_result = (xdrproc_t) xdr_RMDIR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_rmdir_3;
		break;

	case NFSPROC3_RENAME:
		xdr_argument = (xdrproc_t) xdr_RENAME3args;
		xdr_result = (xdrproc_t) xdr_RENAME3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_rename_3;
		break;

	case NFSPROC3_LINK:
		xdr_argument = (xdrproc_t) xdr_LINK3args;
		xdr_result = (xdrproc_t) xdr_LINK3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_link_3;
		break;

	case NFSPROC3_READDIR:
		xdr_argument = (xdrproc_t) xdr_READDIR3args;
		xdr_result = (xdrproc_t) xdr_READDIR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_readdir_3;
		break;

	case NFSPROC3_READDIRPLUS:
		xdr_argument = (xdrproc_t) xdr_READDIRPLUS3args;
		xdr_result = (xdrproc_t) xdr_READDIRPLUS3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_readdirplus_3;
		break;

	case NFSPROC3_FSSTAT:
		xdr_argument = (xdrproc_t) xdr_FSSTAT3args;
		xdr_result = (xdrproc_t) xdr_FSSTAT3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_fsstat_3;
		break;

	case NFSPROC3_FSINFO:
		xdr_argument = (xdrproc_t) xdr_FSINFO3args;
		xdr_result = (xdrproc_t) xdr_FSINFO3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_fsinfo_3;
		break;

	case NFSPROC3_PATHCONF:
		xdr_argument = (xdrproc_t) xdr_PATHCONF3args;
		xdr_result = (xdrproc_t) xdr_PATHCONF3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_pathconf_3;
		break;

	case NFSPROC3_COMMIT:
		xdr_argument = (xdrproc_t) xdr_COMMIT3args;
		xdr_result = (xdrproc_t) xdr_COMMIT3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_commit_3;
		break;

	default:
		svcerr_noproc(transp);
		_rpcsvcdirty = 0;
		return;
	}
	(void) memset((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs(transp, xdr_argument, (caddr_t) &argument)) {
		svcerr_decode(transp);
		_rpcsvcdirty = 0;
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) xdr_result, result)) {
		svcerr_systemerr(transp);
	}
	if (!svc_freeargs(transp, xdr_argument, (caddr_t) &argument)) {
		_msgout("unable to free arguments");
		exit(1);
	}
	_rpcsvcdirty = 0;
	return;
}

void mount_program_3(struct svc_req *rqstp, SVCXPRT *transp);

void
mount_program_3(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		dirpath mountproc3_mnt_3_arg;
		dirpath mountproc3_umnt_3_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	_rpcsvcdirty = 1;
	switch (rqstp->rq_proc) {
	case MOUNTPROC3_NULL:
		xdr_argument = (xdrproc_t) xdr_void;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) _mountproc3_null_3;
		break;

	case MOUNTPROC3_MNT:
		xdr_argument = (xdrproc_t) xdr_dirpath;
		xdr_result = (xdrproc_t) xdr_mountres3;
		local = (char *(*)(char *, struct svc_req *)) _mountproc3_mnt_3;
		break;

	case MOUNTPROC3_DUMP:
		xdr_argument = (xdrproc_t) xdr_void;
		xdr_result = (xdrproc_t) xdr_mountlist;
		local = (char *(*)(char *, struct svc_req *)) _mountproc3_dump_3;
		break;

	case MOUNTPROC3_UMNT:
		xdr_argument = (xdrproc_t) xdr_dirpath;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) _mountproc3_umnt_3;
		break;

	case MOUNTPROC3_UMNTALL:
		xdr_argument = (xdrproc_t) xdr_void;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) _mountproc3_umntall_3;
		break;

	case MOUNTPROC3_EXPORT:
		xdr_argument = (xdrproc_t) xdr_void;
		xdr_result = (xdrproc_t) xdr_exports;
		local = (char *(*)(char *, struct svc_req *)) _mountproc3_export_3;
		break;

	default:
		svcerr_noproc(transp);
		_rpcsvcdirty = 0;
		return;
	}
	(void) memset((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs(transp, xdr_argument, (caddr_t) &argument)) {
		svcerr_decode(transp);
		_rpcsvcdirty = 0;
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) xdr_result, result)) {
		svcerr_systemerr(transp);
	}
	if (!svc_freeargs(transp, xdr_argument, (caddr_t) &argument)) {
		_msgout("unable to free arguments");
		exit(1);
	}
	_rpcsvcdirty = 0;
	return;
}
