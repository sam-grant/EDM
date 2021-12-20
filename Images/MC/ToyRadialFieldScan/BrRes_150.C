void BrRes_150()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__18 = new TH1D("__18","Number of sub-runs: 150",500,-10,10);
   __18->SetBinContent(230,2);
   __18->SetBinContent(231,1);
   __18->SetBinContent(234,4);
   __18->SetBinContent(235,5);
   __18->SetBinContent(236,3);
   __18->SetBinContent(237,11);
   __18->SetBinContent(238,5);
   __18->SetBinContent(239,13);
   __18->SetBinContent(240,15);
   __18->SetBinContent(241,20);
   __18->SetBinContent(242,25);
   __18->SetBinContent(243,36);
   __18->SetBinContent(244,37);
   __18->SetBinContent(245,46);
   __18->SetBinContent(246,42);
   __18->SetBinContent(247,48);
   __18->SetBinContent(248,66);
   __18->SetBinContent(249,66);
   __18->SetBinContent(250,52);
   __18->SetBinContent(251,54);
   __18->SetBinContent(252,49);
   __18->SetBinContent(253,47);
   __18->SetBinContent(254,44);
   __18->SetBinContent(255,54);
   __18->SetBinContent(256,53);
   __18->SetBinContent(257,43);
   __18->SetBinContent(258,35);
   __18->SetBinContent(259,29);
   __18->SetBinContent(260,23);
   __18->SetBinContent(261,14);
   __18->SetBinContent(262,17);
   __18->SetBinContent(263,9);
   __18->SetBinContent(264,11);
   __18->SetBinContent(265,5);
   __18->SetBinContent(266,6);
   __18->SetBinContent(267,1);
   __18->SetBinContent(268,1);
   __18->SetBinContent(269,5);
   __18->SetBinContent(270,1);
   __18->SetBinContent(271,1);
   __18->SetBinContent(273,1);
   __18->SetEntries(1000);
   __18->SetStats(0);
   __18->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __18->GetXaxis()->SetRange(170,332);
   __18->GetXaxis()->CenterTitle(true);
   __18->GetXaxis()->SetLabelFont(42);
   __18->GetXaxis()->SetTitleSize(0.04);
   __18->GetXaxis()->SetTitleOffset(1.1);
   __18->GetXaxis()->SetTitleFont(42);
   __18->GetYaxis()->SetTitle("Trials");
   __18->GetYaxis()->CenterTitle(true);
   __18->GetYaxis()->SetNdivisions(4000510);
   __18->GetYaxis()->SetLabelFont(42);
   __18->GetYaxis()->SetTitleSize(0.04);
   __18->GetYaxis()->SetTitleOffset(1.1);
   __18->GetYaxis()->SetTitleFont(42);
   __18->GetZaxis()->SetLabelFont(42);
   __18->GetZaxis()->SetTitleOffset(1);
   __18->GetZaxis()->SetTitleFont(42);
   __18->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.01
#pm0.009
");
   pt_LaTex = pt->AddText("0.27
#pm0.006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
