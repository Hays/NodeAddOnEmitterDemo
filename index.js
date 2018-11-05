const tm = require('bindings')('testmodule')

tm.register(function() {
  console.log("test by Hays .... .2")
})
setTimeout(() => {
  console.log('test by Hays ..... 3')
}, 10000)