void BrErr_198()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:36:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 198",240,0.4,1.6);
   __8->SetBinContent(28,3);
   __8->SetBinContent(29,11);
   __8->SetBinContent(30,20);
   __8->SetBinContent(31,82);
   __8->SetBinContent(32,115);
   __8->SetBinContent(33,139);
   __8->SetBinContent(34,170);
   __8->SetBinContent(35,155);
   __8->SetBinContent(36,139);
   __8->SetBinContent(37,77);
   __8->SetBinContent(38,42);
   __8->SetBinContent(39,29);
   __8->SetBinContent(40,10);
   __8->SetBinContent(41,6);
   __8->SetBinContent(42,1);
   __8->SetBinContent(44,1);
   __8->SetEntries(1000);
   __8->SetStats(0);
   __8->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __8->GetXaxis()->SetRange(0,74);
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials / 0.005000 ppm");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.569
#pm0.0004
");
   pt_LaTex = pt->AddText("0.0118
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
