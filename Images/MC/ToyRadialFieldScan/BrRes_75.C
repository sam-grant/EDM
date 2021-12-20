void BrRes_75()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__9 = new TH1D("__9","Number of sub-runs: 75",500,-10,10);
   __9->SetBinContent(223,1);
   __9->SetBinContent(224,1);
   __9->SetBinContent(225,4);
   __9->SetBinContent(226,1);
   __9->SetBinContent(227,1);
   __9->SetBinContent(228,1);
   __9->SetBinContent(229,1);
   __9->SetBinContent(230,6);
   __9->SetBinContent(231,6);
   __9->SetBinContent(232,4);
   __9->SetBinContent(233,5);
   __9->SetBinContent(234,4);
   __9->SetBinContent(235,20);
   __9->SetBinContent(236,12);
   __9->SetBinContent(237,13);
   __9->SetBinContent(238,19);
   __9->SetBinContent(239,18);
   __9->SetBinContent(240,18);
   __9->SetBinContent(241,36);
   __9->SetBinContent(242,26);
   __9->SetBinContent(243,33);
   __9->SetBinContent(244,24);
   __9->SetBinContent(245,33);
   __9->SetBinContent(246,38);
   __9->SetBinContent(247,40);
   __9->SetBinContent(248,41);
   __9->SetBinContent(249,48);
   __9->SetBinContent(250,49);
   __9->SetBinContent(251,53);
   __9->SetBinContent(252,43);
   __9->SetBinContent(253,32);
   __9->SetBinContent(254,44);
   __9->SetBinContent(255,36);
   __9->SetBinContent(256,35);
   __9->SetBinContent(257,33);
   __9->SetBinContent(258,30);
   __9->SetBinContent(259,23);
   __9->SetBinContent(260,34);
   __9->SetBinContent(261,18);
   __9->SetBinContent(262,25);
   __9->SetBinContent(263,22);
   __9->SetBinContent(264,18);
   __9->SetBinContent(265,9);
   __9->SetBinContent(266,5);
   __9->SetBinContent(267,5);
   __9->SetBinContent(268,3);
   __9->SetBinContent(269,3);
   __9->SetBinContent(270,9);
   __9->SetBinContent(271,4);
   __9->SetBinContent(272,3);
   __9->SetBinContent(273,2);
   __9->SetBinContent(274,2);
   __9->SetBinContent(275,2);
   __9->SetBinContent(277,1);
   __9->SetBinContent(278,1);
   __9->SetBinContent(280,1);
   __9->SetBinContent(282,1);
   __9->SetEntries(1000);
   __9->SetStats(0);
   __9->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __9->GetXaxis()->SetRange(140,361);
   __9->GetXaxis()->CenterTitle(true);
   __9->GetXaxis()->SetLabelFont(42);
   __9->GetXaxis()->SetTitleSize(0.04);
   __9->GetXaxis()->SetTitleOffset(1.1);
   __9->GetXaxis()->SetTitleFont(42);
   __9->GetYaxis()->SetTitle("Trials");
   __9->GetYaxis()->CenterTitle(true);
   __9->GetYaxis()->SetNdivisions(4000510);
   __9->GetYaxis()->SetLabelFont(42);
   __9->GetYaxis()->SetTitleSize(0.04);
   __9->GetYaxis()->SetTitleOffset(1.1);
   __9->GetYaxis()->SetTitleFont(42);
   __9->GetZaxis()->SetLabelFont(42);
   __9->GetZaxis()->SetTitleOffset(1);
   __9->GetZaxis()->SetTitleFont(42);
   __9->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.002
#pm0.01
");
   pt_LaTex = pt->AddText("0.368
#pm0.008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
