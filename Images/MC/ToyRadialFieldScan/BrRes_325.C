void BrRes_325()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:07:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__39 = new TH1D("__39","Number of sub-runs: 325",500,-10,10);
   __39->SetBinContent(214,1);
   __39->SetBinContent(217,1);
   __39->SetBinContent(219,1);
   __39->SetBinContent(220,2);
   __39->SetBinContent(222,1);
   __39->SetBinContent(223,3);
   __39->SetBinContent(224,1);
   __39->SetBinContent(225,1);
   __39->SetBinContent(226,4);
   __39->SetBinContent(227,2);
   __39->SetBinContent(228,4);
   __39->SetBinContent(229,8);
   __39->SetBinContent(230,10);
   __39->SetBinContent(231,6);
   __39->SetBinContent(232,11);
   __39->SetBinContent(233,9);
   __39->SetBinContent(234,10);
   __39->SetBinContent(235,14);
   __39->SetBinContent(236,20);
   __39->SetBinContent(237,20);
   __39->SetBinContent(238,18);
   __39->SetBinContent(239,17);
   __39->SetBinContent(240,21);
   __39->SetBinContent(241,21);
   __39->SetBinContent(242,21);
   __39->SetBinContent(243,31);
   __39->SetBinContent(244,34);
   __39->SetBinContent(245,25);
   __39->SetBinContent(246,36);
   __39->SetBinContent(247,31);
   __39->SetBinContent(248,41);
   __39->SetBinContent(249,40);
   __39->SetBinContent(250,40);
   __39->SetBinContent(251,29);
   __39->SetBinContent(252,39);
   __39->SetBinContent(253,43);
   __39->SetBinContent(254,31);
   __39->SetBinContent(255,26);
   __39->SetBinContent(256,31);
   __39->SetBinContent(257,28);
   __39->SetBinContent(258,24);
   __39->SetBinContent(259,31);
   __39->SetBinContent(260,17);
   __39->SetBinContent(261,21);
   __39->SetBinContent(262,31);
   __39->SetBinContent(263,18);
   __39->SetBinContent(264,16);
   __39->SetBinContent(265,14);
   __39->SetBinContent(266,21);
   __39->SetBinContent(267,12);
   __39->SetBinContent(268,6);
   __39->SetBinContent(269,8);
   __39->SetBinContent(270,6);
   __39->SetBinContent(271,5);
   __39->SetBinContent(272,7);
   __39->SetBinContent(273,2);
   __39->SetBinContent(274,4);
   __39->SetBinContent(275,1);
   __39->SetBinContent(276,7);
   __39->SetBinContent(277,2);
   __39->SetBinContent(278,2);
   __39->SetBinContent(279,4);
   __39->SetBinContent(280,4);
   __39->SetBinContent(281,1);
   __39->SetBinContent(282,2);
   __39->SetBinContent(284,1);
   __39->SetBinContent(289,1);
   __39->SetEntries(1000);
   __39->SetStats(0);
   __39->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __39->GetXaxis()->SetRange(114,387);
   __39->GetXaxis()->CenterTitle(true);
   __39->GetXaxis()->SetLabelFont(42);
   __39->GetXaxis()->SetTitleSize(0.04);
   __39->GetXaxis()->SetTitleOffset(1.1);
   __39->GetXaxis()->SetTitleFont(42);
   __39->GetYaxis()->SetTitle("Trials");
   __39->GetYaxis()->CenterTitle(true);
   __39->GetYaxis()->SetNdivisions(4000510);
   __39->GetYaxis()->SetLabelFont(42);
   __39->GetYaxis()->SetTitleSize(0.04);
   __39->GetYaxis()->SetTitleOffset(1.1);
   __39->GetYaxis()->SetTitleFont(42);
   __39->GetZaxis()->SetLabelFont(42);
   __39->GetZaxis()->SetTitleOffset(1);
   __39->GetZaxis()->SetTitleFont(42);
   __39->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("0.006
#pm0.01
");
   pt_LaTex = pt->AddText("0.456
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
