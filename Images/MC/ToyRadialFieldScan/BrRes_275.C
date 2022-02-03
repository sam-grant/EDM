void BrRes_275()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__33 = new TH1D("__33","Number of sub-runs: 275",240,-11,11);
   __33->SetBinContent(112,2);
   __33->SetBinContent(113,3);
   __33->SetBinContent(114,5);
   __33->SetBinContent(115,13);
   __33->SetBinContent(116,32);
   __33->SetBinContent(117,62);
   __33->SetBinContent(118,110);
   __33->SetBinContent(119,123);
   __33->SetBinContent(120,165);
   __33->SetBinContent(121,142);
   __33->SetBinContent(122,129);
   __33->SetBinContent(123,85);
   __33->SetBinContent(124,65);
   __33->SetBinContent(125,34);
   __33->SetBinContent(126,20);
   __33->SetBinContent(127,8);
   __33->SetBinContent(129,2);
   __33->SetEntries(1000);
   __33->SetStats(0);
   __33->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __33->GetXaxis()->SetRange(77,164);
   __33->GetXaxis()->CenterTitle(true);
   __33->GetXaxis()->SetLabelFont(42);
   __33->GetXaxis()->SetTitleSize(0.04);
   __33->GetXaxis()->SetTitleOffset(1.1);
   __33->GetXaxis()->SetTitleFont(42);
   __33->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
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
   pt_LaTex = pt->AddText("-0.000917
#pm0.008
");
   pt_LaTex = pt->AddText("0.238
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
