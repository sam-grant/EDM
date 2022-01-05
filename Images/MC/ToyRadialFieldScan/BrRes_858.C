void BrRes_858()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__39 = new TH1D("__39","Number of sub-runs: 858",240,-11,11);
   __39->SetBinContent(120,1000);
   __39->SetEntries(1000);
   __39->SetStats(0);
   __39->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __39->GetXaxis()->SetRange(120,120);
   __39->GetXaxis()->CenterTitle(true);
   __39->GetXaxis()->SetLabelFont(42);
   __39->GetXaxis()->SetTitleSize(0.04);
   __39->GetXaxis()->SetTitleOffset(1.1);
   __39->GetXaxis()->SetTitleFont(42);
   __39->GetYaxis()->SetTitle("Trials / 0.091667 ppm");
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
   pt_LaTex = pt->AddText("-0.0458
#pm0
");
   pt_LaTex = pt->AddText("0
#pm0
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
