CATEGORIES=	www lang
PKGNAMESUFFIX=	-httpd24

COMMENT=	Free Pascal headers for Apache 2.4 series web server

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	APACHE24
APACHE24_DESC=	Install apache24 server

APACHE24_USES=	apache:2.4

.include "${MASTERDIR}/Makefile"
