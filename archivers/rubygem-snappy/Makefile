PORTNAME=	snappy
PORTVERSION=	0.0.17
PORTREVISION=	2
CATEGORIES=	archivers rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Snappy binding for Ruby
WWW=		https://github.com/miyucy/snappy

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libsnappy.so:archivers/snappy

USES=		gem shebangfix

SHEBANG_FILES=	smoke.sh \
		vendor/snappy/config.status \
		vendor/snappy/libtool

.include <bsd.port.mk>
