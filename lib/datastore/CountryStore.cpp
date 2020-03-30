/*********************************************************************
* Copyright (C) 2020 Miguel Revilla Rodríguez
*                    and the OJudge Platform project contributors
*
* This file is part of the OJudge Platform
*
* Read the LICENSE file for information on license terms
*********************************************************************/

#include "CountryStore.h"

using namespace Wt;

CountryStore::CountryStore() {

	countryCodes_.push_back("00");
	countryCodes_.push_back("ad");
	countryCodes_.push_back("ae");
	countryCodes_.push_back("af");
	countryCodes_.push_back("ag");
	countryCodes_.push_back("ai");
	countryCodes_.push_back("al");
	countryCodes_.push_back("am");
	countryCodes_.push_back("an");
	countryCodes_.push_back("ao");
	countryCodes_.push_back("aq");
	countryCodes_.push_back("ar");
	countryCodes_.push_back("as");
	countryCodes_.push_back("at");
	countryCodes_.push_back("au");
	countryCodes_.push_back("aw");
	countryCodes_.push_back("ax");
	countryCodes_.push_back("az");
	countryCodes_.push_back("ba");
	countryCodes_.push_back("bb");
	countryCodes_.push_back("bd");
	countryCodes_.push_back("be");
	countryCodes_.push_back("bf");
	countryCodes_.push_back("bg");
	countryCodes_.push_back("bh");
	countryCodes_.push_back("bi");
	countryCodes_.push_back("bj");
	countryCodes_.push_back("bl");
	countryCodes_.push_back("bm");
	countryCodes_.push_back("bn");
	countryCodes_.push_back("bo");
	countryCodes_.push_back("bq");
	countryCodes_.push_back("br");
	countryCodes_.push_back("bs");
	countryCodes_.push_back("bt");
	countryCodes_.push_back("bv");
	countryCodes_.push_back("bw");
	countryCodes_.push_back("by");
	countryCodes_.push_back("bz");
	countryCodes_.push_back("ca");
	countryCodes_.push_back("cc");
	countryCodes_.push_back("cd");
	countryCodes_.push_back("cf");
	countryCodes_.push_back("cg");
	countryCodes_.push_back("ch");
	countryCodes_.push_back("ci");
	countryCodes_.push_back("ck");
	countryCodes_.push_back("cl");
	countryCodes_.push_back("cm");
	countryCodes_.push_back("cn");
	countryCodes_.push_back("co");
	countryCodes_.push_back("cr");
	countryCodes_.push_back("cu");
	countryCodes_.push_back("cv");
	countryCodes_.push_back("cw");
	countryCodes_.push_back("cx");
	countryCodes_.push_back("cy");
	countryCodes_.push_back("cz");
	countryCodes_.push_back("de");
	countryCodes_.push_back("dj");
	countryCodes_.push_back("dk");
	countryCodes_.push_back("dm");
	countryCodes_.push_back("do");
	countryCodes_.push_back("dz");
	countryCodes_.push_back("ec");
	countryCodes_.push_back("ee");
	countryCodes_.push_back("eg");
	countryCodes_.push_back("eh");
	countryCodes_.push_back("er");
	countryCodes_.push_back("es");
	countryCodes_.push_back("et");
	countryCodes_.push_back("eu");
	countryCodes_.push_back("fi");
	countryCodes_.push_back("fj");
	countryCodes_.push_back("fk");
	countryCodes_.push_back("fm");
	countryCodes_.push_back("fo");
	countryCodes_.push_back("fr");
	countryCodes_.push_back("ga");
	countryCodes_.push_back("gb-eng");
	countryCodes_.push_back("gb-nir");
	countryCodes_.push_back("gb-sct");
	countryCodes_.push_back("gb");
	countryCodes_.push_back("gb-wls");
	countryCodes_.push_back("gd");
	countryCodes_.push_back("ge");
	countryCodes_.push_back("gf");
	countryCodes_.push_back("gg");
	countryCodes_.push_back("gh");
	countryCodes_.push_back("gi");
	countryCodes_.push_back("gl");
	countryCodes_.push_back("gm");
	countryCodes_.push_back("gn");
	countryCodes_.push_back("gp");
	countryCodes_.push_back("gq");
	countryCodes_.push_back("gr");
	countryCodes_.push_back("gs");
	countryCodes_.push_back("gt");
	countryCodes_.push_back("gu");
	countryCodes_.push_back("gw");
	countryCodes_.push_back("gy");
	countryCodes_.push_back("hk");
	countryCodes_.push_back("hm");
	countryCodes_.push_back("hn");
	countryCodes_.push_back("hr");
	countryCodes_.push_back("ht");
	countryCodes_.push_back("hu");
	countryCodes_.push_back("id");
	countryCodes_.push_back("ie");
	countryCodes_.push_back("il");
	countryCodes_.push_back("im");
	countryCodes_.push_back("in");
	countryCodes_.push_back("io");
	countryCodes_.push_back("iq");
	countryCodes_.push_back("ir");
	countryCodes_.push_back("is");
	countryCodes_.push_back("it");
	countryCodes_.push_back("je");
	countryCodes_.push_back("jm");
	countryCodes_.push_back("jo");
	countryCodes_.push_back("jp");
	countryCodes_.push_back("ke");
	countryCodes_.push_back("kg");
	countryCodes_.push_back("kh");
	countryCodes_.push_back("ki");
	countryCodes_.push_back("km");
	countryCodes_.push_back("kn");
	countryCodes_.push_back("kp");
	countryCodes_.push_back("kr");
	countryCodes_.push_back("kw");
	countryCodes_.push_back("ky");
	countryCodes_.push_back("kz");
	countryCodes_.push_back("la");
	countryCodes_.push_back("lb");
	countryCodes_.push_back("lc");
	countryCodes_.push_back("li");
	countryCodes_.push_back("lk");
	countryCodes_.push_back("lr");
	countryCodes_.push_back("ls");
	countryCodes_.push_back("lt");
	countryCodes_.push_back("lu");
	countryCodes_.push_back("lv");
	countryCodes_.push_back("ly");
	countryCodes_.push_back("ma");
	countryCodes_.push_back("mc");
	countryCodes_.push_back("md");
	countryCodes_.push_back("me");
	countryCodes_.push_back("mf");
	countryCodes_.push_back("mg");
	countryCodes_.push_back("mh");
	countryCodes_.push_back("mk");
	countryCodes_.push_back("ml");
	countryCodes_.push_back("mm");
	countryCodes_.push_back("mn");
	countryCodes_.push_back("mo");
	countryCodes_.push_back("mp");
	countryCodes_.push_back("mq");
	countryCodes_.push_back("mr");
	countryCodes_.push_back("ms");
	countryCodes_.push_back("mt");
	countryCodes_.push_back("mu");
	countryCodes_.push_back("mv");
	countryCodes_.push_back("mw");
	countryCodes_.push_back("mx");
	countryCodes_.push_back("my");
	countryCodes_.push_back("mz");
	countryCodes_.push_back("na");
	countryCodes_.push_back("nc");
	countryCodes_.push_back("ne");
	countryCodes_.push_back("nf");
	countryCodes_.push_back("ng");
	countryCodes_.push_back("ni");
	countryCodes_.push_back("nl");
	countryCodes_.push_back("no");
	countryCodes_.push_back("np");
	countryCodes_.push_back("nr");
	countryCodes_.push_back("nu");
	countryCodes_.push_back("nz");
	countryCodes_.push_back("om");
	countryCodes_.push_back("pa");
	countryCodes_.push_back("pe");
	countryCodes_.push_back("pf");
	countryCodes_.push_back("pg");
	countryCodes_.push_back("ph");
	countryCodes_.push_back("pk");
	countryCodes_.push_back("pl");
	countryCodes_.push_back("pm");
	countryCodes_.push_back("pn");
	countryCodes_.push_back("pr");
	countryCodes_.push_back("ps");
	countryCodes_.push_back("pt");
	countryCodes_.push_back("pw");
	countryCodes_.push_back("py");
	countryCodes_.push_back("qa");
	countryCodes_.push_back("re");
	countryCodes_.push_back("ro");
	countryCodes_.push_back("rs");
	countryCodes_.push_back("ru");
	countryCodes_.push_back("rw");
	countryCodes_.push_back("sa");
	countryCodes_.push_back("sb");
	countryCodes_.push_back("sc");
	countryCodes_.push_back("sd");
	countryCodes_.push_back("se");
	countryCodes_.push_back("sg");
	countryCodes_.push_back("sh");
	countryCodes_.push_back("si");
	countryCodes_.push_back("sj");
	countryCodes_.push_back("sk");
	countryCodes_.push_back("sl");
	countryCodes_.push_back("sm");
	countryCodes_.push_back("sn");
	countryCodes_.push_back("so");
	countryCodes_.push_back("sr");
	countryCodes_.push_back("ss");
	countryCodes_.push_back("st");
	countryCodes_.push_back("sv");
	countryCodes_.push_back("sx");
	countryCodes_.push_back("sy");
	countryCodes_.push_back("sz");
	countryCodes_.push_back("tc");
	countryCodes_.push_back("td");
	countryCodes_.push_back("tf");
	countryCodes_.push_back("tg");
	countryCodes_.push_back("th");
	countryCodes_.push_back("tj");
	countryCodes_.push_back("tk");
	countryCodes_.push_back("tl");
	countryCodes_.push_back("tm");
	countryCodes_.push_back("tn");
	countryCodes_.push_back("to");
	countryCodes_.push_back("tr");
	countryCodes_.push_back("tt");
	countryCodes_.push_back("tv");
	countryCodes_.push_back("tw");
	countryCodes_.push_back("tz");
	countryCodes_.push_back("ua");
	countryCodes_.push_back("ug");
	countryCodes_.push_back("um");
	countryCodes_.push_back("us");
	countryCodes_.push_back("uy");
	countryCodes_.push_back("uz");
	countryCodes_.push_back("va");
	countryCodes_.push_back("vc");
	countryCodes_.push_back("ve");
	countryCodes_.push_back("vg");
	countryCodes_.push_back("vi");
	countryCodes_.push_back("vn");
	countryCodes_.push_back("vu");
	countryCodes_.push_back("wf");
	countryCodes_.push_back("ws");
	countryCodes_.push_back("xk");
	countryCodes_.push_back("ye");
	countryCodes_.push_back("yt");
	countryCodes_.push_back("za");
	countryCodes_.push_back("zm");
	countryCodes_.push_back("zw");
}

const std::vector<std::string> CountryStore::countryCodes() {
	return countryCodes_;
}

const std::string CountryStore::getCountry(const int row) {
	return countryCodes_.at(row);
}

const std::string CountryStore::countryName(const std::string& countryCode) {

	if(countryCode == "00") {
		return std::string("None");
	}

	return WString::tr("country_name_" + countryCode).toUTF8();
}

const std::shared_ptr<WMemoryResource> CountryStore::countryFlag(const std::string& countryCode) {

	std::string flag;

	if(countryCode == "00") {
		flag = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><svg xmlns=\"http://www.w3.org/2000/svg\" width=\"1\" height=\"1\"/>";
	} else {
		flag = WString::tr("country_flag_" + countryCode).toUTF8();
	}

	return std::make_shared<WMemoryResource>("image/svg+xml",std::vector<unsigned char>(flag.begin(),flag.end()));
}
