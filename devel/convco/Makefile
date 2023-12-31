PORTNAME=	convco
DISTVERSIONPREFIX=	v
DISTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Conventional commit CLI
WWW=		https://github.com/convco/convco

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_GITHUB=	yes

CARGO_CRATES=	addr2line-0.19.0 \
		adler-1.0.2 \
		aho-corasick-1.0.2 \
		anstream-0.3.2 \
		anstyle-1.0.1 \
		anstyle-parse-0.2.1 \
		anstyle-query-1.0.0 \
		anstyle-wincon-1.0.1 \
		anyhow-1.0.72 \
		backtrace-0.3.67 \
		bitflags-1.3.2 \
		bitflags-2.3.3 \
		block-buffer-0.10.3 \
		cc-1.0.78 \
		cfg-if-1.0.0 \
		clap-4.3.19 \
		clap_builder-4.3.19 \
		clap_complete-4.3.2 \
		clap_derive-4.3.12 \
		clap_lex-0.5.0 \
		cmake-0.1.50 \
		colorchoice-1.0.0 \
		console-0.15.5 \
		cpufeatures-0.2.5 \
		crypto-common-0.1.6 \
		ctrlc-3.4.0 \
		dialoguer-0.10.4 \
		digest-0.10.6 \
		encode_unicode-0.3.6 \
		equivalent-1.0.1 \
		errno-0.3.1 \
		errno-dragonfly-0.1.2 \
		fastrand-1.8.0 \
		form_urlencoded-1.2.0 \
		generic-array-0.14.6 \
		gimli-0.27.1 \
		git2-0.17.2 \
		handlebars-4.3.7 \
		hashbrown-0.14.0 \
		heck-0.4.0 \
		hermit-abi-0.3.2 \
		idna-0.4.0 \
		indexmap-2.0.0 \
		instant-0.1.12 \
		is-terminal-0.4.9 \
		itoa-1.0.5 \
		jobserver-0.1.25 \
		lazy_static-1.4.0 \
		libc-0.2.147 \
		libgit2-sys-0.15.2+1.6.4 \
		libssh2-sys-0.3.0 \
		libz-sys-1.1.8 \
		linux-raw-sys-0.4.3 \
		log-0.4.17 \
		memchr-2.5.0 \
		miniz_oxide-0.6.2 \
		nix-0.26.2 \
		object-0.30.3 \
		once_cell-1.17.0 \
		openssl-sys-0.9.87 \
		percent-encoding-2.3.0 \
		pest-2.5.4 \
		pest_derive-2.5.4 \
		pest_generator-2.5.4 \
		pest_meta-2.5.4 \
		pkg-config-0.3.26 \
		proc-macro2-1.0.66 \
		quote-1.0.32 \
		redox_syscall-0.2.16 \
		regex-1.9.1 \
		regex-automata-0.3.3 \
		regex-syntax-0.7.4 \
		remove_dir_all-0.5.3 \
		rustc-demangle-0.1.21 \
		rustix-0.38.4 \
		ryu-1.0.12 \
		same-file-1.0.6 \
		semver-1.0.18 \
		serde-1.0.175 \
		serde_derive-1.0.175 \
		serde_json-1.0.91 \
		serde_yaml-0.9.25 \
		sha2-0.10.6 \
		shell-words-1.1.0 \
		static_assertions-1.1.0 \
		strsim-0.10.0 \
		syn-1.0.107 \
		syn-2.0.27 \
		tempfile-3.3.0 \
		thiserror-1.0.44 \
		thiserror-impl-1.0.44 \
		time-0.3.23 \
		time-core-0.1.1 \
		time-macros-0.2.10 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.0 \
		typenum-1.16.0 \
		ucd-trie-0.1.5 \
		unicode-bidi-0.3.10 \
		unicode-ident-1.0.6 \
		unicode-normalization-0.1.22 \
		unicode-width-0.1.10 \
		unsafe-libyaml-0.2.9 \
		url-2.4.0 \
		utf8parse-0.2.1 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		walkdir-2.3.3 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.42.0 \
		windows-sys-0.48.0 \
		windows-targets-0.48.1 \
		windows_aarch64_gnullvm-0.42.1 \
		windows_aarch64_gnullvm-0.48.0 \
		windows_aarch64_msvc-0.42.1 \
		windows_aarch64_msvc-0.48.0 \
		windows_i686_gnu-0.42.1 \
		windows_i686_gnu-0.48.0 \
		windows_i686_msvc-0.42.1 \
		windows_i686_msvc-0.48.0 \
		windows_x86_64_gnu-0.42.1 \
		windows_x86_64_gnu-0.48.0 \
		windows_x86_64_gnullvm-0.42.1 \
		windows_x86_64_gnullvm-0.48.0 \
		windows_x86_64_msvc-0.42.1 \
		windows_x86_64_msvc-0.48.0 \
		zeroize-1.5.7

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

PLIST_FILES=	bin/${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
