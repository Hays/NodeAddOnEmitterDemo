{
  "targets": [
    {
      "target_name": "testmodule",
      "sources": [ "src/async.cc" ],
      "link_settings": {
          "conditions":[
              ['OS=="mac"', {
                  "libraries": [
                      'Foundation.framework',
                  ],
              }
          ]]
      },
      "xcode_settings": {
          "OTHER_CFLAGS": [
              "-x objective-c++ -stdlib=libc++"
          ]
      },
    }
  ]
}