void BrErr_225()
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
   
   TH1D *__26 = new TH1D("__26","Number of sub-runs: 225",2000,0,1);
   __26->SetBinContent(419,2);
   __26->SetBinContent(420,2);
   __26->SetBinContent(421,5);
   __26->SetBinContent(422,12);
   __26->SetBinContent(423,19);
   __26->SetBinContent(424,32);
   __26->SetBinContent(425,72);
   __26->SetBinContent(426,104);
   __26->SetBinContent(427,128);
   __26->SetBinContent(428,148);
   __26->SetBinContent(429,131);
   __26->SetBinContent(430,124);
   __26->SetBinContent(431,81);
   __26->SetBinContent(432,59);
   __26->SetBinContent(433,43);
   __26->SetBinContent(434,20);
   __26->SetBinContent(435,13);
   __26->SetBinContent(436,5);
   __26->SetEntries(1000);
   __26->SetStats(0);
   __26->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __26->GetXaxis()->SetRange(395,462);
   __26->GetXaxis()->CenterTitle(true);
   __26->GetXaxis()->SetLabelFont(42);
   __26->GetXaxis()->SetTitleSize(0.04);
   __26->GetXaxis()->SetTitleOffset(1.1);
   __26->GetXaxis()->SetTitleFont(42);
   __26->GetYaxis()->SetTitle("Trials");
   __26->GetYaxis()->CenterTitle(true);
   __26->GetYaxis()->SetNdivisions(4000510);
   __26->GetYaxis()->SetLabelFont(42);
   __26->GetYaxis()->SetTitleSize(0.04);
   __26->GetYaxis()->SetTitleOffset(1.1);
   __26->GetYaxis()->SetTitleFont(42);
   __26->GetZaxis()->SetLabelFont(42);
   __26->GetZaxis()->SetTitleOffset(1);
   __26->GetZaxis()->SetTitleFont(42);
   __26->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2
#pm4e-05
");
   pt_LaTex = pt->AddText("0.00142
#pm3e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
