PORTNAME=	apipie-bindings
PORTVERSION=	0.6.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for API calls that are documented with Apipie
WWW=		https://github.com/Apipie/apipie-bindings

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-gssapi>=0:security/rubygem-gssapi \
		rubygem-json>=1.2.1:devel/rubygem-json \
		rubygem-oauth>=0:net/rubygem-oauth \
		rubygem-rest-client>=1.6.5<3.0.0:www/rubygem-rest-client

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
