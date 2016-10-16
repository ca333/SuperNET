/******************************************************************************
 * Copyright © 2014-2016 The SuperNET Developers.                             *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * SuperNET software, including this file may be copied, modified, propagated *
 * or distributed except according to the terms contained in the LICENSE file *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/

#ifndef INCLUDE_NOTARIES_H
#define INCLUDE_NOTARIES_H

char *Notaries[][2] =
{
    { "jl777_testA", "03b7621b44118017a16043f19b30cc8a4cfe068ac4e42417bae16ba460c80f3828" },
    { "jl777_testB", "02ebfc784a4ba768aad88d44d1045d240d47b26e248cafaf1c5169a42d7a61d344" },
    { "pondsea_SH", "02209073bc0943451498de57f802650311b1f12aa6deffcd893da198a544c04f36" },
    { "crackers_EU", "0340c66cf2c41c41efb420af57867baa765e8468c12aa996bfd816e1e07e410728" },
    { "pondsea_EU", "0225aa6f6f19e543180b31153d9e6d55d41bc7ec2ba191fd29f19a2f973544e29d" },
    { "locomb_EU", "025c6d26649b9d397e63323d96db42a9d3caad82e1d6076970efe5056c00c0779b" },
    { "fullmoon_AE", "0204a908350b8142698fdb6fabefc97fe0e04f537adc7522ba7a1e8f3bec003d4a" },
    { "movecrypto_EU", "021ab53bc6cf2c46b8a5456759f9d608966eff87384c2b52c0ac4cc8dd51e9cc42" },
    { "badass_EU", "0209d48554768dd8dada988b98aca23405057ac4b5b46838a9378b95c3e79b9b9e" },
    { "crackers_NA", "029e1c01131974f4cd3f564cc0c00eb87a0f9721043fbc1ca60f9bd0a1f73f64a1" },
    { "proto_EU", "03681ffdf17c8f4f0008cefb7fa0779c5e888339cdf932f0974483787a4d6747c1" },
    { "jeezy_EU", "023cb3e593fb85c5659688528e9a4f1c4c7f19206edc7e517d20f794ba686fd6d6" },
    { "farl4web_EU", "035caa40684ace968677dca3f09098aa02b70e533da32390a7654c626e0cf908e1" },
    { "nxtswe_EU", "032fb104e5eaa704a38a52c126af8f67e870d70f82977e5b2f093d5c1c21ae5899" },
     { "traderbill_EU", "03196e8de3e2e5d872f31d79d6a859c8704a2198baf0af9c7b21e29656a7eb455f" },
     { "vanbreuk_EU", "024f3cad7601d2399c131fd070e797d9cd8533868685ddbe515daa53c2e26004c3" },
     { "titomane_EU", "03517fcac101fed480ae4f2caf775560065957930d8c1facc83e30077e45bdd199" },
     { "supernet_AE", "029d93ef78197dc93892d2a30e5a54865f41e0ca3ab7eb8e3dcbc59c8756b6e355" },
     { "supernet_EU", "02061c6278b91fd4ac5cab4401100ffa3b2d5a277e8f71db23401cc071b3665546" },
     { "yassin_EU", "033fb7231bb66484081952890d9a03f91164fb27d392d9152ec41336b71b15fbd0" },
     { "durerus_EU", "02bcbd287670bdca2c31e5d50130adb5dea1b53198f18abeec7211825f47485d57" },
     { "badass_SH", "026b49dd3923b78a592c1b475f208e23698d3f085c4c3b4906a59faf659fd9530b" },
     { "baddass_NA" "02afa1a9f948e1634a29dc718d218e9d150c531cfa852843a1643a02184a63c1a7" },
    { "pondsea_NA", "031bcfdbb62268e2ff8dfffeb9ddff7fe95fca46778c77eebff9c3829dfa1bb411" },
    { "rnr_EU", "0287aa4b73988ba26cf6565d815786caf0d2c4af704d7883d163ee89cd9977edec" },
    { "crackers_SH", "02313d72f9a16055737e14cfc528dcd5d0ef094cfce23d0348fe974b6b1a32e5f0" },
    { "grewal_SH", "03212a73f5d38a675ee3cdc6e82542a96c38c3d1c79d25a1ed2e42fcf6a8be4e68" },
    { "polycryptoblock_NA", "02708dcda7c45fb54b78469673c2587bfdd126e381654819c4c23df0e00b679622" },
    { "titomane_NA", "0387046d9745414fb58a0fa3599078af5073e10347e4657ef7259a99cb4f10ad47" },
    /*{ "Server1","0221876c8259764224dc1a7b70ec956f3fbe9a768cd77f13082cfa60eb6aa2d068"},
    { "Server2","03c7c14e6b1f94585bb571cf3ee5eb9b9ab54bd23d0acb8cf13edad1c515842b66"},
    { "Server3","02d28f8992ff0cd68c5d558cf55ec5b3ada25151519a6cea8cef1bac04c40023b6"},
    { "Server4","02adc84814fee5864e67fd1b76f97fbe74d6bd07c62335e2f1da918f46d08d84ba"},
    { "Server5","033dcf1c8308a00533fd3206c2db4f38ace0e08ae089a93efd873c8a2f80c4a620"},
    { "Server6","030f9f354cc8e2eaead1d978cc4db7009715083220fe48252fb0b0680d3a63d5a4"},
    { "Server7","0235d73cf8bc250e7a7032898423f24e240f1267a3c809a557daa3c17108d7585e"},
    { "Server8","03feea6d8ce239043baa9f3c9a1f15213dd4ac73df2bae5da71034f803dc005587"},
    { "Server9","02bfe32e6ce78c3795f0a2aa7e0dd47c51c674742f99ba9a0aec6d0d82d3d476b0"},
    { "Server10","037b46bdc3933fda6f47d14c8931fb8fffc4db85e0981ec4857fd56ee43300a29a"},
    { "Server11","03e6e375c5d36ebfbef9bd97c8cacb2d7a8f54bf89926ebde77fe7cc8cfb3c8e89"},
    { "Server12","032eff141519c1c4b111b1e51e9c4306c9dcfab9357fd27291daa5c6b3736c59d7"},
    { "Server13","03ae5eb57512a756031f7fd516d0f46e984632f73855fdf53fd4a08fbdef284af0"},
    { "Server14","03755d02c5aab06def772438d2a3b3d98d316091747e12b4e85b3a253cf757a730"},
    { "Server15","0260348f92cde87639ba9afc9f02b2c71ab52dc5faa00d175d0e331f71c05a521c"},
    { "Server16","02714f1922b72cce03633720402783de4962432adb3d3e38c95da754d43926e6f5"},
    { "Server17","028a2957cd7b428c3ba7ee2974e8dbbed0ee836721d00db6ea66db8f65c163a582"},
    { "Server18","033b24621b85b0593a7dae5867d112d8b80406369b8b07dde8be6ec6eb123de5aa"},
    { "Server19","0334556377815054bc39eb67186b02bd44ffe5acc9547516de0a639bcb947e2afb"},
    { "Server20","02564d75bed700f431eaabd087d1fbf59a566775ec146a65ad5137cd6ca0ff9c6d"},
    { "Server21","02345e3f2d281b0109cdcae6c70728027801060f231fc740b258c48aa43d75de0d"},
    { "Server22","0224991d534b187e9636d47253b2769fba299a0649c39615f2f31997052345c37c"},
    { "Server23","021a5deb5336e7d914f84616243c12e45268941449f7f0eb6e9d6772e0a605a9af"},
    { "Server24","036f5ae3b01b030acf6d6bc987feec5de5c340ff43887834af18fb0dee3961967c"},
    { "Server25","0377e432331fcca2e39324fdb815ab91171f26d7b838de04b39e4a5787966bf10c"},
    { "Server26","02ac499362e35c2d47b83c3c985abced6f3cb8b3f5c872a1b5806e2abba175a497"},
    { "Server27","0269611d0a1eedc67c323b2e17d332731e267c4c25716f1fa956ce027f7bae787f"},
    { "Server28","0203835a4c208a2a7ae5bafea393f04aaf6e863c93a3bd61f3a59a2383b1f7af31"},
    { "Server29","02ffc70831ca50e4d44f67462405fba12df7b01477e55c12ef6e696e4b1522ce3b"},
    { "Server30","022ab58e8ee541952f9f992890335097fa18479b5f66ad5f1f4a0e8f60959f3d19"},*/
};

#endif
