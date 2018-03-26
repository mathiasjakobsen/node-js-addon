{
  "targets": [
    {
      "target_name": "optimusPrime",
      "sources": [
        "Main.cpp",
        "OptimusPrime.h",
        "OptimusPrime.cpp"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ],
      "conditions": [
        [ 'OS=="mac"', {
          'xcode_settings': {
            'GCC_ENABLE_CPP_RTTI': 'YES',
            'MACOSX_DEPLOYMENT_TARGET': '10.7',
            'OTHER_CPLUSPLUSFLAGS': [
              '-std=c++11',
              '-stdlib=libc++',
              '-fexceptions'
            ],
            'OTHER_LDFLAGS': [
              "-Wl,-rpath,<@(module_root_dir)/build/Release"
            ]
          },
          "link_settings": {
            "libraries": [
              "$(SDKROOT)/System/Library/Frameworks/AppKit.framework",
              "$(SDKROOT)/System/Library/Frameworks/CoreMIDI.framework"
            ]
          },
        }
        ]
      ],
      "defines": [
        "NDEBUG"
      ]
    }
  ]
}
