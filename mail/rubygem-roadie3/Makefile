PORTNAME=	roadie
PORTVERSION=	3.5.1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	3

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Helper for generating HTML mails
WWW=		https://github.com/Mange/roadie

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-css_parser>=1.4<2:textproc/rubygem-css_parser \
		rubygem-nokogiri>=1.8<2:textproc/rubygem-nokogiri

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^3\.

.include <bsd.port.mk>
