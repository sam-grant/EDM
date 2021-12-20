void BrRes_325()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__39 = new TH1D("__39","Number of sub-runs: 325",500,-10,10);
   __39->SetBinContent(233,1);
   __39->SetBinContent(237,1);
   __39->SetBinContent(238,5);
   __39->SetBinContent(239,4);
   __39->SetBinContent(240,4);
   __39->SetBinContent(241,8);
   __39->SetBinContent(242,15);
   __39->SetBinContent(243,19);
   __39->SetBinContent(244,31);
   __39->SetBinContent(245,39);
   __39->SetBinContent(246,54);
   __39->SetBinContent(247,61);
   __39->SetBinContent(248,60);
   __39->SetBinContent(249,79);
   __39->SetBinContent(250,89);
   __39->SetBinContent(251,95);
   __39->SetBinContent(252,91);
   __39->SetBinContent(253,100);
   __39->SetBinContent(254,67);
   __39->SetBinContent(255,44);
   __39->SetBinContent(256,48);
   __39->SetBinContent(257,27);
   __39->SetBinContent(258,23);
   __39->SetBinContent(259,11);
   __39->SetBinContent(260,12);
   __39->SetBinContent(261,9);
   __39->SetBinContent(262,1);
   __39->SetBinContent(263,1);
   __39->SetBinContent(265,1);
   __39->SetEntries(1000);
   __39->SetStats(0);
   __39->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __39->GetXaxis()->SetRange(197,304);
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
   pt_LaTex = pt->AddText("0.004
#pm0.006
");
   pt_LaTex = pt->AddText("0.178
#pm0.004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
