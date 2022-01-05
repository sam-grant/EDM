void BrRes_300()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:07:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__36 = new TH1D("__36","Number of sub-runs: 300",500,-10,10);
   __36->SetBinContent(217,1);
   __36->SetBinContent(219,1);
   __36->SetBinContent(220,1);
   __36->SetBinContent(221,1);
   __36->SetBinContent(222,1);
   __36->SetBinContent(223,3);
   __36->SetBinContent(224,4);
   __36->SetBinContent(225,7);
   __36->SetBinContent(226,3);
   __36->SetBinContent(227,2);
   __36->SetBinContent(228,6);
   __36->SetBinContent(229,12);
   __36->SetBinContent(230,7);
   __36->SetBinContent(231,7);
   __36->SetBinContent(232,5);
   __36->SetBinContent(233,9);
   __36->SetBinContent(234,10);
   __36->SetBinContent(235,13);
   __36->SetBinContent(236,20);
   __36->SetBinContent(237,20);
   __36->SetBinContent(238,21);
   __36->SetBinContent(239,20);
   __36->SetBinContent(240,25);
   __36->SetBinContent(241,28);
   __36->SetBinContent(242,24);
   __36->SetBinContent(243,24);
   __36->SetBinContent(244,33);
   __36->SetBinContent(245,23);
   __36->SetBinContent(246,27);
   __36->SetBinContent(247,29);
   __36->SetBinContent(248,38);
   __36->SetBinContent(249,34);
   __36->SetBinContent(250,35);
   __36->SetBinContent(251,38);
   __36->SetBinContent(252,36);
   __36->SetBinContent(253,32);
   __36->SetBinContent(254,39);
   __36->SetBinContent(255,29);
   __36->SetBinContent(256,39);
   __36->SetBinContent(257,28);
   __36->SetBinContent(258,26);
   __36->SetBinContent(259,29);
   __36->SetBinContent(260,22);
   __36->SetBinContent(261,20);
   __36->SetBinContent(262,18);
   __36->SetBinContent(263,16);
   __36->SetBinContent(264,17);
   __36->SetBinContent(265,16);
   __36->SetBinContent(266,12);
   __36->SetBinContent(267,14);
   __36->SetBinContent(268,12);
   __36->SetBinContent(269,15);
   __36->SetBinContent(270,10);
   __36->SetBinContent(271,2);
   __36->SetBinContent(272,6);
   __36->SetBinContent(273,5);
   __36->SetBinContent(274,7);
   __36->SetBinContent(275,2);
   __36->SetBinContent(276,4);
   __36->SetBinContent(277,3);
   __36->SetBinContent(278,1);
   __36->SetBinContent(280,1);
   __36->SetBinContent(282,2);
   __36->SetBinContent(283,1);
   __36->SetBinContent(284,1);
   __36->SetBinContent(285,2);
   __36->SetBinContent(286,1);
   __36->SetEntries(1000);
   __36->SetStats(0);
   __36->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __36->GetXaxis()->SetRange(111,390);
   __36->GetXaxis()->CenterTitle(true);
   __36->GetXaxis()->SetLabelFont(42);
   __36->GetXaxis()->SetTitleSize(0.04);
   __36->GetXaxis()->SetTitleOffset(1.1);
   __36->GetXaxis()->SetTitleFont(42);
   __36->GetYaxis()->SetTitle("Trials");
   __36->GetYaxis()->CenterTitle(true);
   __36->GetYaxis()->SetNdivisions(4000510);
   __36->GetYaxis()->SetLabelFont(42);
   __36->GetYaxis()->SetTitleSize(0.04);
   __36->GetYaxis()->SetTitleOffset(1.1);
   __36->GetYaxis()->SetTitleFont(42);
   __36->GetZaxis()->SetLabelFont(42);
   __36->GetZaxis()->SetTitleOffset(1);
   __36->GetZaxis()->SetTitleFont(42);
   __36->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0004
#pm0.01
");
   pt_LaTex = pt->AddText("0.464
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
