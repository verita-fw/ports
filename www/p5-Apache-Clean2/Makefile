PORTNAME=	Apache-Clean
PORTVERSION=	2.00
DISTVERSIONSUFFIX=	_7
PORTREVISION=	4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN/Apache/GEOFF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mod_perl interface into HTML::Clean

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:www/mod_perl2 \
		p5-HTML-Clean>=0.8:www/p5-HTML-Clean

USES=		apache perl5
USE_PERL5=	configure

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
