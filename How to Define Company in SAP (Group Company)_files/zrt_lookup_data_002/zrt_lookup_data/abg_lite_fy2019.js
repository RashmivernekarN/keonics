(function(){/* 
 
 Copyright The Closure Library Authors. 
 SPDX-License-Identifier: Apache-2.0 
*/ 
'use strict';var m=this||self;function n(a){return a};function p(a){p[" "](a);return a}p[" "]=function(){};var aa={},q=null;var ba="function"===typeof Uint8Array;function ca(a){return null!==a&&"object"==typeof a&&!Array.isArray(a)&&!(ba&&null!=a&&a instanceof Uint8Array)}function da(a,b){if(null!=a)return Array.isArray(a)||ca(a)?ea(a,b):b(a)}function ea(a,b){if(Array.isArray(a)){var c=Array(a.length);for(var d=0;d<a.length;d++)c[d]=da(a[d],b);Array.isArray(a)&&a[fa]&&t(c);return c}c={};for(d in a)c[d]=da(a[d],b);return c} 
function ha(a){switch(typeof a){case "number":return isFinite(a)?a:String(a);case "object":if(ba&&null!=a&&a instanceof Uint8Array){var b;void 0===b&&(b=0);if(!q){q={};for(var c="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),d=["+/=","+/","-_=","-_.","-_"],e=0;5>e;e++){var f=c.concat(d[e].split(""));aa[e]=f;for(var g=0;g<f.length;g++){var k=f[g];void 0===q[k]&&(q[k]=g)}}}b=aa[b];c=Array(Math.floor(a.length/3));d=b[64]||"";for(e=f=0;f<a.length-2;f+=3){var l=a[f],h=a[f+1]; 
k=a[f+2];g=b[l>>2];l=b[(l&3)<<4|h>>4];h=b[(h&15)<<2|k>>6];k=b[k&63];c[e++]=g+l+h+k}g=0;k=d;switch(a.length-f){case 2:g=a[f+1],k=b[(g&15)<<2]||d;case 1:a=a[f],c[e]=b[a>>2]+b[(a&3)<<4|g>>4]+k+d}a=c.join("")}return a;default:return a}}const fa=Symbol("IS_REPEATED_FIELD");function t(a){Array.isArray(a)&&!Object.isFrozen(a)&&(a[fa]=!0);return a};let la;function u(a,b){var c=la;la=null;a||(a=c);c=this.constructor.V;a||(a=c?[c]:[]);this.j=c?0:-1;this.h=null;this.g=a;a:{c=this.g.length;a=c-1;if(c&&(c=this.g[a],ca(c))){this.l=a-this.j;this.i=c;break a}this.l=Number.MAX_VALUE}if(b)for(a=0;a<b.length;a++)if(c=b[a],c<this.l){c+=this.j;var d=this.g[c];d?t(d):this.g[c]=ma}else d=this.l+this.j,this.g[d]||(this.i=this.g[d]={}),(d=this.i[c])?t(d):this.i[c]=ma}const ma=Object.freeze(t([])); 
function v(a,b,c=!1){return-1===b?null:c||b>=a.l?a.i?a.i[b]:void 0:a.g[b+a.j]}function w(a,b){a=v(a,b);a=null==a?a:!!a;return null==a?!1:a}function na(a){var b=oa;a.h||(a.h={});if(!a.h[1]){let c=v(a,1,!1);c&&(a.h[1]=new b(c))}return a.h[1]}u.prototype.toJSON=function(){const a=A(this,!1);return ea(a,ha)};function A(a,b){if(a.h)for(let c in a.h){const d=a.h[c];if(Array.isArray(d))for(let e=0;e<d.length;e++)d[e]&&A(d[e],b);else d&&A(d,b)}return a.g}function pa(a,b){a=v(a,b);return null==a?0:a} 
function qa(a,b){a=v(a,b);return null==a?"":a};var oa=class extends u{constructor(a){super(a,ra)}},ra=[28];var ta=class extends u{constructor(a){super(a,sa)}},sa=[21];var B;var F=class{constructor(a,b){this.g=b===ua?a:""}};F.prototype.toString=function(){return this.g+""};var ua={};function va(a){if(void 0===B){var b=null;var c=m.trustedTypes;if(c&&c.createPolicy){try{b=c.createPolicy("goog#html",{createHTML:n,createScript:n,createScriptURL:n})}catch(d){m.console&&m.console.error(d.message)}B=b}else B=b}a=(b=B)?b.createScriptURL(a):a;return new F(a,ua)};/* 
 
 SPDX-License-Identifier: Apache-2.0 
*/ 
function wa(a){let b=!1,c;return function(){b||(c=a(),b=!0);return c}};var xa={passive:!0},ya=wa(function(){let a=!1;try{const b=Object.defineProperty({},"passive",{get:function(){a=!0}});m.addEventListener("test",null,b)}catch(b){}return a});function G(a,b,c,d){if(a.addEventListener){var e=a.addEventListener;d=d?d.passive&&ya()?d:d.capture||!1:!1;e.call(a,b,c,d)}};function H(a){var b=document;return"string"===typeof a?b.getElementById(a):a}function za(a){var b=document;b.getElementsByClassName?a=b.getElementsByClassName(a)[0]:(b=document,a=b.querySelectorAll&&b.querySelector&&a?b.querySelector(a?"."+a:""):Aa(b,a)[0]||null);return a||null} 
function Aa(a,b){var c,d;if(a.querySelectorAll&&a.querySelector&&b)return a.querySelectorAll(b?"."+b:"");if(b&&a.getElementsByClassName){var e=a.getElementsByClassName(b);return e}e=a.getElementsByTagName("*");if(b){var f={};for(c=d=0;a=e[c];c++){var g=a.className,k;if(k="function"==typeof g.split)k=0<=Array.prototype.indexOf.call(g.split(/\s+/),b,void 0);k&&(f[d++]=a)}f.length=d;return f}return e}function Ba(a){a&&a.parentNode&&a.parentNode.removeChild(a)};var Ca=RegExp("^(?:([^:/?#.]+):)?(?://(?:([^\\\\/?#]*)@)?([^\\\\/?#]*?)(?::([0-9]+))?(?=[\\\\/?#]|$))?([^?#]+)?(?:\\?([^#]*))?(?:#([\\s\\S]*))?$");function I(a){try{var b;if(b=!!a&&null!=a.location.href)a:{try{p(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}}function Da(a,b){if(a)for(const c in a)Object.prototype.hasOwnProperty.call(a,c)&&b.call(void 0,a[c],c,a)}function Ea(a,b){b=void 0===b?document:b;a=String(a);let c;"application/xhtml+xml"===(null==(c=b)?void 0:c.contentType)&&(a=a.toLowerCase());return b.createElement(a)};function Fa(a,b){a.google_image_requests||(a.google_image_requests=[]);const c=Ea("IMG",a.document);c.src=b;a.google_image_requests.push(c)};let Ga=0;function Ha(a){return(a=Ia(a,document.currentScript))&&a.getAttribute("data-jc-version")||"unknown"}function Ia(a,b=null){return b&&b.getAttribute("data-jc")===String(a)?b:document.querySelector(`[${"data-jc"}="${a}"]`)} 
function Ja(){if(!(.01<Math.random())){var a=`https://${"pagead2.googlesyndication.com"}/pagead/gen_204?id=jca&jc=${60}&version=${Ha(60)}&sample=${.01}`,b=window,c;if(c=b.navigator)c=b.navigator.userAgent,c=/Chrome/.test(c)&&!/Edge/.test(c)?!0:!1;c&&b.navigator.sendBeacon?b.navigator.sendBeacon(a):Fa(b,a)}};var J=document,K=window;function Ka(a){return"string"==typeof a.className?a.className:a.getAttribute&&a.getAttribute("class")||""}function La(a,b){a.classList?b=a.classList.contains(b):(a=a.classList?a.classList:Ka(a).match(/\S+/g)||[],b=0<=Array.prototype.indexOf.call(a,b,void 0));return b}function M(a,b){if(a.classList)a.classList.add(b);else if(!La(a,b)){var c=Ka(a);b=c+(0<c.length?" "+b:b);"string"==typeof a.className?a.className=b:a.setAttribute&&a.setAttribute("class",b)}};class Ma{constructor(a){this.g=(this.serializedAttributionData=a)?new ta(a):null;this.isMutableImpression=null!=v(this.g,1)&&!!w(na(this.g),33);this.S=!!w(this.g,11);this.hasUserFeedbackData=!!this.g&&null!=v(this.g,1);this.K=!!w(this.g,4);this.N=!!w(this.g,6);this.J=!!w(this.g,13);this.creativeIndexSuffix=1<pa(this.g,8)?pa(this.g,7).toString():"";this.T=!!w(this.g,17);this.P=!!w(this.g,18);this.I=!!w(this.g,14);this.enableMultiplexThirdPartyAttribution=!!w(this.g,32);this.B=!!w(this.g,15);this.U= 
!!w(this.g,31);this.O=1==w(this.g,9);this.openAttributionInline=1==w(this.g,10);this.isMobileDevice=!!w(this.g,12);this.R=null;this.M=(a=J.querySelector("[data-slide]"))?"true"===a.getAttribute("data-slide"):!1;(this.D=""!==this.creativeIndexSuffix)&&void 0===K.goog_multislot_cache&&(K.goog_multislot_cache={});if(this.D&&!this.M){if(a=K.goog_multislot_cache.hd,void 0===a){a=!1;var b=J.querySelector("[data-dim]");if(b)if(b=b.getBoundingClientRect(),150<=b.right-b.left&&150<=b.bottom-b.top)a=!1;else{var c= 
document.body.getBoundingClientRect();150>(1>=Math.abs(c.left-b.left)&&1>=Math.abs(c.right-b.right)?b.bottom-b.top:b.right-b.left)&&(a=!0)}else a=!1;window.goog_multislot_cache.hd=a}}else a=!1;this.C=a;this.u=H("abgcp"+this.creativeIndexSuffix);this.s=H("abgc"+this.creativeIndexSuffix);this.h=H("abgs"+this.creativeIndexSuffix);H("abgl"+this.creativeIndexSuffix);this.o=H("abgb"+this.creativeIndexSuffix);this.A=H("abgac"+this.creativeIndexSuffix);H("mute_panel"+this.creativeIndexSuffix);this.v=za("goog_delegate_attribution"+ 
this.creativeIndexSuffix);this.isDelegateAttributionActive=!!this.v&&!!this.I&&!za("goog_delegate_disabled")&&!this.B;if(this.h)a:{a=this.h;b="A";c=a.childNodes;for(let d=0;d<c.length;d++){const e=c.item(d);if("undefined"!=typeof e.tagName&&e.tagName.toUpperCase()==b){a=e;break a}}}else a=null;this.l=a;this.j=this.isDelegateAttributionActive?this.v:H("cbb"+this.creativeIndexSuffix);this.L=this.C?"0"===this.creativeIndexSuffix:!0;this.enableDelegateDismissableMenu=!!this.j&&La(this.j,"goog_dismissable_menu"); 
this.m=null;this.F=0;this.i=this.isDelegateAttributionActive?this.v:this.N&&this.u?this.u:this.s;this.H=!!w(this.g,19);this.adbadgeEnabled=!!w(this.g,24);this.enableNativeJakeUi=!!w(this.g,27)}};class Na{constructor(a,b){if(!a)throw Error("bad conv util ctor args");this.h=a;this.g=b}};var Oa=(a,b)=>{if(a)for(let c in a)Object.prototype.hasOwnProperty.call(a,c)&&b.call(void 0,a[c],c,a)},Pa=!!window.google_async_iframe_id;let N=Pa&&window.parent||window;var O=(a,b)=>{a&&Oa(b,(c,d)=>{a.style[d]=c})};class Ua{constructor(a,b){this.error=a;this.context=b.context;this.msg=b.message||"";this.id=b.id||"jserror";this.meta={}}};const Va=RegExp("^https?://(\\w|-)+\\.cdn\\.ampproject\\.(net|org)(\\?|/|$)");var Wa=class{constructor(a,b){this.g=a;this.h=b}},Xa=class{constructor(a,b){this.url=a;this.G=!!b;this.depth=null}};function P(a,b){const c={};c[a]=b;return[c]}function Ya(a,b,c,d,e){const f=[];Da(a,function(g,k){(g=Za(g,b,c,d,e))&&f.push(k+"="+g)});return f.join(b)} 
function Za(a,b,c,d,e){if(null==a)return"";b=b||"&";c=c||",$";"string"==typeof c&&(c=c.split(""));if(a instanceof Array){if(d=d||0,d<c.length){const f=[];for(let g=0;g<a.length;g++)f.push(Za(a[g],b,c,d+1,e));return f.join(c[d])}}else if("object"==typeof a)return e=e||0,2>e?encodeURIComponent(Ya(a,b,c,d,e+1)):"...";return encodeURIComponent(String(a))}function $a(a){let b=1;for(const c in a.h)b=c.length>b?c.length:b;return 3997-b-a.i.length-1} 
function ab(a,b,c){b=b+"//pagead2.googlesyndication.com"+c;let d=$a(a)-c.length;if(0>d)return"";a.g.sort(function(f,g){return f-g});c=null;let e="";for(let f=0;f<a.g.length;f++){const g=a.g[f],k=a.h[g];for(let l=0;l<k.length;l++){if(!d){c=null==c?g:c;break}let h=Ya(k[l],a.i,",$");if(h){h=e+h;if(d>=h.length){d-=h.length;b+=h;e=a.i;break}c=null==c?g:c}}}a="";null!=c&&(a=e+"trn="+c);return b+a}class bb{constructor(){this.i="&";this.h={};this.j=0;this.g=[]}};function cb(a,b,c,d,e){if((d?a.g:Math.random())<(e||.01))try{let f;c instanceof bb?f=c:(f=new bb,Da(c,(k,l)=>{var h=f,r=h.j++;k=P(l,k);h.g.push(r);h.h[r]=k}));const g=ab(f,a.h,"/pagead/gen_204?id="+b+"&");g&&Fa(m,g)}catch(f){}}class db{constructor(){var a=void 0===a?K:a;this.h="http:"===a.location.protocol?"http:":"https:";this.g=Math.random()}};let Q=null;var eb=()=>{const a=m.performance;return a&&a.now&&a.timing?Math.floor(a.now()+a.timing.navigationStart):Date.now()},fb=()=>{const a=m.performance;return a&&a.now?a.now():null};class gb{constructor(a,b){var c=fb()||eb();this.label=a;this.type=b;this.value=c;this.duration=0;this.uniqueId=Math.random();this.slotId=void 0}};const R=m.performance,hb=!!(R&&R.mark&&R.measure&&R.clearMarks),S=wa(()=>{var a;if(a=hb){var b;if(null===Q){Q="";try{a="";try{a=m.top.location.hash}catch(c){a=m.location.hash}a&&(Q=(b=a.match(/\bdeid=([\d,]+)/))?b[1]:"")}catch(c){}}b=Q;a=!!b.indexOf&&0<=b.indexOf("1337")}return a});function ib(a){a&&R&&S()&&(R.clearMarks(`goog_${a.label}_${a.uniqueId}_start`),R.clearMarks(`goog_${a.label}_${a.uniqueId}_end`))} 
class jb{constructor(){var a=T;this.h=[];this.i=a||m;let b=null;a&&(a.google_js_reporting_queue=a.google_js_reporting_queue||[],this.h=a.google_js_reporting_queue,b=a.google_measure_js_timing);this.g=S()||(null!=b?b:1>Math.random())}start(a,b){if(!this.g)return null;a=new gb(a,b);b=`goog_${a.label}_${a.uniqueId}_start`;R&&S()&&R.mark(b);return a}end(a){if(this.g&&"number"===typeof a.value){a.duration=(fb()||eb())-a.value;var b=`goog_${a.label}_${a.uniqueId}_end`;R&&S()&&R.mark(b);!this.g||2048<this.h.length|| 
this.h.push(a)}}};function kb(a){let b=a.toString();a.name&&-1==b.indexOf(a.name)&&(b+=": "+a.name);a.message&&-1==b.indexOf(a.message)&&(b+=": "+a.message);if(a.stack){a=a.stack;try{-1==a.indexOf(b)&&(a=b+"\n"+a);let c;for(;a!=c;)c=a,a=a.replace(/((https?:\/..*\/)[^\/:]*:\d+(?:.|\n)*)\2/,"$1");b=a.replace(/\n */g,"\n")}catch(c){}}return b} 
function lb(a,b,c){let d,e;try{a.g&&a.g.g?(e=a.g.start(b.toString(),3),d=c(),a.g.end(e)):d=c()}catch(f){c=!0;try{ib(e),c=a.m(b,new Ua(f,{message:kb(f)}),void 0,void 0)}catch(g){a.j(217,g)}if(c){let g,k;null==(g=window.console)||null==(k=g.error)||k.call(g,f)}else throw f;}return d}function mb(a,b){var c=U;return(...d)=>lb(c,a,()=>b.apply(void 0,d))} 
class nb{constructor(){var a=ob;this.l=pb;this.h=null;this.m=this.j;this.g=void 0===a?null:a;this.i=!1}j(a,b,c,d,e){e=e||"jserror";let f;try{const x=new bb;var g=x;g.g.push(1);g.h[1]=P("context",a);b.error&&b.meta&&b.id||(b=new Ua(b,{message:kb(b)}));if(b.msg){g=x;var k=b.msg.substring(0,512);g.g.push(2);g.h[2]=P("msg",k)}var l=b.meta||{};b=l;if(this.h)try{this.h(b)}catch(C){}if(d)try{d(b)}catch(C){}d=x;l=[l];d.g.push(3);d.h[3]=l;d=m;l=[];b=null;do{var h=d;if(I(h)){var r=h.location.href;b=h.document&& 
h.document.referrer||null}else r=b,b=null;l.push(new Xa(r||""));try{d=h.parent}catch(C){d=null}}while(d&&h!=d);for(let C=0,Qa=l.length-1;C<=Qa;++C)l[C].depth=Qa-C;h=m;if(h.location&&h.location.ancestorOrigins&&h.location.ancestorOrigins.length==l.length-1)for(r=1;r<l.length;++r){var D=l[r];D.url||(D.url=h.location.ancestorOrigins[r-1]||"",D.G=!0)}var y=l;let V=new Xa(m.location.href,!1);h=null;const ia=y.length-1;for(D=ia;0<=D;--D){var z=y[D];!h&&Va.test(z.url)&&(h=z);if(z.url&&!z.G){V=z;break}}z= 
null;const xb=y.length&&y[ia].url;0!=V.depth&&xb&&(z=y[ia]);f=new Wa(V,z);if(f.h){y=x;var E=f.h.url||"";y.g.push(4);y.h[4]=P("top",E)}var ja={url:f.g.url||""};if(f.g.url){var ka=f.g.url.match(Ca),L=ka[1],Ra=ka[3],Sa=ka[4];E="";L&&(E+=L+":");Ra&&(E+="//",E+=Ra,Sa&&(E+=":"+Sa));var Ta=E}else Ta="";L=x;ja=[ja,{url:Ta}];L.g.push(5);L.h[5]=ja;cb(this.l,e,x,this.i,c)}catch(x){try{cb(this.l,e,{context:"ecmserr",rctx:a,msg:kb(x),url:f&&f.g.url},this.i,c)}catch(V){}}return!0}};let pb,U;if(Pa&&!I(N)){let a="."+J.domain;try{for(;2<a.split(".").length&&!I(N);)J.domain=a=a.substr(a.indexOf(".")+1),N=window.parent}catch(b){}I(N)||(N=window)}const T=N,ob=new jb;var qb=()=>{if(!T.google_measure_js_timing){var a=ob;a.g=!1;a.h!=a.i.google_js_reporting_queue&&(S()&&Array.prototype.forEach.call(a.h,ib,void 0),a.h.length=0)}};pb=new db;"number"!==typeof T.google_srt&&(T.google_srt=Math.random());var rb=pb,sb=T.google_srt;0<=sb&&1>=sb&&(rb.g=sb);U=new nb; 
U.h=a=>{const b=Ga;0!==b&&(a.jc=String(b),a.shv=Ha(b))};U.i=!0;"complete"==T.document.readyState?qb():ob.g&&G(T,"load",()=>{qb()});var W=(a,b)=>mb(a,b);function tb(a){if(a.g.l&&a.g.P){const b=na(a.g.g);b&&null!=v(b,5)&&null!=v(b,6)&&(a.i=new Na(qa(b,5),qa(b,19)));G(a.g.l,"click",W(452,()=>{if(!a.j&&(a.j=!0,a.i)){var c=a.i;let d=c.h+"&label=closebutton_whythisad_click";d+="&label_instance=1";c.g&&(d+="&cid="+c.g);Fa(window,d)}}))}} 
function ub(a){if(a.g.S)G(a.g.i,"click",W(365,b=>{const c=K.goog_interstitial_display;c&&(c(b),b&&(b.stopPropagation(),b.preventDefault()))}));else if(a.g.isMutableImpression&&a.g.isMobileDevice)G(a.g.i,"click",()=>a.h());else if(a.g.isMutableImpression&&!a.g.isMobileDevice&&(a.g.j&&(G(a.g.j,"click",()=>a.h()),G(a.g.j,"keydown",b=>{"Enter"!==b.code&&"Space"!==b.code||a.h()})),a.g.U&&a.g.h&&G(a.g.h,"click",()=>a.h())),a.g.K)vb(a);else{G(a.g.i,"mouseover",W(367,()=>vb(a)));G(a.g.i,"mouseout",W(369, 
()=>wb(a,500)));G(a.g.i,"touchstart",W(368,()=>vb(a)),xa);const b=W(370,()=>wb(a,4E3));G(a.g.i,"mouseup",b);G(a.g.i,"touchend",b);G(a.g.i,"touchcancel",b);a.g.l&&G(a.g.l,"click",W(371,c=>a.preventDefault(c)))}}function vb(a){window.clearTimeout(a.g.m);a.g.m=null;a.g.h&&"block"==a.g.h.style.display||(a.g.F=Date.now(),a.g.o&&a.g.h&&(a.g.o.style.display="none",a.g.h.style.display="block"))}function wb(a,b){window.clearTimeout(a.g.m);a.g.m=window.setTimeout(()=>yb(a),b)} 
function zb(a){const b=a.g.A;b.style.display="block";a.g.enableNativeJakeUi&&window.requestAnimationFrame(()=>{M(b,"abgacfo")})}function yb(a){window.clearTimeout(a.g.m);a.g.m=null;a.g.o&&a.g.h&&(a.g.o.style.display="block",a.g.h.style.display="none")} 
class Ab{constructor(a,b){this.g=a;this.h=b;this.g.T||(this.j=!1,this.i=null,!this.g.C||this.g.adbadgeEnabled||this.g.L?tb(this):(a={display:"none"},b={width:"15px",height:"15px"},this.g.isMobileDevice?(O(this.g.o,a),O(this.g.h,a),O(this.g.u,b),O(this.g.s,b)):O(this.g.s,a)),ub(this),this.g.enableNativeJakeUi&&M(this.g.A,"abgnac"),this.g.isDelegateAttributionActive?(M(document.body,"goog_delegate_active"),M(document.body,"jaa")):(!this.g.isMutableImpression&&this.g.j&&Ba(this.g.j),setTimeout(()=>{M(document.body, 
"jar")},this.g.J?750:100)),this.g.B&&M(document.body,"goog_delegate_disabled"),this.g.H&&K.addEventListener("load",()=>this.h()))}preventDefault(a){if(this.g.h&&"block"==this.g.h.style.display&&500>Date.now()-this.g.F)a.preventDefault?a.preventDefault():a.returnValue=!1;else if(this.g.openAttributionInline){var b=this.g.l.getAttribute("href");window.adSlot?window.adSlot.openAttribution(b)&&(a.preventDefault?a.preventDefault():a.returnValue=!1):window.openAttribution&&(window.openAttribution(b),a.preventDefault? 
a.preventDefault():a.returnValue=!1)}else this.g.O&&(b=this.g.l.getAttribute("href"),window.adSlot?window.adSlot.openSystemBrowser(b)&&(a.preventDefault?a.preventDefault():a.returnValue=!1):window.openSystemBrowser&&(window.openSystemBrowser(b),a.preventDefault?a.preventDefault():a.returnValue=!1))}};function Bb(a){if(!a.g&&(a.g=!0,K.goog_delegate_deferred_token=void 0,a.h)){var b=a.i;a=a.h;if(!a)throw Error("bad attrdata");a=new Ma(a);new b(a)}}class Cb{constructor(a){var b=Db;if(!b)throw Error("bad ctor");this.i=b;this.h=a;this.g=!1;za("goog_delegate_deferred")?void 0!==K.goog_delegate_deferred_token?Bb(this):(a=()=>{Bb(this)},K.goog_delegate_deferred_token=a,setTimeout(a,5E3)):Bb(this)}};var Eb=(a=[])=>{m.google_logging_queue||(m.google_logging_queue=[]);m.google_logging_queue.push([11,a])};class Fb{constructor(){this.promise=new Promise(a=>{this.g=a})}};var Gb=class{constructor(){const a=new Fb;this.promise=a.promise;this.resolve=a.g}},Hb=(a,b)=>{a.google_llp||(a.google_llp={});a=a.google_llp;a[5]||(a[5]=new Gb,b&&b());return a[5]}; 
function Ib(a,b){return Hb(a,function(){var c=a.document;const d=Ea("SCRIPT",c);d.src=b instanceof F&&b.constructor===F?b.g:"type_error:TrustedResourceUrl";var e;const f=(d.ownerDocument&&d.ownerDocument.defaultView||window).document,g=null===(e=f.querySelector)||void 0===e?void 0:e.call(f,"script[nonce]");(e=g?g.nonce||g.getAttribute("nonce")||"":"")&&d.setAttribute("nonce",e);(c=c.getElementsByTagName("script")[0])&&c.parentNode&&c.parentNode.insertBefore(d,c)}).promise};function Jb(a){lb(U,373,()=>{yb(a.h);zb(a.h)});Ib(window,va(`https://${"pagead2.googlesyndication.com"}${"/pagead/js/"+qa(a.g.g,33)+"/abg_survey.js"}`)).then(b=>{b.createAttributionCard(a.g);a.g.R=b;b.expandAttributionCard()});Ja()}class Db{constructor(a){this.g=a;this.h=new Ab(this.g,W(359,()=>Jb(this)))}};Ga=60;function Kb(a){Eb([a]);new Cb(a)}var X=["buildAttribution"],Y=m;X[0]in Y||"undefined"==typeof Y.execScript||Y.execScript("var "+X[0]);for(var Z;X.length&&(Z=X.shift());)X.length||void 0===Kb?Y[Z]&&Y[Z]!==Object.prototype[Z]?Y=Y[Z]:Y=Y[Z]={}:Y[Z]=Kb;}).call(this);
