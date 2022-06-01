void BrRes_300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__36 = new TH1D("__36","Number of sub-runs: 300",240,-11,11);
   __36->SetBinContent(111,1);
   __36->SetBinContent(113,1);
   __36->SetBinContent(114,7);
   __36->SetBinContent(115,15);
   __36->SetBinContent(116,26);
   __36->SetBinContent(117,48);
   __36->SetBinContent(118,107);
   __36->SetBinContent(119,119);
   __36->SetBinContent(120,160);
   __36->SetBinContent(121,153);
   __36->SetBinContent(122,140);
   __36->SetBinContent(123,102);
   __36->SetBinContent(124,72);
   __36->SetBinContent(125,24);
   __36->SetBinContent(126,16);
   __36->SetBinContent(127,4);
   __36->SetBinContent(128,3);
   __36->SetBinContent(129,1);
   __36->SetBinContent(130,1);
   __36->SetEntries(1000);
   __36->SetStats(0);
   __36->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __36->GetXaxis()->SetRange(78,163);
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
   pt_LaTex = pt->AddText("0.00917
#pm0.007
");
   pt_LaTex = pt->AddText("0.23
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
