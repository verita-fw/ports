PORTNAME=	RcppRoll
DISTVERSION=	0.3.0
PORTREVISION=	4
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Efficient Rolling / Windowed Operations
WWW=		https://cran.r-project.org/web/packages/RcppRoll/

LICENSE=	GPLv2+

CRAN_DEPENDS=	R-cran-Rcpp>0:devel/R-cran-Rcpp
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
