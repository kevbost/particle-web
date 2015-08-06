console.log('\'Allo \'Allo!');

var d = "54ff6e066667515131441367";
var t = "8f6d3f859d1055bbf552ecf8cae7cdf4ea48d70a";

var deviceIdFinal,
    tokenFinal,

    deviceId = $('#deviceId'),
    token = $('#deviceToken'),

    _updateForm = function(d, t){
        if (deviceIdFinal.length === 24 && tokenFinal.length === 40) {
            var newPath = "https://api.particle.io/v1/devices/" + d + "/led?access_token=" + t;
            document.particle_form.action = newPath;
            $('.path')
                .text(newPath)
                .addClass('validated')
            ;
        } else {
            return false;
        }
    },

    _validation = function(){

        $('#device-info').on('keyup change', 'input', function(){
            if(deviceId.val().length === 24) {
                console.log('okay that device id looks okay');
                deviceIdFinal = deviceId.val();
                $('.device-validation').addClass('hidden');
                if (deviceIdFinal && tokenFinal) {
                    _updateForm(deviceIdFinal, tokenFinal);
                }
            } else {
                console.log('not yet');
                $('.device-validation').removeClass('hidden');
            }

            if(token.val().length === 40) {
                console.log('okay that should be an okay device access token');
                tokenFinal = token.val();
                $('.token-validation').addClass('hidden');
                if (deviceIdFinal && tokenFinal) {
                    _updateForm(deviceIdFinal, tokenFinal);
                }
            } else {
                console.log('not yet');
                $('.token-validation').removeClass('hidden');
            }
        })
    },

    _updateUrl = function(){
        deviceIdFinal = deviceId.val();
        tokenFinal = token.val();
        _updateForm(deviceIdFinal, tokenFinal);
    },

    init = function(){
        _validation();
    }
;

$(function(){
    $('.update').click(_updateUrl);

    init();
    deviceId.val(d);
    token.val(t);
});

