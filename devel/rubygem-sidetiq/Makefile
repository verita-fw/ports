PORTNAME=	sidetiq
PORTVERSION=	0.7.2
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Recurring jobs for Sidekiq
WWW=		https://github.com/endofunky/sidetiq

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-celluloid>=0.17.3:devel/rubygem-celluloid \
		rubygem-ice_cube>=0.14.0:devel/rubygem-ice_cube \
		rubygem-sidekiq>=4.1.0:devel/rubygem-sidekiq

NO_ARCH=	yes
USES=		gem

.include <bsd.port.mk>
