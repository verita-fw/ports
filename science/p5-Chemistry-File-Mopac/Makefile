PORTNAME=	Chemistry-File-Mopac
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ITUB
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	MOPAC 6 input file reader/writer
WWW=		https://metacpan.org/release/Chemistry-File-Mopac

BUILD_DEPENDS=	p5-Chemistry-Mol>=0:science/p5-Chemistry-Mol \
		p5-Chemistry-InternalCoords>=0:science/p5-Chemistry-InternalCoords
RUN_DEPENDS=	p5-Chemistry-Mol>=0:science/p5-Chemistry-Mol \
		p5-Chemistry-InternalCoords>=0:science/p5-Chemistry-InternalCoords

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
