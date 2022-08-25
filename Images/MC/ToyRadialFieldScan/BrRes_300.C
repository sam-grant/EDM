void BrRes_300()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__36 = new TH1D("__36","Number of sub-runs: 300",240,-11,11);
   __36->SetBinContent(106,1);
   __36->SetBinContent(107,2);
   __36->SetBinContent(108,5);
   __36->SetBinContent(109,7);
   __36->SetBinContent(110,10);
   __36->SetBinContent(111,19);
   __36->SetBinContent(112,15);
   __36->SetBinContent(113,21);
   __36->SetBinContent(114,38);
   __36->SetBinContent(115,46);
   __36->SetBinContent(116,60);
   __36->SetBinContent(117,62);
   __36->SetBinContent(118,58);
   __36->SetBinContent(119,68);
   __36->SetBinContent(120,82);
   __36->SetBinContent(121,84);
   __36->SetBinContent(122,79);
   __36->SetBinContent(123,77);
   __36->SetBinContent(124,64);
   __36->SetBinContent(125,43);
   __36->SetBinContent(126,35);
   __36->SetBinContent(127,36);
   __36->SetBinContent(128,31);
   __36->SetBinContent(129,21);
   __36->SetBinContent(130,11);
   __36->SetBinContent(131,10);
   __36->SetBinContent(132,7);
   __36->SetBinContent(134,3);
   __36->SetBinContent(135,2);
   __36->SetBinContent(136,3);
   __36->SetEntries(1000);
   __36->SetStats(0);
   __36->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __36->GetXaxis()->SetRange(34,207);
   __36->GetXaxis()->CenterTitle(true);
   __36->GetXaxis()->SetLabelFont(42);
   __36->GetXaxis()->SetTitleSize(0.04);
   __36->GetXaxis()->SetTitleOffset(1.1);
   __36->GetXaxis()->SetTitleFont(42);
   __36->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
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
   pt_LaTex = pt->AddText("-0.00147
#pm0.01
");
   pt_LaTex = pt->AddText("0.465
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
