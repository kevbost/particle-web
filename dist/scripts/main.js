console.log("'Allo 'Allo!");var deviceIdFinal,tokenFinal,deviceId=$("#deviceId"),token=$("#deviceToken"),_updateForm=function(e,n){if(24!==deviceIdFinal.length||40!==tokenFinal.length)return!1;var i="https://api.particle.io/v1/devices/"+e+"/led?access_token="+n;document.particle_form.action=i,$(".path").text(i).addClass("validated")},_validation=function(){$("#device-info").on("keyup change","input",function(){24===deviceId.val().length?(console.log("okay that device id looks okay"),deviceIdFinal=deviceId.val(),$(".device-validation").addClass("hidden"),deviceIdFinal&&tokenFinal&&_updateForm(deviceIdFinal,tokenFinal)):(console.log("not yet"),$(".device-validation").removeClass("hidden")),40===token.val().length?(console.log("okay that should be an okay device access token"),tokenFinal=token.val(),$(".token-validation").addClass("hidden"),deviceIdFinal&&tokenFinal&&_updateForm(deviceIdFinal,tokenFinal)):(console.log("not yet"),$(".token-validation").removeClass("hidden"))})},_updateUrl=function(){deviceIdFinal=deviceId.val(),tokenFinal=token.val(),_updateForm(deviceIdFinal,tokenFinal)},init=function(){_validation()};$(function(){$(".update").click(_updateUrl),init()});