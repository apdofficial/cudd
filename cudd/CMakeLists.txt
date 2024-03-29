add_library(cudd STATIC)
add_library(cudd::cudd ALIAS cudd)

target_include_directories(cudd PUBLIC ${CMAKE_CURRENT_LIST_DIR})

target_sources(cudd
        PUBLIC
        ../config.h
        cuddZddMisc.c
        cuddZddPort.c
        cuddInteract.c
        cuddZddLin.c
        cuddZddSetop.c
        cuddBddAbs.c
        cuddSat.c
        cuddSubsetSP.c
        cuddSplit.c
        cuddLevelQ.c
        cuddBddIte.c
        cuddSolve.c
        cuddZddFuncs.c
        cuddSign.c
        cuddGroup.c
        cuddAPI.c
        cuddAddAbs.c
        cuddLCache.c
        cuddReorder.c
        cuddGenCof.c
        cuddAddIte.c
        cuddAddNeg.c
        cudd.h
        cuddZddReord.c
        cuddLinear.c
        cuddMatMult.c
        cuddLiteral.c
        cuddApprox.c
        cuddHarwell.c
        cuddGenetic.c
        cuddBddCorr.c
        cuddZddCount.c
        cuddAddInv.c
        cuddUtil.c
        cuddCache.c
        cuddZddSymm.c
        cuddAnneal.c
        cuddAddApply.c
        cuddZddIsop.c
        cuddSubsetHB.c
        cuddAddFind.c
        cuddZddGroup.c
        cuddExact.c
        cuddZddUtil.c
        cuddCheck.c
        cuddRef.c
        cuddTable.c
        cuddDecomp.c
        cuddSymmetry.c
        cuddEssent.c
        cuddApa.c
        cuddRead.c
        cuddInt.h
        cuddPriority.c
        cuddInit.c
        cuddCof.c
        cuddClip.c
        cuddBridge.c
        cuddWindow.c
        cuddCompose.c
        cuddAndAbs.c
        cuddAddWalsh.c
        cuddExport.c
        dddmp.h
)

target_link_libraries(cudd PRIVATE
        util::util
        st::st
        mtr::mtr
        epd::epd
        dddmp::dddmp
)

target_compile_options(cudd PRIVATE -fPIC)
