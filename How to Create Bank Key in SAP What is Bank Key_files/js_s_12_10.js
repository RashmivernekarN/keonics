var rmf = 0;
var rm_b = 0;
var rm_h = 0;

$('.menu-item-has-children').hover(function () {	
		$(this).children('ul').css('display', 'block');
    }, function () {
        $(this).children('ul').css('display', 'none');
    });

window.onscroll = function() {
	var sitefooter = document.getElementById("site-footer").offsetTop;
	var windyoffset = window.pageYOffset;
	
	var rm = document.getElementById("sidebar");
	if(rmf==0){
		rm_h = rm.offsetHeight;
	}
	rm_b = rm_h;
	if (windyoffset + window.innerHeight > sitefooter) {
		$("#sidebar").css("position","fixed").css("top","unset").css("bottom",(windyoffset+window.innerHeight-sitefooter)+"px");
	} else if (rm_b - windyoffset - window.innerHeight + 70 > 0) {
		$("#sidebar").css("position","absolute").css("top","70px").css("bottom","unset");
		rmf=0;
	} else if (rm_b < window.innerHeight) {
		if(windyoffset-70>0){
			$("#sidebar").css("position","fixed").css("top","0").css("bottom","unset");
		} else{
			$("#sidebar").css("position","fixed").css("top",(70-windyoffset)+"px").css("bottom","unset");
		}
	} else {
		$("#sidebar").css("position","fixed").css("top","unset").css("bottom","0");
		rmf=1;
	}
	
};

$("article img:not(#no-ad)").click(function(){
$(document.body).append('<div id="myModal" class="modal"><span class="modal_close">&times;</span><img class="modal-content" id="img01"><div id="caption"></div></div>');
var modal = document.getElementById('myModal');
var img = this;
var modalImg = document.getElementById("img01");
var captionText = document.getElementById("caption");
modal.style.display = "block";
modalImg.src = this.src;
captionText.innerHTML = this.alt;
var span = document.getElementsByClassName("modal_close")[0];
span.onclick = function() { 
  modal.style.display = "none";
  document.getElementById('myModal').parentNode.removeChild(document.getElementById('myModal'));
}
});

$(document).on("click", ".section-heading:not(.noexpand)" , function() {
	$(this).parent().children('.list-item').css('display','block');
	$(this).addClass('noexpand');
	$(this).removeClass('expand');
});
$(document).on("click", ".section-heading.noexpand" , function() {
	$(this).parent().children('.list-item').css('display','none');
	$(this).removeClass('noexpand');
	$(this).addClass('expand');
});
$(document).ready(function () {
  setTimeout(function () {
	if ($("#ad_contx").html().length < 500) {
		$("#no-ad").fadeIn(800);
	}
  }, 10000);
});