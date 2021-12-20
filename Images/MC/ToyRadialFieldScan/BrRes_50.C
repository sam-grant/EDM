void BrRes_50()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__6 = new TH1D("__6","Number of sub-runs: 50",500,-10,10);
   __6->SetBinContent(219,1);
   __6->SetBinContent(221,3);
   __6->SetBinContent(222,1);
   __6->SetBinContent(224,4);
   __6->SetBinContent(225,6);
   __6->SetBinContent(226,6);
   __6->SetBinContent(227,3);
   __6->SetBinContent(228,8);
   __6->SetBinContent(229,6);
   __6->SetBinContent(230,4);
   __6->SetBinContent(231,6);
   __6->SetBinContent(232,11);
   __6->SetBinContent(233,8);
   __6->SetBinContent(234,12);
   __6->SetBinContent(235,19);
   __6->SetBinContent(236,17);
   __6->SetBinContent(237,12);
   __6->SetBinContent(238,19);
   __6->SetBinContent(239,17);
   __6->SetBinContent(240,25);
   __6->SetBinContent(241,26);
   __6->SetBinContent(242,28);
   __6->SetBinContent(243,37);
   __6->SetBinContent(244,29);
   __6->SetBinContent(245,31);
   __6->SetBinContent(246,32);
   __6->SetBinContent(247,25);
   __6->SetBinContent(248,40);
   __6->SetBinContent(249,36);
   __6->SetBinContent(250,29);
   __6->SetBinContent(251,41);
   __6->SetBinContent(252,34);
   __6->SetBinContent(253,34);
   __6->SetBinContent(254,37);
   __6->SetBinContent(255,31);
   __6->SetBinContent(256,32);
   __6->SetBinContent(257,30);
   __6->SetBinContent(258,28);
   __6->SetBinContent(259,23);
   __6->SetBinContent(260,29);
   __6->SetBinContent(261,20);
   __6->SetBinContent(262,22);
   __6->SetBinContent(263,19);
   __6->SetBinContent(264,12);
   __6->SetBinContent(265,16);
   __6->SetBinContent(266,7);
   __6->SetBinContent(267,9);
   __6->SetBinContent(268,16);
   __6->SetBinContent(269,13);
   __6->SetBinContent(270,8);
   __6->SetBinContent(271,11);
   __6->SetBinContent(272,6);
   __6->SetBinContent(273,6);
   __6->SetBinContent(274,1);
   __6->SetBinContent(275,2);
   __6->SetBinContent(276,2);
   __6->SetBinContent(277,2);
   __6->SetBinContent(278,2);
   __6->SetBinContent(279,2);
   __6->SetBinContent(280,1);
   __6->SetBinContent(281,1);
   __6->SetBinContent(282,1);
   __6->SetBinContent(288,1);
   __6->SetEntries(1000);
   __6->SetStats(0);
   __6->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __6->GetXaxis()->SetRange(115,385);
   __6->GetXaxis()->CenterTitle(true);
   __6->GetXaxis()->SetLabelFont(42);
   __6->GetXaxis()->SetTitleSize(0.04);
   __6->GetXaxis()->SetTitleOffset(1.1);
   __6->GetXaxis()->SetTitleFont(42);
   __6->GetYaxis()->SetTitle("Trials");
   __6->GetYaxis()->CenterTitle(true);
   __6->GetYaxis()->SetNdivisions(4000510);
   __6->GetYaxis()->SetLabelFont(42);
   __6->GetYaxis()->SetTitleSize(0.04);
   __6->GetYaxis()->SetTitleOffset(1.1);
   __6->GetYaxis()->SetTitleFont(42);
   __6->GetZaxis()->SetLabelFont(42);
   __6->GetZaxis()->SetTitleOffset(1);
   __6->GetZaxis()->SetTitleFont(42);
   __6->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.007
#pm0.01
");
   pt_LaTex = pt->AddText("0.45
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
