PORTNAME=	System-Command
PORTVERSION=	1.122
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object for running system commands
WWW=		https://metacpan.org/release/System-Command

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-Command>=0:devel/p5-Test-Command \
		p5-Test-Output>=0:devel/p5-Test-Output

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
