PORTNAME=	dymo-cups-drivers
PORTVERSION=	1.4.0
PORTREVISION=	4
CATEGORIES=	print
MASTER_SITES=	http://download.dymo.com/Software/Linux/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open source DYMO CUPS driver
WWW=		http://www.dymo.com

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcupsimage.so:print/cups

USES=	localbase:ldflags

GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/dymo-cups-drivers-1.4.0.5

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400091 || ( ${OSVERSION} >= 1302505 && ${OSVERSION} < 1400000 ))
USES+=	llvm:max=15
CC=	clang${LLVM_VERSION}
CPP=	clang-cpp${LLVM_VERSION}
CXX=	clang++${LLVM_VERSION}
.endif

.include <bsd.port.mk>
