void BrRes_125()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__15 = new TH1D("__15","Number of sub-runs: 125",500,-10,10);
   __15->SetBinContent(229,1);
   __15->SetBinContent(230,1);
   __15->SetBinContent(231,1);
   __15->SetBinContent(232,3);
   __15->SetBinContent(233,1);
   __15->SetBinContent(234,5);
   __15->SetBinContent(235,2);
   __15->SetBinContent(236,11);
   __15->SetBinContent(237,12);
   __15->SetBinContent(238,10);
   __15->SetBinContent(239,14);
   __15->SetBinContent(240,18);
   __15->SetBinContent(241,21);
   __15->SetBinContent(242,22);
   __15->SetBinContent(243,40);
   __15->SetBinContent(244,31);
   __15->SetBinContent(245,36);
   __15->SetBinContent(246,45);
   __15->SetBinContent(247,46);
   __15->SetBinContent(248,50);
   __15->SetBinContent(249,57);
   __15->SetBinContent(250,60);
   __15->SetBinContent(251,66);
   __15->SetBinContent(252,54);
   __15->SetBinContent(253,50);
   __15->SetBinContent(254,36);
   __15->SetBinContent(255,52);
   __15->SetBinContent(256,40);
   __15->SetBinContent(257,37);
   __15->SetBinContent(258,35);
   __15->SetBinContent(259,23);
   __15->SetBinContent(260,26);
   __15->SetBinContent(261,24);
   __15->SetBinContent(262,14);
   __15->SetBinContent(263,17);
   __15->SetBinContent(264,12);
   __15->SetBinContent(265,7);
   __15->SetBinContent(266,4);
   __15->SetBinContent(267,2);
   __15->SetBinContent(268,4);
   __15->SetBinContent(269,2);
   __15->SetBinContent(270,4);
   __15->SetBinContent(271,2);
   __15->SetBinContent(275,2);
   __15->SetEntries(1000);
   __15->SetStats(0);
   __15->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __15->GetXaxis()->SetRange(163,338);
   __15->GetXaxis()->CenterTitle(true);
   __15->GetXaxis()->SetLabelFont(42);
   __15->GetXaxis()->SetTitleSize(0.04);
   __15->GetXaxis()->SetTitleOffset(1.1);
   __15->GetXaxis()->SetTitleFont(42);
   __15->GetYaxis()->SetTitle("Trials");
   __15->GetYaxis()->CenterTitle(true);
   __15->GetYaxis()->SetNdivisions(4000510);
   __15->GetYaxis()->SetLabelFont(42);
   __15->GetYaxis()->SetTitleSize(0.04);
   __15->GetYaxis()->SetTitleOffset(1.1);
   __15->GetYaxis()->SetTitleFont(42);
   __15->GetZaxis()->SetLabelFont(42);
   __15->GetZaxis()->SetTitleOffset(1);
   __15->GetZaxis()->SetTitleFont(42);
   __15->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.291
#pm0.006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
