PORTNAME=	bsdnt
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Bignum Library
WWW=		https://github.com/wbhart/bsdnt

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	bash:shells/bash

USES=		gmake shebangfix
SHEBANG_FILES=	configure
USE_GITHUB=	yes
GH_ACCOUNT=	wbhart
GH_TAGNAME=	de98bde

USE_LDCONFIG=	yes

do-configure:
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ./configure --prefix=${STAGEDIR}${PREFIX} CC=cc CXX=c++ AS=cc

.include <bsd.port.mk>
