(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
'use strict';var g=this||self;function l(a){l[" "](a);return a}l[" "]=function(){};var m={},n=null;var p="function"===typeof Uint8Array;function q(a){return null!==a&&"object"==typeof a&&!Array.isArray(a)&&!(p&&null!=a&&a instanceof Uint8Array)}function r(a,b){if(null!=a)return Array.isArray(a)||q(a)?t(a,b):b(a)}function t(a,b){if(Array.isArray(a)){var c=Array(a.length);for(var d=0;d<a.length;d++)c[d]=r(a[d],b);Array.isArray(a)&&a[w]&&x(c);return c}c={};for(d in a)c[d]=r(a[d],b);return c}
function aa(a){switch(typeof a){case "number":return isFinite(a)?a:String(a);case "object":if(p&&null!=a&&a instanceof Uint8Array){var b;void 0===b&&(b=0);if(!n){n={};for(var c="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),d=["+/=","+/","-_=","-_.","-_"],e=0;5>e;e++){var f=c.concat(d[e].split(""));m[e]=f;for(var h=0;h<f.length;h++){var k=f[h];void 0===n[k]&&(n[k]=h)}}}b=m[b];c=Array(Math.floor(a.length/3));d=b[64]||"";for(e=f=0;f<a.length-2;f+=3){var u=a[f],v=a[f+1];k=
a[f+2];h=b[u>>2];u=b[(u&3)<<4|v>>4];v=b[(v&15)<<2|k>>6];k=b[k&63];c[e++]=h+u+v+k}h=0;k=d;switch(a.length-f){case 2:h=a[f+1],k=b[(h&15)<<2]||d;case 1:a=a[f],c[e]=b[a>>2]+b[(a&3)<<4|h>>4]+k+d}a=c.join("")}return a;default:return a}}const w=Symbol("IS_REPEATED_FIELD");function x(a){Array.isArray(a)&&!Object.isFrozen(a)&&(a[w]=!0);return a};let y;function z(a,b,c){var d=y;y=null;a||(a=d);d=this.constructor.s;a||(a=d?[d]:[]);this.j=d?0:-1;this.h=null;this.g=a;a:{d=this.g.length;a=d-1;if(d&&(d=this.g[a],q(d))){this.l=a-this.j;this.i=d;break a}void 0!==b&&-1<b?(this.l=Math.max(b,a+1-this.j),this.i=null):this.l=Number.MAX_VALUE}if(c)for(b=0;b<c.length;b++)a=c[b],a<this.l?(a+=this.j,(d=this.g[a])?x(d):this.g[a]=A):(d=this.l+this.j,this.g[d]||(this.i=this.g[d]={}),(d=this.i[a])?x(d):this.i[a]=A)}const A=Object.freeze(x([]));
function B(a,b,c=!1){return-1===b?null:c||b>=a.l?a.i?a.i[b]:void 0:a.g[b+a.j]}function ba(a){a=B(a,2);return null==a?0:a}function ca(a){a=B(a,16);a=null==a?a:!!a;return null==a?!1:a}function C(a,b,c){if(-1===c)return null;a.h||(a.h={});if(!a.h[c]){let d=B(a,c,!1);d&&(a.h[c]=new b(d))}return a.h[c]}z.prototype.toJSON=function(){const a=D(this,!1);return t(a,aa)};
function D(a,b){if(a.h)for(let c in a.h){const d=a.h[c];if(Array.isArray(d))for(let e=0;e<d.length;e++)d[e]&&D(d[e],b);else d&&D(d,b)}return a.g}z.prototype.toString=function(){return D(this,!1).toString()};var ea=class extends z{constructor(a){super(a,-1,da)}},da=[17];var ha=class extends z{constructor(a){super(a,-1,fa)}},fa=[27];var ia=class extends z{constructor(){super(E)}};var F=document;/*

 SPDX-License-Identifier: Apache-2.0
*/
function G(){var a=H;try{var b;if(b=!!a&&null!=a.location.href)a:{try{l(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}}let I=[];const J=()=>{const a=I;I=[];for(const b of a)try{b()}catch(c){}};var ja=a=>{var b=window;"complete"===b.document.readyState?(I.push(a),1==I.length&&(window.Promise?Promise.resolve().then(J):window.setImmediate?setImmediate(J):setTimeout(J,0))):b.addEventListener("load",a)};var K=!!window.google_async_iframe_id;let H=K&&window.parent||window;let L=null;var M=()=>{const a=g.performance;return a&&a.now&&a.timing?Math.floor(a.now()+a.timing.navigationStart):Date.now()},N=()=>{const a=g.performance;return a&&a.now?a.now():null};class ka{constructor(a,b){var c=N()||M();this.label=a;this.type=b;this.value=c;this.duration=0;this.uniqueId=Math.random();this.slotId=void 0}};const O=g.performance,la=!!(O&&O.mark&&O.measure&&O.clearMarks),P=function(a){let b=!1,c;return function(){b||(c=a(),b=!0);return c}}(()=>{var a;if(a=la){var b;if(null===L){L="";try{a="";try{a=g.top.location.hash}catch(c){a=g.location.hash}a&&(L=(b=a.match(/\bdeid=([\d,]+)/))?b[1]:"")}catch(c){}}b=L;a=!!b.indexOf&&0<=b.indexOf("1337")}return a});function ma(a){a&&O&&P()&&(O.clearMarks(`goog_${a.label}_${a.uniqueId}_start`),O.clearMarks(`goog_${a.label}_${a.uniqueId}_end`))}
class na{constructor(){var a=Q;this.g=[];this.i=a||g;let b=null;a&&(a.google_js_reporting_queue=a.google_js_reporting_queue||[],this.g=a.google_js_reporting_queue,b=a.google_measure_js_timing);this.h=P()||(null!=b?b:1>Math.random())}start(a,b){if(!this.h)return null;a=new ka(a,b);b=`goog_${a.label}_${a.uniqueId}_start`;O&&P()&&O.mark(b);return a}end(a){if(this.h&&"number"===typeof a.value){a.duration=(N()||M())-a.value;var b=`goog_${a.label}_${a.uniqueId}_end`;O&&P()&&O.mark(b);!this.h||2048<this.g.length||
this.g.push(a)}}};if(K&&!G()){let a="."+F.domain;try{for(;2<a.split(".").length&&!G();)F.domain=a=a.substr(a.indexOf(".")+1),H=window.parent}catch(b){}G()||(H=window)}const Q=H,R=new na;var S=()=>{Q.google_measure_js_timing||(R.h=!1,R.g!=R.i.google_js_reporting_queue&&(P()&&Array.prototype.forEach.call(R.g,ma,void 0),R.g.length=0))};"number"!==typeof Q.google_srt&&(Q.google_srt=Math.random());
if("complete"==Q.document.readyState)S();else if(R.h){var oa=()=>{S()},T=Q;T.addEventListener&&T.addEventListener.call(T,"load",oa,!1)};function U(a,b){a=a.getElementsByTagName("META");for(let c=0;c<a.length;++c)if(a[c].getAttribute("name")===b)return a[c].getAttribute("content")||"";return""};function V(a,b,c){a.body.addEventListener(b,c)}
var pa=class{constructor(){var a=W;this.body=a;U(a,"sampling_mod");var b=U(a,"namespace");if(!b){b="ns-"+(0,Math.random)().toString(36).substr(2,5);a:{var c=a.getElementsByTagName("META");for(let d=0;d<c.length;++d)if("namespace"===c[d].getAttribute("name")&&c[d].getAttribute("index")===(0).toString()){c[d].setAttribute("content",b);break a}c=a.querySelector("#mys-meta");c||(c=document.createElement("div"),c.id="mys-meta",c.style.position="absolute",c.style.display="none",a.appendChild(c));a=document.createElement("META");
a.setAttribute("name","namespace");a.setAttribute("content",b);a.setAttribute("index",(0).toString());c.appendChild(a)}}}};function qa({threshold:a,target:b,m:c,o:d}){if(window.IntersectionObserver){var e=!1;(new IntersectionObserver(f=>{0!==f.length&&f[0].isIntersecting&&(!e&&c&&c(),e=!0,d&&d())},{threshold:a})).observe(b)}};var ra=class{constructor(){this.g={}}set(a,b){this.g[a]=b}get(a){return this.g[a]}};var sa=class{constructor(){this.channel=1;(this.g=!(!window.mys||!window.mys.pingback))&&this.setData(43,Date.now()-window.mys.pingback.getBaseTime())}setAttribute(a,b){this.g&&window.mys.pingback.setAttribute(a,b)}setData(a,b){this.g&&window.mys.pingback.setData(a,b,this.channel)}send(a){this.g&&window.mys.pingback.send(a)}tick(a,b){this.g&&(this.setData(a,Date.now()-window.mys.pingback.getBaseTime()),this.send(b))}};var ta=class{constructor(a){this.context=a;this.i=new ra;this.pingback=new sa}g(){}};function ua(){var a=X,b=Y,c;2===ba(b)||null!==(c=C(C(b,ha,1),ea,10))&&void 0!==c&&ca(c)||(b=mys.engine?mys.engine.stage():0,0===(b&1)&&V(a.context,"overallStart",()=>{}),0!==(b&4)&&a.g.g(),V(a.context,"browserStart",()=>{}),V(a.context,"browserReady",()=>{a.g.g()}),V(a.context,"browserQuiet",()=>{}))}var wa=class{constructor(){var a=Z;this.g=va;this.context=a}};var xa=class extends ta{};function ya(a){a.h||(a.h=!0,qa({threshold:.9,target:document.querySelector(".x-layout"),m:()=>{const b=document.querySelector(".x-layout");b&&b.classList.add("web-on-show")}}))}var za=class extends xa{constructor(a){super(a);this.h=!1}g(){setTimeout(()=>{ja(()=>{ya(this)})},0)}};var Aa=class extends za{};const W=document.getElementById("mys-content");if(W){var Z=new pa,va;va=new Aa(Z);var X=new wa,Ba=X.g.i,Ca=U(Z.body,"runtime_data");if(Ca){const b=JSON.parse(Ca);for(const c in b)b.hasOwnProperty(c)&&Ba.set(c,b[c])}var Y,Da=U(Z.body,"render_config")||"[]",E=Da?JSON.parse(Da):null;y=E;const a=new ia;y=null;Y=a;ua()};}).call(this);
