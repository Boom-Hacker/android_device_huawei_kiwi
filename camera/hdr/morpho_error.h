<!DOCTYPE html><html lang="en"><head><meta charset="utf-8"><title>hdr/include/morpho_error.h - platform/hardware/qcom/camera - Git at Google</title><link rel="stylesheet" type="text/css" href="/+static/base.css"><link rel="stylesheet" type="text/css" href="/+static/prettify/prettify.css"><!-- default customHeadTagPart --></head><body class="Site"><header class="Site-header"><div class="Header"><a class="Header-image" href="/"><img src="//www.gstatic.com/images/branding/lockups/2x/lockup_git_color_108x24dp.png" width="108" height="24" alt="Google Git"></a><div class="Header-menu"> <a class="Header-menuItem" href="https://accounts.google.com/AccountChooser?service=gerritcodereview&amp;continue=https://android.googlesource.com/login/platform/hardware/qcom/camera/%2B/jb-mr2.0-release/hdr/include/morpho_error.h">Sign in</a> </div></div></header><div class="Site-content"><div class="Container "><div class="Breadcrumbs"><a class="Breadcrumbs-crumb" href="/?format=HTML">android</a> / <a class="Breadcrumbs-crumb" href="/platform/">platform</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/">hardware</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/">qcom</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/">camera</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release">jb-mr2.0-release</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/">.</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/hdr">hdr</a> / <a class="Breadcrumbs-crumb" href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/hdr/include">include</a> / <span class="Breadcrumbs-crumb">morpho_error.h</span></div><div class="u-sha1 u-monospace BlobSha1">blob: 148216fa9f42eeab0753ada5d8cfebe2ad9c8c01 [<a href="/platform/hardware/qcom/camera/+/jb-mr2.0-release/hdr/include/morpho_error.h">file</a>] [<a href="/platform/hardware/qcom/camera/+log/jb-mr2.0-release/hdr/include/morpho_error.h">log</a>] [<a href="/platform/hardware/qcom/camera/+blame/jb-mr2.0-release/hdr/include/morpho_error.h">blame</a>]</div><table class="FileContents"><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="1" onclick="window.location.hash='#1'"></td><td class="FileContents-lineContents" id="1"><span class="com">/**</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="2" onclick="window.location.hash='#2'"></td><td class="FileContents-lineContents" id="2"><span class="com"> * @file     morpho_error.h</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="3" onclick="window.location.hash='#3'"></td><td class="FileContents-lineContents" id="3"><span class="com"> * @brief    G[R[hÌè`</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="4" onclick="window.location.hash='#4'"></td><td class="FileContents-lineContents" id="4"><span class="com"> * @version  1.0.0</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="5" onclick="window.location.hash='#5'"></td><td class="FileContents-lineContents" id="5"><span class="com"> * @date     2008-06-09</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="6" onclick="window.location.hash='#6'"></td><td class="FileContents-lineContents" id="6"><span class="com"> *</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="7" onclick="window.location.hash='#7'"></td><td class="FileContents-lineContents" id="7"><span class="com"> * Copyright (C) 2006-2012 Morpho, Inc.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="8" onclick="window.location.hash='#8'"></td><td class="FileContents-lineContents" id="8"><span class="com"> */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="9" onclick="window.location.hash='#9'"></td><td class="FileContents-lineContents" id="9"><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="10" onclick="window.location.hash='#10'"></td><td class="FileContents-lineContents" id="10"><span class="com">#ifndef</span><span class="pln"> MORPHO_ERROR_H</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="11" onclick="window.location.hash='#11'"></td><td class="FileContents-lineContents" id="11"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_H</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="12" onclick="window.location.hash='#12'"></td><td class="FileContents-lineContents" id="12"><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="13" onclick="window.location.hash='#13'"></td><td class="FileContents-lineContents" id="13"><span class="com">/** G[R[h .*/</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="14" onclick="window.location.hash='#14'"></td><td class="FileContents-lineContents" id="14"><span class="com">#define</span><span class="pln"> MORPHO_OK                   </span><span class="pun">(</span><span class="lit">0x00000000</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; ¬÷ */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="15" onclick="window.location.hash='#15'"></td><td class="FileContents-lineContents" id="15"><span class="com">#define</span><span class="pln"> MORPHO_DOPROCESS            </span><span class="pun">(</span><span class="lit">0x00000001</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt;  */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="16" onclick="window.location.hash='#16'"></td><td class="FileContents-lineContents" id="16"><span class="com">#define</span><span class="pln"> MORPHO_CANCELED             </span><span class="pun">(</span><span class="lit">0x00000002</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; LZ³ê½ */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="17" onclick="window.location.hash='#17'"></td><td class="FileContents-lineContents" id="17"><span class="com">#define</span><span class="pln"> MORPHO_SUSPENDED            </span><span class="pun">(</span><span class="lit">0x00000008</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; f³ê½ */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="18" onclick="window.location.hash='#18'"></td><td class="FileContents-lineContents" id="18"><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="19" onclick="window.location.hash='#19'"></td><td class="FileContents-lineContents" id="19"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_GENERAL_ERROR  </span><span class="pun">(</span><span class="lit">0x80000000</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; êÊIÈG[. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="20" onclick="window.location.hash='#20'"></td><td class="FileContents-lineContents" id="20"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_PARAM          </span><span class="pun">(</span><span class="lit">0x80000001</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; øªs³. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="21" onclick="window.location.hash='#21'"></td><td class="FileContents-lineContents" id="21"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_STATE          </span><span class="pun">(</span><span class="lit">0x80000002</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; àóÔâÖÄoªs³. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="22" onclick="window.location.hash='#22'"></td><td class="FileContents-lineContents" id="22"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_MALLOC         </span><span class="pun">(</span><span class="lit">0x80000004</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; AP[VG[. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="23" onclick="window.location.hash='#23'"></td><td class="FileContents-lineContents" id="23"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_IO             </span><span class="pun">(</span><span class="lit">0x80000008</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; üoÍG[. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="24" onclick="window.location.hash='#24'"></td><td class="FileContents-lineContents" id="24"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_UNSUPPORTED    </span><span class="pun">(</span><span class="lit">0x80000010</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; @\ðT|[gµÄ¢È¢. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="25" onclick="window.location.hash='#25'"></td><td class="FileContents-lineContents" id="25"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_NOTFOUND       </span><span class="pun">(</span><span class="lit">0x80000020</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; õÎÛª©Â©çÈ¢ */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="26" onclick="window.location.hash='#26'"></td><td class="FileContents-lineContents" id="26"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_INTERNAL       </span><span class="pun">(</span><span class="lit">0x80000040</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; àG[. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="27" onclick="window.location.hash='#27'"></td><td class="FileContents-lineContents" id="27"><span class="com">#define</span><span class="pln"> MORPHO_ERROR_UNKNOWN        </span><span class="pun">(</span><span class="lit">0xC0000000</span><span class="pun">)</span><span class="pln">  </span><span class="com">/**&lt; ãLÈOÌG[. */</span><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="28" onclick="window.location.hash='#28'"></td><td class="FileContents-lineContents" id="28"><span class="pln"></span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="29" onclick="window.location.hash='#29'"></td><td class="FileContents-lineContents" id="29"><span class="com">#endif</span><span class="pln"> </span><span class="com">/* #ifndef MORPHO_ERROR_H */</span><span class="pln"></span></td></tr></table></div> <!-- Container --></div> <!-- Site-content --><footer class="Site-footer"><div class="Footer"><span class="Footer-poweredBy">Powered by <a href="https://gerrit.googlesource.com/gitiles/">Gitiles</a>| <a href="https://policies.google.com/privacy">Privacy</a></span><span class="Footer-formats"><a class="u-monospace Footer-formatsItem" href="?format=TEXT">txt</a> <a class="u-monospace Footer-formatsItem" href="?format=JSON">json</a></span></div></footer></body></html>