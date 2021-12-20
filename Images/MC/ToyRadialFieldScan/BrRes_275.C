void BrRes_275()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__33 = new TH1D("__33","Number of sub-runs: 275",500,-10,10);
   __33->SetBinContent(233,1);
   __33->SetBinContent(237,3);
   __33->SetBinContent(238,8);
   __33->SetBinContent(239,4);
   __33->SetBinContent(240,9);
   __33->SetBinContent(241,13);
   __33->SetBinContent(242,21);
   __33->SetBinContent(243,28);
   __33->SetBinContent(244,33);
   __33->SetBinContent(245,39);
   __33->SetBinContent(246,63);
   __33->SetBinContent(247,58);
   __33->SetBinContent(248,75);
   __33->SetBinContent(249,86);
   __33->SetBinContent(250,82);
   __33->SetBinContent(251,89);
   __33->SetBinContent(252,77);
   __33->SetBinContent(253,71);
   __33->SetBinContent(254,46);
   __33->SetBinContent(255,53);
   __33->SetBinContent(256,45);
   __33->SetBinContent(257,33);
   __33->SetBinContent(258,19);
   __33->SetBinContent(259,15);
   __33->SetBinContent(260,8);
   __33->SetBinContent(261,6);
   __33->SetBinContent(262,6);
   __33->SetBinContent(263,5);
   __33->SetBinContent(264,2);
   __33->SetBinContent(265,1);
   __33->SetBinContent(269,1);
   __33->SetEntries(1000);
   __33->SetStats(0);
   __33->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __33->GetXaxis()->SetRange(191,309);
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
   pt_LaTex = pt->AddText("-0.01
#pm0.006
");
   pt_LaTex = pt->AddText("0.196
#pm0.004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
