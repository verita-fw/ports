PORTNAME=	gitlab_omniauth-ldap
PORTVERSION=	2.2.0
PORTREVISION=	0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	LDAP strategy for OmniAuth
WWW=		https://gitlab.com/gitlab-org/omniauth-ldap

LICENSE=	MIT

RUN_DEPENDS=	rubygem-net-ldap>=0.16<1:net/rubygem-net-ldap \
		rubygem-omniauth>=1.3<3:security/rubygem-omniauth \
		rubygem-pyu-ruby-sasl>=0.0.3.3<0.1:security/rubygem-pyu-ruby-sasl \
		rubygem-rubyntlm>=0.5<1:net/rubygem-rubyntlm

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
