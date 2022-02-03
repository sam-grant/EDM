void BrRes_325()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__39 = new TH1D("__39","Number of sub-runs: 325",240,-11,11);
   __39->SetBinContent(112,1);
   __39->SetBinContent(113,1);
   __39->SetBinContent(114,2);
   __39->SetBinContent(115,12);
   __39->SetBinContent(116,26);
   __39->SetBinContent(117,63);
   __39->SetBinContent(118,89);
   __39->SetBinContent(119,129);
   __39->SetBinContent(120,159);
   __39->SetBinContent(121,176);
   __39->SetBinContent(122,127);
   __39->SetBinContent(123,101);
   __39->SetBinContent(124,64);
   __39->SetBinContent(125,30);
   __39->SetBinContent(126,16);
   __39->SetBinContent(127,1);
   __39->SetBinContent(128,2);
   __39->SetBinContent(129,1);
   __39->SetEntries(1000);
   __39->SetStats(0);
   __39->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __39->GetXaxis()->SetRange(80,161);
   __39->GetXaxis()->CenterTitle(true);
   __39->GetXaxis()->SetLabelFont(42);
   __39->GetXaxis()->SetTitleSize(0.04);
   __39->GetXaxis()->SetTitleOffset(1.1);
   __39->GetXaxis()->SetTitleFont(42);
   __39->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __39->GetYaxis()->CenterTitle(true);
   __39->GetYaxis()->SetNdivisions(4000510);
   __39->GetYaxis()->SetLabelFont(42);
   __39->GetYaxis()->SetTitleSize(0.04);
   __39->GetYaxis()->SetTitleOffset(1.1);
   __39->GetYaxis()->SetTitleFont(42);
   __39->GetZaxis()->SetLabelFont(42);
   __39->GetZaxis()->SetTitleOffset(1);
   __39->GetZaxis()->SetTitleFont(42);
   __39->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.00733
#pm0.007
");
   pt_LaTex = pt->AddText("0.221
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
