PORTNAME=	libac
PORTVERSION=	g20190308
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	C++ implementation of the Aho-Corasick (AC) string matching algorithm
WWW=		https://github.com/cloudflare/lua-aho-corasick

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake

PLIST_FILES=	include/ac.h \
		lib/libac.a \
		lib/libac.so

USE_GITHUB=	yes
GH_ACCOUNT=	cloudflare
GH_PROJECT=	lua-aho-corasick
GH_TAGNAME=	ca6043c

do-install:
	${INSTALL_DATA} ${WRKSRC}/ac.h ${STAGEDIR}${PREFIX}/include/ac.h
	${INSTALL_DATA} ${WRKSRC}/libac.a ${STAGEDIR}${PREFIX}/lib/libac.a
	${INSTALL_LIB} ${WRKSRC}/libac.so ${STAGEDIR}${PREFIX}/lib/libac.so

.include <bsd.port.mk>
