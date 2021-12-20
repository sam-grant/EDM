void BrRes_225()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__27 = new TH1D("__27","Number of sub-runs: 225",500,-10,10);
   __27->SetBinContent(231,1);
   __27->SetBinContent(234,1);
   __27->SetBinContent(235,1);
   __27->SetBinContent(236,3);
   __27->SetBinContent(237,2);
   __27->SetBinContent(238,7);
   __27->SetBinContent(239,7);
   __27->SetBinContent(240,4);
   __27->SetBinContent(241,10);
   __27->SetBinContent(242,23);
   __27->SetBinContent(243,29);
   __27->SetBinContent(244,38);
   __27->SetBinContent(245,46);
   __27->SetBinContent(246,57);
   __27->SetBinContent(247,72);
   __27->SetBinContent(248,66);
   __27->SetBinContent(249,77);
   __27->SetBinContent(250,75);
   __27->SetBinContent(251,62);
   __27->SetBinContent(252,67);
   __27->SetBinContent(253,76);
   __27->SetBinContent(254,68);
   __27->SetBinContent(255,53);
   __27->SetBinContent(256,38);
   __27->SetBinContent(257,37);
   __27->SetBinContent(258,18);
   __27->SetBinContent(259,27);
   __27->SetBinContent(260,15);
   __27->SetBinContent(261,4);
   __27->SetBinContent(262,6);
   __27->SetBinContent(263,5);
   __27->SetBinContent(264,3);
   __27->SetBinContent(265,1);
   __27->SetBinContent(267,1);
   __27->SetEntries(1000);
   __27->SetStats(0);
   __27->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __27->GetXaxis()->SetRange(188,312);
   __27->GetXaxis()->CenterTitle(true);
   __27->GetXaxis()->SetLabelFont(42);
   __27->GetXaxis()->SetTitleSize(0.04);
   __27->GetXaxis()->SetTitleOffset(1.1);
   __27->GetXaxis()->SetTitleFont(42);
   __27->GetYaxis()->SetTitle("Trials");
   __27->GetYaxis()->CenterTitle(true);
   __27->GetYaxis()->SetNdivisions(4000510);
   __27->GetYaxis()->SetLabelFont(42);
   __27->GetYaxis()->SetTitleSize(0.04);
   __27->GetYaxis()->SetTitleOffset(1.1);
   __27->GetYaxis()->SetTitleFont(42);
   __27->GetZaxis()->SetLabelFont(42);
   __27->GetZaxis()->SetTitleOffset(1);
   __27->GetZaxis()->SetTitleFont(42);
   __27->Draw("HIST");
   
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
#pm0.007
");
   pt_LaTex = pt->AddText("0.207
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
