PORTNAME=	Data-Section
PORTVERSION=	0.200008
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read multiple hunks of data out of your DATA section
WWW=		https://metacpan.org/release/Data-Section

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-MRO-Compat>=0.09:devel/p5-MRO-Compat \
		p5-Sub-Exporter>=0.979:devel/p5-Sub-Exporter
TEST_DEPENDS=	p5-Test-FailWarnings>=0:devel/p5-Test-FailWarnings

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
