PORTNAME=	her
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ORM that maps REST resources to Ruby objects
WWW=		https://github.com/remi/her

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activemodel4>=4.2.1:databases/rubygem-activemodel4 \
		rubygem-faraday1>=0.8:www/rubygem-faraday1 \
		rubygem-multi_json>=1.7<2:devel/rubygem-multi_json

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
