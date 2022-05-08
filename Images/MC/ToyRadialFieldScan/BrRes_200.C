void BrRes_200()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__24 = new TH1D("__24","Number of sub-runs: 200",240,-11,11);
   __24->SetBinContent(109,1);
   __24->SetBinContent(111,1);
   __24->SetBinContent(112,1);
   __24->SetBinContent(113,9);
   __24->SetBinContent(114,11);
   __24->SetBinContent(115,20);
   __24->SetBinContent(116,43);
   __24->SetBinContent(117,81);
   __24->SetBinContent(118,93);
   __24->SetBinContent(119,109);
   __24->SetBinContent(120,114);
   __24->SetBinContent(121,130);
   __24->SetBinContent(122,123);
   __24->SetBinContent(123,111);
   __24->SetBinContent(124,68);
   __24->SetBinContent(125,41);
   __24->SetBinContent(126,22);
   __24->SetBinContent(127,12);
   __24->SetBinContent(128,6);
   __24->SetBinContent(129,3);
   __24->SetBinContent(130,1);
   __24->SetEntries(1000);
   __24->SetStats(0);
   __24->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __24->GetXaxis()->SetRange(70,171);
   __24->GetXaxis()->CenterTitle(true);
   __24->GetXaxis()->SetLabelFont(42);
   __24->GetXaxis()->SetTitleSize(0.04);
   __24->GetXaxis()->SetTitleOffset(1.1);
   __24->GetXaxis()->SetTitleFont(42);
   __24->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __24->GetYaxis()->CenterTitle(true);
   __24->GetYaxis()->SetNdivisions(4000510);
   __24->GetYaxis()->SetLabelFont(42);
   __24->GetYaxis()->SetTitleSize(0.04);
   __24->GetYaxis()->SetTitleOffset(1.1);
   __24->GetYaxis()->SetTitleFont(42);
   __24->GetZaxis()->SetLabelFont(42);
   __24->GetZaxis()->SetTitleOffset(1);
   __24->GetZaxis()->SetTitleFont(42);
   __24->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.00183
#pm0.009
");
   pt_LaTex = pt->AddText("0.276
#pm0.006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
