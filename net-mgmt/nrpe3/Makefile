PORTNAME=	nrpe
PORTVERSION=	3.2.1
DISTVERSIONPREFIX=	nrpe-
PORTREVISION?=	1
CATEGORIES=	net-mgmt
PKGNAMESUFFIX=	3

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	Nagios Remote Plugin Executor
WWW=		https://www.nagios.org/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

DEPRECATED=	Fails to build with recent OpenSSL so use net-mgmt/nrpe
EXPIRATION_DATE=	2023-06-03

USE_GITHUB=	yes
GH_ACCOUNT=	NagiosEnterprises

USES=		perl5
USE_PERL5=	build
USE_RC_SUBR=	nrpe3
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	SSL ARGS
OPTIONS_RADIO=	PLUGINS
OPTIONS_RADIO_PLUGINS=	MONPLUGINS NAGPLUGINS
OPTIONS_DEFAULT=NAGPLUGINS SSL

SSL_DESC=	Enable SSL support (disables plain-text server)
ARGS_DESC=	Enable command argument processing
NAGPLUGINS_DESC=Use net-mgmt/nagios-plugins
MONPLUGINS_DESC=Use net-mgmt/monitoring-plugins

SSL_USES=		ssl
SSL_CONFIGURE_ENABLE=	ssl
SSL_CONFIGURE_WITH=	ssl=${OPENSSLBASE} ssl-inc=${OPENSSLINC} ssl-lib=${OPENSSLLIB}
SSL_CFLAGS=		-I${OPENSSLINC}
SSL_VARS=	BROKEN_SSL="openssl30 openssl31" \
		BROKEN_SSL_REASON="error: undefined symbol: get_dh2048"

ARGS_CONFIGURE_ON=	--enable-command-args
ARGS_CONFIGURE_OFF=	--disable-command-args

MONPLUGINS_RUN_DEPENDS=	${LOCALBASE}/libexec/nagios/check_nagios:net-mgmt/monitoring-plugins
NAGPLUGINS_RUN_DEPENDS=	${LOCALBASE}/libexec/nagios/check_nagios:net-mgmt/nagios-plugins

NAGIOSUSER?=	nagios
NAGIOSGROUP?=	nagios
USERS=		${NAGIOSUSER}
GROUPS=		${NAGIOSGROUP}

NRPE_PIDDIR?=	/var/run/nrpe3

CONFIGURE_ARGS+=--bindir=${PREFIX}/sbin \
		--libexecdir=${PREFIX}/libexec/nagios \
		--sysconfdir=${PREFIX}/etc \
		--with-nrpe-user=${NAGIOSUSER} \
		--with-nrpe-group=${NAGIOSGROUP}

PLIST_SUB=	NAGIOSUSER=${NAGIOSUSER} \
		NAGIOSGROUP=${NAGIOSGROUP} \
		NRPE_PIDDIR=${NRPE_PIDDIR}
SUB_LIST+=	PIDDIR=${NRPE_PIDDIR}

SUB_FILES=	pkg-message

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400079 || ( ${OSVERSION} >= 1302505 && ${OSVERSION} < 1400000 ))
CFLAGS+=	-Wno-error=int-conversion
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/var/run/nrpe.pid|${NRPE_PIDDIR}/nrpe3.pid|g' \
		-e 's|/usr/lib/nagios/plugins/|${LOCALBASE}/libexec/nagios/|g' \
		-e 's|/usr/bin/sudo|${LOCALBASE}/bin/sudo|g' \
		${WRKSRC}/sample-config/nrpe.cfg.in

do-install:
	${INSTALL} -d ${STAGEDIR}${NRPE_PIDDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/src/nrpe ${STAGEDIR}${PREFIX}/sbin/nrpe3
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_PROGRAM} ${WRKSRC}/src/check_nrpe ${STAGEDIR}${PREFIX}/libexec/nagios/check_nrpe3
	${INSTALL_DATA} ${WRKSRC}/sample-config/nrpe.cfg ${STAGEDIR}${PREFIX}/etc/nrpe.cfg.sample

.include <bsd.port.post.mk>
