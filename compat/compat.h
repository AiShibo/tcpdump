#include <stdint.h>    // for uint32_t
#include <arpa/inet.h> // for htonl()
#define __dead __attribute__((noreturn))
#define HTONL(x) ((x) = htonl((x)))
#define	HW_PHYSMEM64		19
#define	RT_TABLEID_MAX		255
#define	KERN_MAXCLUSTERS	67
/*
#define HOST_NAME_MAX 255
#define IPV6_MINHOPCOUNT 65
#define TCP_SACK_ENABLE         0x08
#define PATH_MAX 1024

#define freezero(ptr, size) free(ptr)
#define DEF_WEAK(x)
#define WRAP(x)(...)



#include <stdlib.h>
#include <sys/queue.h>
#include <imsg.h>

#include "util.h"

#define pledge(...) (0)
#define unveil(...) (0)

int getdtablecount(void);
int
fmt_scaled(long long number, char *result);

int
bcrypt_checkpass(const char *pass, const char *goodhash);
int
bcrypt_newhash(const char *pass, int log_rounds, char *hash, size_t hashlen);
int
_bcrypt_autorounds(void);
int
crypt_checkpass(const char *pass, const char *goodhash);
int
crypt_newhash(const char *pass, const char *pref, char *hash, size_t hashlen);
char *
bcrypt(const char *pass, const char *salt);
*/
