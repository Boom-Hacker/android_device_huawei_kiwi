<!DOCTYPE html><html lang="en"><head><meta charset="utf-8"><title>QCamera2/stack/mm-camera-interface/inc/mm_camera_sock.h - platform/hardware/qcom/camera - Git at Google</title><link rel="stylesheet" type="text/css" href="/+static/base.css"><link rel="stylesheet" type="text/css" href="/+static/prettify/prettify.css"><!-- default customHeadTagPart --></head><body class="Site"><header class="Site-header"><div class="Header"><a class="Header-image" href="/"><img src="//www.gstatic.com/images/branding/lockups/2x/lockup_git_color_108x24dp.png" width="108" height="24" alt="Google Git"></a><div class="Header-menu"> <a class="Header-menuItem" href="https://accounts.google.com/AccountChooser?service=gerritcodereview&amp;continue=https://android.googlesource.com/login/platform/hardware/qcom/camera/%2B/jb-mr2.0-release/QCamera2/stack/mm-camera-interface/inc/mm_camera_sock.h">Sign in</a> </div></div></header><div class="Site-content"><div class="Container "><div class="Breadcrumbs"><a class="Breadcrumbs-crumb" href="/?format=HTML">android</a> / <a class="Breadcrumbs-crumb" href="/platform/">platform</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/">hardware</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/">qcom</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/">camera</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release">jb-mr2.0-release</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/">.</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/QCamera2">QCamera2</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/QCamera2/stack">stack</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/QCamera2/stack/mm-camera-interface">mm-camera-interface</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/QCamera2/stack/mm-camera-interface/inc">inc</a> / <span class="Breadcrumbs-crumb">mm_camera_sock.h</span></div><div class="u-sha1 u-monospace BlobSha1">blob: 8889e3c76844a8d376cc1d024276b7f0a3150772 [<a href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/QCamera2/stack/mm-camera-interface/inc/mm_camera_sock.h">file</a>] [<a href="/platform/hardware/qcom/camera/+log/jb-mr2.0-release/QCamera2/stack/mm-camera-interface/inc/mm_camera_sock.h">log</a>] [<a href="/platform/hardware/qcom/camera/+blame/jb-mr2.0-release/QCamera2/stack/mm-camera-interface/inc/mm_camera_sock.h">blame</a>]</div><table class="FileContents"><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="1" onclick="window.location.hash='#1'"></td><td class="FileContents-lineContents" id="1"><span class="com">/* Copyright (c) 2012, The Linux Foundation. All rights reserved.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="2" onclick="window.location.hash='#2'"></td><td class="FileContents-lineContents" id="2"><span class="com"> *</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="3" onclick="window.location.hash='#3'"></td><td class="FileContents-lineContents" id="3"><span class="com"> * Redistribution and use in source and binary forms, with or without</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="4" onclick="window.location.hash='#4'"></td><td class="FileContents-lineContents" id="4"><span class="com"> * modification, are permitted provided that the following conditions are</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="5" onclick="window.location.hash='#5'"></td><td class="FileContents-lineContents" id="5"><span class="com"> * met:</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="6" onclick="window.location.hash='#6'"></td><td class="FileContents-lineContents" id="6"><span class="com"> *     * Redistributions of source code must retain the above copyright</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="7" onclick="window.location.hash='#7'"></td><td class="FileContents-lineContents" id="7"><span class="com"> *       notice, this list of conditions and the following disclaimer.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="8" onclick="window.location.hash='#8'"></td><td class="FileContents-lineContents" id="8"><span class="com"> *     * Redistributions in binary form must reproduce the above</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="9" onclick="window.location.hash='#9'"></td><td class="FileContents-lineContents" id="9"><span class="com"> *       copyright notice, this list of conditions and the following</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="10" onclick="window.location.hash='#10'"></td><td class="FileContents-lineContents" id="10"><span class="com"> *       disclaimer in the documentation and/or other materials provided</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="11" onclick="window.location.hash='#11'"></td><td class="FileContents-lineContents" id="11"><span class="com"> *       with the distribution.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="12" onclick="window.location.hash='#12'"></td><td class="FileContents-lineContents" id="12"><span class="com"> *     * Neither the name of The Linux Foundation nor the names of its</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="13" onclick="window.location.hash='#13'"></td><td class="FileContents-lineContents" id="13"><span class="com"> *       contributors may be used to endorse or promote products derived</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="14" onclick="window.location.hash='#14'"></td><td class="FileContents-lineContents" id="14"><span class="com"> *       from this software without specific prior written permission.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="15" onclick="window.location.hash='#15'"></td><td class="FileContents-lineContents" id="15"><span class="com"> *</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="16" onclick="window.location.hash='#16'"></td><td class="FileContents-lineContents" id="16"><span class="com"> * THIS SOFTWARE IS PROVIDED &quot;AS IS&quot; AND ANY EXPRESS OR IMPLIED</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="17" onclick="window.location.hash='#17'"></td><td class="FileContents-lineContents" id="17"><span class="com"> * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="18" onclick="window.location.hash='#18'"></td><td class="FileContents-lineContents" id="18"><span class="com"> * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="19" onclick="window.location.hash='#19'"></td><td class="FileContents-lineContents" id="19"><span class="com"> * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="20" onclick="window.location.hash='#20'"></td><td class="FileContents-lineContents" id="20"><span class="com"> * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="21" onclick="window.location.hash='#21'"></td><td class="FileContents-lineContents" id="21"><span class="com"> * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="22" onclick="window.location.hash='#22'"></td><td class="FileContents-lineContents" id="22"><span class="com"> * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="23" onclick="window.location.hash='#23'"></td><td class="FileContents-lineContents" id="23"><span class="com"> * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="24" onclick="window.location.hash='#24'"></td><td class="FileContents-lineContents" id="24"><span class="com"> * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="25" onclick="window.location.hash='#25'"></td><td class="FileContents-lineContents" id="25"><span class="com"> * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="26" onclick="window.location.hash='#26'"></td><td class="FileContents-lineContents" id="26"><span class="com"> * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="27" onclick="window.location.hash='#27'"></td><td class="FileContents-lineContents" id="27"><span class="com"> *</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="28" onclick="window.location.hash='#28'"></td><td class="FileContents-lineContents" id="28"><span class="com"> */</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="29" onclick="window.location.hash='#29'"></td><td class="FileContents-lineContents" id="29"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="30" onclick="window.location.hash='#30'"></td><td class="FileContents-lineContents" id="30"><span class="com">#ifndef</span><span class="pln"> __MM_CAMERA_SOCKET_H__</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="31" onclick="window.location.hash='#31'"></td><td class="FileContents-lineContents" id="31"><span class="com">#define</span><span class="pln"> __MM_CAMERA_SOCKET_H__</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="32" onclick="window.location.hash='#32'"></td><td class="FileContents-lineContents" id="32"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="33" onclick="window.location.hash='#33'"></td><td class="FileContents-lineContents" id="33"><span class="com">#include</span><span class="pln"> </span><span class="str">&lt;inttypes.h&gt;</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="34" onclick="window.location.hash='#34'"></td><td class="FileContents-lineContents" id="34"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="35" onclick="window.location.hash='#35'"></td><td class="FileContents-lineContents" id="35"><span class="kwd">typedef</span><span class="pln"> </span><span class="kwd">enum</span><span class="pln"> </span><span class="pun">{</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="36" onclick="window.location.hash='#36'"></td><td class="FileContents-lineContents" id="36"><span class="pln">    MM_CAMERA_SOCK_TYPE_UDP</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="37" onclick="window.location.hash='#37'"></td><td class="FileContents-lineContents" id="37"><span class="pln">    MM_CAMERA_SOCK_TYPE_TCP</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="38" onclick="window.location.hash='#38'"></td><td class="FileContents-lineContents" id="38"><span class="pun">}</span><span class="pln"> </span><span class="typ">mm_camera_sock_type_t</span><span class="pun">;</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="39" onclick="window.location.hash='#39'"></td><td class="FileContents-lineContents" id="39"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="40" onclick="window.location.hash='#40'"></td><td class="FileContents-lineContents" id="40"><span class="kwd">int</span><span class="pln"> mm_camera_socket_create</span><span class="pun">(</span><span class="kwd">int</span><span class="pln"> cam_id</span><span class="pun">,</span><span class="pln"> </span><span class="typ">mm_camera_sock_type_t</span><span class="pln"> sock_type</span><span class="pun">);</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="41" onclick="window.location.hash='#41'"></td><td class="FileContents-lineContents" id="41"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="42" onclick="window.location.hash='#42'"></td><td class="FileContents-lineContents" id="42"><span class="kwd">int</span><span class="pln"> mm_camera_socket_sendmsg</span><span class="pun">(</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="43" onclick="window.location.hash='#43'"></td><td class="FileContents-lineContents" id="43"><span class="pln">  </span><span class="kwd">int</span><span class="pln"> fd</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="44" onclick="window.location.hash='#44'"></td><td class="FileContents-lineContents" id="44"><span class="pln">  </span><span class="kwd">void</span><span class="pln"> </span><span class="pun">*</span><span class="pln">msg</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="45" onclick="window.location.hash='#45'"></td><td class="FileContents-lineContents" id="45"><span class="pln">  </span><span class="typ">uint32_t</span><span class="pln"> buf_size</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="46" onclick="window.location.hash='#46'"></td><td class="FileContents-lineContents" id="46"><span class="pln">  </span><span class="kwd">int</span><span class="pln"> sendfd</span><span class="pun">);</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="47" onclick="window.location.hash='#47'"></td><td class="FileContents-lineContents" id="47"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="48" onclick="window.location.hash='#48'"></td><td class="FileContents-lineContents" id="48"><span class="kwd">int</span><span class="pln"> mm_camera_socket_recvmsg</span><span class="pun">(</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="49" onclick="window.location.hash='#49'"></td><td class="FileContents-lineContents" id="49"><span class="pln">  </span><span class="kwd">int</span><span class="pln"> fd</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="50" onclick="window.location.hash='#50'"></td><td class="FileContents-lineContents" id="50"><span class="pln">  </span><span class="kwd">void</span><span class="pln"> </span><span class="pun">*</span><span class="pln">msg</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="51" onclick="window.location.hash='#51'"></td><td class="FileContents-lineContents" id="51"><span class="pln">  </span><span class="typ">uint32_t</span><span class="pln"> buf_size</span><span class="pun">,</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="52" onclick="window.location.hash='#52'"></td><td class="FileContents-lineContents" id="52"><span class="pln">  </span><span class="kwd">int</span><span class="pln"> </span><span class="pun">*</span><span class="pln">rcvdfd</span><span class="pun">);</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="53" onclick="window.location.hash='#53'"></td><td class="FileContents-lineContents" id="53"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="54" onclick="window.location.hash='#54'"></td><td class="FileContents-lineContents" id="54"><span class="kwd">void</span><span class="pln"> mm_camera_socket_close</span><span class="pun">(</span><span class="kwd">int</span><span class="pln"> fd</span><span class="pun">);</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="55" onclick="window.location.hash='#55'"></td><td class="FileContents-lineContents" id="55"></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="56" onclick="window.location.hash='#56'"></td><td class="FileContents-lineContents" id="56"><span class="com">#endif</span><span class="pln"> </span><span class="com">/*__MM_CAMERA_SOCKET_H__*/</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="57" onclick="window.location.hash='#57'"></td><td class="FileContents-lineContents" id="57"></td></tr></table></div> <!-- Container --></div> <!-- Site-content --><footer class="Site-footer"><div class="Footer"><span class="Footer-poweredBy">Powered by <a href="https://gerrit.googlesource.com/gitiles/">Gitiles</a>| <a href="https://policies.google.com/privacy">Privacy</a></span><span class="Footer-formats"><a class="u-monospace Footer-formatsItem" href="?format=TEXT">txt</a> <a class="u-monospace Footer-formatsItem" href="?format=JSON">json</a></span></div></footer></body></html>