void BrRes_300()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__36 = new TH1D("__36","Number of sub-runs: 300",500,-10,10);
   __36->SetBinContent(234,1);
   __36->SetBinContent(238,3);
   __36->SetBinContent(239,6);
   __36->SetBinContent(240,3);
   __36->SetBinContent(241,13);
   __36->SetBinContent(242,20);
   __36->SetBinContent(243,26);
   __36->SetBinContent(244,31);
   __36->SetBinContent(245,48);
   __36->SetBinContent(246,55);
   __36->SetBinContent(247,72);
   __36->SetBinContent(248,65);
   __36->SetBinContent(249,81);
   __36->SetBinContent(250,84);
   __36->SetBinContent(251,82);
   __36->SetBinContent(252,73);
   __36->SetBinContent(253,76);
   __36->SetBinContent(254,56);
   __36->SetBinContent(255,57);
   __36->SetBinContent(256,44);
   __36->SetBinContent(257,38);
   __36->SetBinContent(258,16);
   __36->SetBinContent(259,23);
   __36->SetBinContent(260,9);
   __36->SetBinContent(261,9);
   __36->SetBinContent(262,3);
   __36->SetBinContent(263,3);
   __36->SetBinContent(264,2);
   __36->SetBinContent(265,1);
   __36->SetEntries(1000);
   __36->SetStats(0);
   __36->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __36->GetXaxis()->SetRange(194,307);
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
   pt_LaTex = pt->AddText("-0.002
#pm0.006
");
   pt_LaTex = pt->AddText("0.19
#pm0.004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
