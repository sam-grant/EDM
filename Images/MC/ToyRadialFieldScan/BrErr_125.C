void BrErr_125()
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
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",2000,0,1);
   __14->SetBinContent(562,1);
   __14->SetBinContent(563,2);
   __14->SetBinContent(564,7);
   __14->SetBinContent(565,9);
   __14->SetBinContent(566,14);
   __14->SetBinContent(567,10);
   __14->SetBinContent(568,20);
   __14->SetBinContent(569,26);
   __14->SetBinContent(570,32);
   __14->SetBinContent(571,53);
   __14->SetBinContent(572,48);
   __14->SetBinContent(573,46);
   __14->SetBinContent(574,65);
   __14->SetBinContent(575,71);
   __14->SetBinContent(576,71);
   __14->SetBinContent(577,83);
   __14->SetBinContent(578,66);
   __14->SetBinContent(579,62);
   __14->SetBinContent(580,81);
   __14->SetBinContent(581,63);
   __14->SetBinContent(582,43);
   __14->SetBinContent(583,34);
   __14->SetBinContent(584,29);
   __14->SetBinContent(585,22);
   __14->SetBinContent(586,12);
   __14->SetBinContent(587,14);
   __14->SetBinContent(588,6);
   __14->SetBinContent(589,4);
   __14->SetBinContent(590,5);
   __14->SetBinContent(593,1);
   __14->SetEntries(1000);
   __14->SetStats(0);
   __14->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __14->GetXaxis()->SetRange(514,639);
   __14->GetXaxis()->CenterTitle(true);
   __14->GetXaxis()->SetLabelFont(42);
   __14->GetXaxis()->SetTitleSize(0.04);
   __14->GetXaxis()->SetTitleOffset(1.1);
   __14->GetXaxis()->SetTitleFont(42);
   __14->GetYaxis()->SetTitle("Trials");
   __14->GetYaxis()->CenterTitle(true);
   __14->GetYaxis()->SetNdivisions(4000510);
   __14->GetYaxis()->SetLabelFont(42);
   __14->GetYaxis()->SetTitleSize(0.04);
   __14->GetYaxis()->SetTitleOffset(1.1);
   __14->GetYaxis()->SetTitleFont(42);
   __14->GetZaxis()->SetLabelFont(42);
   __14->GetZaxis()->SetTitleOffset(1);
   __14->GetZaxis()->SetTitleFont(42);
   __14->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3
#pm8e-05
");
   pt_LaTex = pt->AddText("0.00261
#pm6e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
