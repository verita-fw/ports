PORTNAME=	blazeiterative
PORTVERSION=	g20180409
PORTREVISION=	13
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Set of iterative linear system solvers for use with the Blaze library
WWW=		https://github.com/tjolsen/BlazeIterative

#LICENSE=	https://github.com/tjolsen/BlazeIterative/issues/9

BUILD_DEPENDS=	blaze>0:math/blaze \
		boost-libs>0:devel/boost-libs \
		openblas>0:math/openblas
RUN_DEPENDS=	blaze>0:math/blaze

USES=		cmake compiler:c++14-lang fortran localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	tjolsen
GH_PROJECT=	BlazeIterative
GH_TAGNAME=	e9f24b3
NO_ARCH=	yes

.include <bsd.port.mk>
