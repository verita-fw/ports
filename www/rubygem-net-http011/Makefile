PORTNAME=	net-http
PORTVERSION=	0.1.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	011

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	HTTP client api for Ruby
WWW=		https://github.com/ruby/net-http

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual
LICENSE_FILE_BSD2CLAUSE=${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-net-protocol>=0:net/rubygem-net-protocol \
		rubygem-uri>=0:net/rubygem-uri

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^0\.1\.1

.include <bsd.port.mk>
