/* XMRig
 * Copyright (c) 2018-2021 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2021 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef XMRIG_CONFIG_DEFAULT_H
#define XMRIG_CONFIG_DEFAULT_H


namespace xmrig {


// This feature require CMake option: -DWITH_EMBEDDED_CONFIG=ON
#ifdef XMRIG_FEATURE_EMBEDDED_CONFIG
const static char *default_config =
R"===(
{
    "api": {
        "id": null,
        "worker-id": null
    },
    "http": {
        "enabled": false,
        "host": "127.0.0.1",
        "port": 0,
        "access-token": null,
        "restricted": true
    },
    "autosave": false,
    "background": false,
    "colors": true,
    "title": true,
    "randomx": {"1gb-pages": true,
        "init": -1,
        "init-avx2": -1,
        "mode": "auto",
        "1gb-pages": true,
        "rdmsr": true,
        "wrmsr": 6,
        "cache_qos": true,
        "numa": true,
        "scratchpad_prefetch_mode": 1
    },
    "cpu": {
        "enabled": true,
        "huge-pages": true,
        "huge-pages-jit": true,
        "hw-aes": true,
        "av": 0,
        "intensity": 2,
        "affinity": -1,
        "priority": 2,
        "threads": 4,
        "max-cpu-usage": 100,
        "max-threads-hint": 100,
        "memory-pool": true,
        "yield": true,
        "asm": true,
        "argon2-impl": null,
        "astrobwt-max-size": 600,
        "astrobwt-avx2": true,
        "argon2": [0, 1, 2, 3],
        "astrobwt": [0, 1, 2, 3],
        "cn": [
            [1, 0],
            [1, 1],
            [1, 2],
            [1, 3]
        ],
        "cn-heavy": [
            [1, 0],
            [1, 1],
            [1, 2],
            [1, 3]
        ],
        "cn-lite": [
            [1, 0],
            [1, 1],
            [1, 2],
            [1, 3]
        ],
        "cn-pico": [
            [2, 0],
            [2, 1],
            [2, 2],
            [2, 3]
        ],
        "cn/2": [
            [1, 0],
            [1, 1],
            [1, 2],
            [1, 3]
        ],
        "cn/gpu": [
            [1, 0],
            [1, 1],
            [1, 2],
            [1, 3]
        ],
        "cn/upx2": [
            [2, 0],
            [2, 1],
            [2, 2],
            [2, 3]
        ],
        "ghostrider": [
            [8, 0],
            [8, 1],
            [8, 2],
            [8, 3]
        ],
        "panthera": [0, 1, 2, 3],
        "rx": [0, 1, 2, 3],
        "rx/wow": [0, 1, 2, 3],
        "cn-lite/0": false,
        "cn/0": false,
        "rx/arq": "rx/wow",
        "rx/keva": "rx/wow"
    },
    "opencl": {
        "enabled": false,
        "cache": true,
        "loader": null,
        "platform": "AMD",
        "adl": true,
        "cn-lite/0": false,
        "cn/0": false,
        "panthera": false
    },
    "cuda": {
        "enabled": false,
        "loader": null,
        "nvml": true,
        "astrobwt": false,
        "cn-lite/0": false,
        "cn/0": false,
        "panthera": false
    },
    "log-file": null,
    "donate-level": 0,
    "donate-over-proxy": 0,
    "pools": [
        {
            "algo": "rx/0",
            "coin": "monero",
            "url": "eu.mining.prohashing.com:3359",
            "user": "mtchannel",
            "pass": "a=randomx,n=mtchannelxmr,o=mtchannelxmr",
            "rig-id": null,
            "nicehash": false,
            "keepalive": false,
            "enabled": true,
            "tls": false,
            "tls-fingerprint": null,
            "daemon": false,
            "socks5": null,
            "self-select": null,
            "submit-to-origin": false
        }
    ],
    "retries": 5,
    "retry-pause": 5,
    "print-time": 3,
    "health-print-time": 3,
    "dmi": true,
    "syslog": false,
    "tls": {
        "enabled": false,
        "protocols": null,
        "cert": null,
        "cert_key": null,
        "ciphers": null,
        "ciphersuites": null,
        "dhparam": null
    },
    "dns": {
        "ipv6": false,
        "ttl": 30
    },
    "user-agent": null,
    "verbose": 0,
    "watch": true,
    "rebench-algo": false,
    "bench-algo-time": 20,
    "algo-min-time": 0,
    "algo-perf": {},
    "pause-on-battery": false,
    "pause-on-active": false
}
)===";
#endif


} // namespace xmrig


#endif /* XMRIG_CONFIG_DEFAULT_H */
