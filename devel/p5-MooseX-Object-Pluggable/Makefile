PORTNAME=	MooseX-Object-Pluggable
PORTVERSION=	0.0014
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Make your classes pluggable
WWW=		https://metacpan.org/release/MooseX-Object-Pluggable

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moose>=0:devel/p5-Moose \
		p5-Module-Runtime>=0:devel/p5-Module-Runtime \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny \
		p5-Module-Pluggable>=0:devel/p5-Module-Pluggable \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
