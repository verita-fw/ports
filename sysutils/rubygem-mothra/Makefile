PORTNAME=	mothra
PORTVERSION=	0.0.3
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ports@FreeBSD.org
COMMENT=	FreeBSD send-pr command line tool for Bugzilla system
WWW=		https://github.com/pct/mothra

LICENSE=	MIT

RUN_DEPENDS=	rubygem-colorize>=0.7.3:devel/rubygem-colorize \
		rubygem-rodzilla>=0.3.6:devel/rubygem-rodzilla \
		rubygem-thor>=0.19.1:devel/rubygem-thor

NO_ARCH=	yes

USES=		gem
PLIST_FILES=	bin/mothra

.include <bsd.port.mk>
