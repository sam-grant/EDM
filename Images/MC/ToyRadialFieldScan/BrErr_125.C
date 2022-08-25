void BrErr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 125",240,0.4,1.6);
   __14->SetBinContent(52,1);
   __14->SetBinContent(54,1);
   __14->SetBinContent(55,4);
   __14->SetBinContent(56,7);
   __14->SetBinContent(57,11);
   __14->SetBinContent(58,37);
   __14->SetBinContent(59,48);
   __14->SetBinContent(60,79);
   __14->SetBinContent(61,74);
   __14->SetBinContent(62,89);
   __14->SetBinContent(63,94);
   __14->SetBinContent(64,111);
   __14->SetBinContent(65,112);
   __14->SetBinContent(66,85);
   __14->SetBinContent(67,76);
   __14->SetBinContent(68,46);
   __14->SetBinContent(69,43);
   __14->SetBinContent(70,36);
   __14->SetBinContent(71,23);
   __14->SetBinContent(72,10);
   __14->SetBinContent(73,5);
   __14->SetBinContent(74,4);
   __14->SetBinContent(75,3);
   __14->SetBinContent(77,1);
   __14->SetEntries(1000);
   __14->SetStats(0);
   __14->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __14->GetXaxis()->SetRange(1,127);
   __14->GetXaxis()->CenterTitle(true);
   __14->GetXaxis()->SetLabelFont(42);
   __14->GetXaxis()->SetTitleSize(0.04);
   __14->GetXaxis()->SetTitleOffset(1.1);
   __14->GetXaxis()->SetTitleFont(42);
   __14->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
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
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("0.718
#pm0.0006
");
   pt_LaTex = pt->AddText("0.0186
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
