void BrRes_225()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__27 = new TH1D("__27","Number of sub-runs: 225",240,-11,11);
   __27->SetBinContent(110,1);
   __27->SetBinContent(111,2);
   __27->SetBinContent(112,1);
   __27->SetBinContent(113,4);
   __27->SetBinContent(114,9);
   __27->SetBinContent(115,25);
   __27->SetBinContent(116,50);
   __27->SetBinContent(117,56);
   __27->SetBinContent(118,96);
   __27->SetBinContent(119,123);
   __27->SetBinContent(120,140);
   __27->SetBinContent(121,133);
   __27->SetBinContent(122,104);
   __27->SetBinContent(123,94);
   __27->SetBinContent(124,78);
   __27->SetBinContent(125,37);
   __27->SetBinContent(126,22);
   __27->SetBinContent(127,19);
   __27->SetBinContent(128,4);
   __27->SetBinContent(129,2);
   __27->SetEntries(1000);
   __27->SetStats(0);
   __27->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __27->GetXaxis()->SetRange(71,171);
   __27->GetXaxis()->CenterTitle(true);
   __27->GetXaxis()->SetLabelFont(42);
   __27->GetXaxis()->SetTitleSize(0.04);
   __27->GetXaxis()->SetTitleOffset(1.1);
   __27->GetXaxis()->SetTitleFont(42);
   __27->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
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
   pt_LaTex = pt->AddText("0.000825
#pm0.009
");
   pt_LaTex = pt->AddText("0.271
#pm0.006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
