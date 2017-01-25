(function($) {
  // Styles the table plugin.
  CKEDITOR.on('dialogDefinition', function(ev) {
    var dialogName = ev.data.name;
    var dialogDefinition = ev.data.definition;

    if (dialogName == 'table') {
      var info = dialogDefinition.getContents('info');
      info.get('txtWidth')[ 'default' ] = '100%';
      info.get('txtBorder')[ 'default' ] = '0';
      info.get('txtCellSpace')[ 'default' ] = '0';
      info.get('txtCellPad')[ 'default' ] = '0';
      info.get('selHeaders')[ 'default' ] = 'row';
    }
  });
})(jQuery);