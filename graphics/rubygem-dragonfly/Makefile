PORTNAME=	dragonfly
PORTVERSION=	1.4.0
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	On-the-fly Rack-based image handling framework
WWW=		https://github.com/markevans/dragonfly

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-addressable>=2.3<3:www/rubygem-addressable \
		rubygem-multi_json>=1.0<2:devel/rubygem-multi_json \
		rubygem-rack>=1.3,3:www/rubygem-rack

USES=		gem shebangfix

NO_ARCH=	yes

SHEBANG_FILES=	dev/test_rails
ruby_OLD_CMD=	"env ruby"

.include <bsd.port.mk>
