PORTNAME=	wfmath
PORTVERSION=	1.0.2
PORTREVISION=	10
CATEGORIES=	math
MASTER_SITES=	SF/worldforge/${PORTNAME}%20%28math%20lib%29/${PORTVERSION}

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	Worldforge math library
WWW=		https://www.worldforge.org/

USES=		libtool pathfix pkgconfig compiler:c++11-lib
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CXXFLAGS+=	-Dregister=

.include <bsd.port.mk>
