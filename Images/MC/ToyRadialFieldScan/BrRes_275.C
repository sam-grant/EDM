void BrRes_275()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:07:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__33 = new TH1D("__33","Number of sub-runs: 275",500,-10,10);
   __33->SetBinContent(210,1);
   __33->SetBinContent(212,1);
   __33->SetBinContent(216,2);
   __33->SetBinContent(218,3);
   __33->SetBinContent(220,2);
   __33->SetBinContent(221,1);
   __33->SetBinContent(222,1);
   __33->SetBinContent(223,1);
   __33->SetBinContent(225,3);
   __33->SetBinContent(226,1);
   __33->SetBinContent(227,2);
   __33->SetBinContent(228,8);
   __33->SetBinContent(229,7);
   __33->SetBinContent(230,9);
   __33->SetBinContent(231,6);
   __33->SetBinContent(232,6);
   __33->SetBinContent(233,16);
   __33->SetBinContent(234,14);
   __33->SetBinContent(235,15);
   __33->SetBinContent(236,19);
   __33->SetBinContent(237,24);
   __33->SetBinContent(238,22);
   __33->SetBinContent(239,15);
   __33->SetBinContent(240,27);
   __33->SetBinContent(241,26);
   __33->SetBinContent(242,23);
   __33->SetBinContent(243,28);
   __33->SetBinContent(244,31);
   __33->SetBinContent(245,24);
   __33->SetBinContent(246,41);
   __33->SetBinContent(247,35);
   __33->SetBinContent(248,30);
   __33->SetBinContent(249,26);
   __33->SetBinContent(250,39);
   __33->SetBinContent(251,28);
   __33->SetBinContent(252,32);
   __33->SetBinContent(253,34);
   __33->SetBinContent(254,28);
   __33->SetBinContent(255,35);
   __33->SetBinContent(256,33);
   __33->SetBinContent(257,30);
   __33->SetBinContent(258,28);
   __33->SetBinContent(259,27);
   __33->SetBinContent(260,25);
   __33->SetBinContent(261,21);
   __33->SetBinContent(262,29);
   __33->SetBinContent(263,15);
   __33->SetBinContent(264,19);
   __33->SetBinContent(265,10);
   __33->SetBinContent(266,11);
   __33->SetBinContent(267,10);
   __33->SetBinContent(268,9);
   __33->SetBinContent(269,10);
   __33->SetBinContent(270,10);
   __33->SetBinContent(271,7);
   __33->SetBinContent(272,7);
   __33->SetBinContent(273,6);
   __33->SetBinContent(274,3);
   __33->SetBinContent(275,5);
   __33->SetBinContent(276,2);
   __33->SetBinContent(277,4);
   __33->SetBinContent(278,5);
   __33->SetBinContent(279,3);
   __33->SetBinContent(280,1);
   __33->SetBinContent(281,2);
   __33->SetBinContent(284,1);
   __33->SetBinContent(294,1);
   __33->SetEntries(1000);
   __33->SetStats(0);
   __33->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __33->GetXaxis()->SetRange(109,392);
   __33->GetXaxis()->CenterTitle(true);
   __33->GetXaxis()->SetLabelFont(42);
   __33->GetXaxis()->SetTitleSize(0.04);
   __33->GetXaxis()->SetTitleOffset(1.1);
   __33->GetXaxis()->SetTitleFont(42);
   __33->GetYaxis()->SetTitle("Trials");
   __33->GetYaxis()->CenterTitle(true);
   __33->GetYaxis()->SetNdivisions(4000510);
   __33->GetYaxis()->SetLabelFont(42);
   __33->GetYaxis()->SetTitleSize(0.04);
   __33->GetYaxis()->SetTitleOffset(1.1);
   __33->GetYaxis()->SetTitleFont(42);
   __33->GetZaxis()->SetLabelFont(42);
   __33->GetZaxis()->SetTitleOffset(1);
   __33->GetZaxis()->SetTitleFont(42);
   __33->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.006
#pm0.01
");
   pt_LaTex = pt->AddText("0.472
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
