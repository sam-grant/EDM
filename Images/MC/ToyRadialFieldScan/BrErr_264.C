void BrErr_264()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:36:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 264",240,0.4,1.6);
   __11->SetBinContent(14,5);
   __11->SetBinContent(15,18);
   __11->SetBinContent(16,56);
   __11->SetBinContent(17,127);
   __11->SetBinContent(18,203);
   __11->SetBinContent(19,242);
   __11->SetBinContent(20,185);
   __11->SetBinContent(21,96);
   __11->SetBinContent(22,43);
   __11->SetBinContent(23,19);
   __11->SetBinContent(24,5);
   __11->SetBinContent(25,1);
   __11->SetEntries(1000);
   __11->SetStats(0);
   __11->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __11->GetXaxis()->SetRange(0,48);
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials / 0.005000 ppm");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.492
#pm0.0003
");
   pt_LaTex = pt->AddText("0.00871
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
