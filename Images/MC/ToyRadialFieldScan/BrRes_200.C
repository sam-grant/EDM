void BrRes_200()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__24 = new TH1D("__24","Number of sub-runs: 200",500,-10,10);
   __24->SetBinContent(230,1);
   __24->SetBinContent(231,1);
   __24->SetBinContent(233,1);
   __24->SetBinContent(235,3);
   __24->SetBinContent(236,3);
   __24->SetBinContent(237,6);
   __24->SetBinContent(238,9);
   __24->SetBinContent(239,11);
   __24->SetBinContent(240,11);
   __24->SetBinContent(241,26);
   __24->SetBinContent(242,22);
   __24->SetBinContent(243,16);
   __24->SetBinContent(244,39);
   __24->SetBinContent(245,43);
   __24->SetBinContent(246,59);
   __24->SetBinContent(247,50);
   __24->SetBinContent(248,65);
   __24->SetBinContent(249,65);
   __24->SetBinContent(250,83);
   __24->SetBinContent(251,67);
   __24->SetBinContent(252,70);
   __24->SetBinContent(253,61);
   __24->SetBinContent(254,49);
   __24->SetBinContent(255,44);
   __24->SetBinContent(256,50);
   __24->SetBinContent(257,33);
   __24->SetBinContent(258,33);
   __24->SetBinContent(259,24);
   __24->SetBinContent(260,11);
   __24->SetBinContent(261,16);
   __24->SetBinContent(262,9);
   __24->SetBinContent(263,4);
   __24->SetBinContent(264,6);
   __24->SetBinContent(265,4);
   __24->SetBinContent(266,3);
   __24->SetBinContent(267,1);
   __24->SetBinContent(268,1);
   __24->SetEntries(1000);
   __24->SetStats(0);
   __24->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __24->GetXaxis()->SetRange(180,320);
   __24->GetXaxis()->CenterTitle(true);
   __24->GetXaxis()->SetLabelFont(42);
   __24->GetXaxis()->SetTitleSize(0.04);
   __24->GetXaxis()->SetTitleOffset(1.1);
   __24->GetXaxis()->SetTitleFont(42);
   __24->GetYaxis()->SetTitle("Trials");
   __24->GetYaxis()->CenterTitle(true);
   __24->GetYaxis()->SetNdivisions(4000510);
   __24->GetYaxis()->SetLabelFont(42);
   __24->GetYaxis()->SetTitleSize(0.04);
   __24->GetYaxis()->SetTitleOffset(1.1);
   __24->GetYaxis()->SetTitleFont(42);
   __24->GetZaxis()->SetLabelFont(42);
   __24->GetZaxis()->SetTitleOffset(1);
   __24->GetZaxis()->SetTitleFont(42);
   __24->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.005
#pm0.007
");
   pt_LaTex = pt->AddText("0.234
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
