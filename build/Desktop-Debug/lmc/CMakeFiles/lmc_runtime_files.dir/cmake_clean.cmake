file(REMOVE_RECURSE
  "CMakeFiles/lmc_runtime_files"
  "runtime/lang/ar_SA.qm"
  "runtime/lang/bg_BG.qm"
  "runtime/lang/de_DE.qm"
  "runtime/lang/el_GR.qm"
  "runtime/lang/en_US.qm"
  "runtime/lang/es_ES.qm"
  "runtime/lang/fr_FR.qm"
  "runtime/lang/hu_HU.qm"
  "runtime/lang/it_IT.qm"
  "runtime/lang/ja_JP.qm"
  "runtime/lang/ko_KR.qm"
  "runtime/lang/ml_IN.qm"
  "runtime/lang/pl_PL.qm"
  "runtime/lang/pt_BR.qm"
  "runtime/lang/ro_RO.qm"
  "runtime/lang/ru_RU.qm"
  "runtime/lang/sk_SK.qm"
  "runtime/lang/sl_SI.qm"
  "runtime/lang/sv_SE.qm"
  "runtime/lang/tr_TR.qm"
  "runtime/lmc.rcc"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/lmc_runtime_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
