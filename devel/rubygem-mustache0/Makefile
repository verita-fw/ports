PORTNAME=	mustache
PORTVERSION=	0.99.8
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	0

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Framework-agnostic way to render logic-free views
WWW=		https://github.com/mustache/mustache

LICENSE=	MIT

DEPRECATED=	Use devel/mustache
EXPIRATION_DATE=2023-09-27

NO_ARCH=	yes
USES=		gem

PLIST_FILES=	bin/mustache${PKGNAMESUFFIX}

post-install:
	@${MV} ${STAGEDIR}/${PREFIX}/bin/mustache \
	       ${STAGEDIR}/${PREFIX}/bin/mustache${PKGNAMESUFFIX}

PORTSCOUT=	limit:^0\.

.include <bsd.port.mk>
