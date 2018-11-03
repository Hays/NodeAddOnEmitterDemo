{
  "targets": [
    {
    "xcode_settings": {
     "OTHER_CPLUSPLUSFLAGS": [ "'-I../node_modules/nan'"],
    },
      "target_name": "testmodule",
      "sources": [ "src/main.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}