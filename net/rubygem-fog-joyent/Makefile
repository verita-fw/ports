PORTNAME=	fog-joyent
PORTVERSION=	0.0.1
PORTREVISION=	2
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support Joyent
WWW=		https://github.com/fog/fog-joyent

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core1>=1.42<2:devel/rubygem-fog-core1 \
		rubygem-fog-json>=1.0:devel/rubygem-fog-json

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
