void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",2000,0,1);
   __20->SetBinContent(475,2);
   __20->SetBinContent(476,2);
   __20->SetBinContent(477,6);
   __20->SetBinContent(478,4);
   __20->SetBinContent(479,19);
   __20->SetBinContent(480,26);
   __20->SetBinContent(481,34);
   __20->SetBinContent(482,68);
   __20->SetBinContent(483,77);
   __20->SetBinContent(484,95);
   __20->SetBinContent(485,93);
   __20->SetBinContent(486,117);
   __20->SetBinContent(487,97);
   __20->SetBinContent(488,84);
   __20->SetBinContent(489,88);
   __20->SetBinContent(490,70);
   __20->SetBinContent(491,40);
   __20->SetBinContent(492,31);
   __20->SetBinContent(493,18);
   __20->SetBinContent(494,14);
   __20->SetBinContent(495,9);
   __20->SetBinContent(496,5);
   __20->SetBinContent(497,1);
   __20->SetEntries(1000);
   __20->SetStats(0);
   __20->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __20->GetXaxis()->SetRange(442,530);
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Trials");
   __20->GetYaxis()->CenterTitle(true);
   __20->GetYaxis()->SetNdivisions(4000510);
   __20->GetYaxis()->SetLabelFont(42);
   __20->GetYaxis()->SetTitleSize(0.04);
   __20->GetYaxis()->SetTitleOffset(1.1);
   __20->GetYaxis()->SetTitleFont(42);
   __20->GetZaxis()->SetLabelFont(42);
   __20->GetZaxis()->SetTitleOffset(1);
   __20->GetZaxis()->SetTitleFont(42);
   __20->Draw("HIST");
   
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
#pm6e-05
");
   pt_LaTex = pt->AddText("0.00185
#pm4e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
