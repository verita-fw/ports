PORTNAME=	vagrant-vbguest
PORTVERSION=	0.31.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Vagrant plugin to install the VirtualBoxAdditions into the guest VM
WWW=		https://github.com/dotless-de/vagrant-vbguest

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-i18n>=0:devel/rubygem-i18n \
		rubygem-log4r>=0:sysutils/rubygem-log4r \
		rubygem-micromachine>=2<4:devel/rubygem-micromachine

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
