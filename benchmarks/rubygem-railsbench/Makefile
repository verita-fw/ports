PORTNAME=	railsbench
PORTVERSION=	0.9.8
PORTREVISION=	1
CATEGORIES=	benchmarks rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Scripts designed for benchmarking of Rails applications
WWW=		http://railsbench.rubyforge.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/railsbench

OPTIONS_DEFINE=	GRUFF
GRUFF_DESC=	Plotting of perf data support using gruff

GRUFF_RUN_DEPENDS=	rubygem-gruff>=0:graphics/rubygem-gruff

.include <bsd.port.mk>
