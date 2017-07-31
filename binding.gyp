{
  "targets": [
    {
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "Addons\Frontend\ElectronCpp\ElectronCpp",
        "Addons\Frontend\ElectronCpp\ElectronCppAdv"
      ],
      "target_name": "addon",
      "sources": [
        "Addons\Frontend\ElectronCpp\ElectronCppAdv\ElectronCpp1.cpp",
        "Addons\Frontend\ElectronCpp\ElectronCppAdv\SourceInterface.cpp",
        "Addons\Frontend\ElectronCpp\ElectronCpp\ElectronCpp.cpp"
        ],
    "libraries" : ["-lC:\Users/M1035897/Desktop/Electron Dlls/CreateDLL/x64/Debug/CreateDLL.lib"],
    "cflags!": [ "-fno-exceptions" ],
      "cflags": [ "-std=c++11" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}