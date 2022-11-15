(function(){/* 
 
 Copyright The Closure Library Authors. 
 SPDX-License-Identifier: Apache-2.0 
*/ 
'use strict';/* 
 
 SPDX-License-Identifier: Apache-2.0 
*/ 
let g=[];const h=()=>{const b=g;g=[];for(const c of b)try{c()}catch(a){}};function k(b=null){return b&&"26"===b.getAttribute("data-jc")?b:document.querySelector('[data-jc="26"]')};var m=document;var n=()=>{var b=m.head,c=b.querySelectorAll("link[data-reload-stylesheet][as=style][rel=preload]");for(var a=0;a<c.length;a++){var e=c[a],d="link",l=document;d=String(d);"application/xhtml+xml"===l.contentType&&(d=d.toLowerCase());d=l.createElement(d);d.setAttribute("rel","stylesheet");d.setAttribute("href",e.getAttribute("href"));b.appendChild(d)}if(0<c.length&&!(.01<Math.random())){b=k(document.currentScript);b=`https://${"pagead2.googlesyndication.com"}/pagead/gen_204?id=jca&jc=${26}&version=${b&& 
b.getAttribute("data-jc-version")||"unknown"}&sample=${.01}`;c=window;if(a=c.navigator)a=c.navigator.userAgent,a=/Chrome/.test(a)&&!/Edge/.test(a)?!0:!1;if(a&&c.navigator.sendBeacon)c.navigator.sendBeacon(b);else{c.google_image_requests||(c.google_image_requests=[]);var f;a=c.document;a=void 0===a?document:a;e="IMG";"application/xhtml+xml"===(null==(f=a)?void 0:f.contentType)&&(e=e.toLowerCase());f=a.createElement(e);f.src=b;c.google_image_requests.push(f)}}};var p=document;"complete"===p.readyState||"interactive"===p.readyState?(g.push(n),1==g.length&&(window.Promise?Promise.resolve().then(h):window.setImmediate?setImmediate(h):setTimeout(h,0))):p.addEventListener("DOMContentLoaded",n);}).call(this);
