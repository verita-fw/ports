PORTNAME=	gitaly
DISTVERSION=	16.3.4
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Smart reverse proxy for GitLab
WWW=		https://gitlab.com/gitlab-org/gitaly

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

# Make sure the following patch is included:
# https://gitlab.com/gitlab-org/gitaly/-/merge_requests/4108
# it fixes segfaults reported here: https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=259848

# define dependencies that are required for build and run under MY_DEPENDS
MY_DEPENDS=	git>=2.41.0:devel/git
BUILD_DEPENDS=	bash>0:shells/bash \
		${LOCALBASE}/bin/cmake:devel/cmake-core \
		${MY_DEPENDS}
RUN_DEPENDS=	${MY_DEPENDS} \
		gitlab-shell>=14.17.0:devel/gitlab-shell
LIB_DEPENDS=	libpcre2-8.so:devel/pcre2 \
		libhttp_parser.so:www/http-parser

USES=		cpe gmake go:modules,no_targets iconv pkgconfig ssl

CPE_VENDOR=	gitlab

MAKE_ENV=	GOFLAGS="${GO_BUILDFLAGS}"
# make sure to pass go build options into make process
MAKE_ENV+=	${GO_ENV}

USE_GITLAB=	yes
GL_ACCOUNT=	gitlab-org

USE_GITHUB=	nodefault
# Check used version here: https://gitlab.com/gitlab-org/gitaly/-/blob/v16.3.1/Makefile#L181
# We use here a patched version that is including some patches already merged into 1.7 branch which fixes problems with FreeBSD 14
# https://github.com/libgit2/libgit2/commit/251408cfd4ff8112efaa5c82ec81c9574c4bf022
# https://github.com/libgit2/libgit2/commit/213d35ea6d69598693b7f4b5b737aa98c91ba98e
GH_TUPLE=	mfechner:libgit2:3bd8f66803c056325d5835d1fbc0c2db2ef89d06:build_deps_libgit2_source

# for go dependencies
# Gitlab hosts there dependencies on their own platform and not on go-proxy
# so we download the required go.mod file from gitlab
# lines are taken from go.mk
# ---------------------------
FETCH_DEPENDS=	${GO_CMD}:${GO_PORT} \
		ca_root_nss>0:security/ca_root_nss
MASTER_SITES+=	https://gitlab.com/gitlab-org/gitaly/-/raw/v${DISTVERSION}/
DISTFILES+=	go.mod
DIST_SUBDIR=	go/${PKGORIGIN:S,/,_,g}/${DISTNAME}
EXTRACT_ONLY+=	${DISTFILES:N*.mod\:*:N*.mod:C/:.*//}
_USES_fetch+=	800:go-post-fetch
go-post-fetch:
	@${ECHO_MSG} "===> Fetching ${GO_MODNAME} dependencies";
	@(cd ${DISTDIR}/${DIST_SUBDIR}; \
		[ -e go.mod ] || ${RLN} ${GO_MODFILE} go.mod; \
		${SETENV} ${GO_ENV} GOPROXY=${GO_GOPROXY} ${GO_CMD} mod download -x all)
# ---------------------------

post-extract:
	${MKDIR} ${WRKSRC}/_build/deps/libgit2
	@${RM} -r ${WORKSRC}/_build/deps/libgit2/source
	@${RLN} ${WRKSRC_build_deps_libgit2_source} ${WRKSRC}/_build/deps/libgit2/source

post-patch:
	${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|" ${WRKSRC}/config.toml.example
	${MV} ${WRKSRC}/config.toml.example ${WRKSRC}/config.toml.sample

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DATADIR}/bin
	${FIND} ${WRKSRC} -name '*.orig' -delete
	(cd ${WRKSRC}/_build/bin/ && ${COPYTREE_BIN} .  ${STAGEDIR}${DATADIR}/bin && \
	cd ${WRKSRC} && ${COPYTREE_SHARE} config.toml.sample  ${STAGEDIR}${DATADIR})

post-install:
	${FIND} -s ${STAGEDIR}${DATADIR} -not -type d | ${SORT} | \
		${SED} -e 's#^${STAGEDIR}${PREFIX}/##' | \
		${SED} -E -e '/sample$$/ s#^#@sample #; \
		/gitlab-shell-hook$$/ s#^#@(,,755) #; \
		s#${DATADIR_REL}/bin#@(,,555) ${DATADIR_REL}/bin#; ' >> ${TMPPLIST}

.include <bsd.port.mk>
