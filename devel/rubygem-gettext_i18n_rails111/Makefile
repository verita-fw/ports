PORTNAME=	gettext_i18n_rails
PORTVERSION=	1.11.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	111

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple FastGettext Rails integration
WWW=		https://github.com/grosser/gettext_i18n_rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE.txt

RUN_DEPENDS=	rubygem-fast_gettext>=0.9.0:devel/rubygem-fast_gettext

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^1\.11\.

.include <bsd.port.mk>
