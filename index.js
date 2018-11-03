const tm = require('bindings')('testmodule')
function foo() {
  console.log('hey, I am a callback!')
  console.trace();
}
tm.register(foo);
tm.invoke();