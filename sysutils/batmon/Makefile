PORTNAME=	batmon
PORTVERSION=	0.8
PORTREVISION=	6
CATEGORIES=	sysutils gnustep
MASTER_SITES=	SAVANNAH/gap

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNUstep battery monitor for laptops
WWW=		https://www.nongnu.org/gap/batmon/index.html

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-patch:
	${REINPLACE_CMD} -e 's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
		${WRKSRC}/GNUmakefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/batmon.app/batmon

.include <bsd.port.mk>
