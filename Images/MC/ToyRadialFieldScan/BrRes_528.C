void BrRes_528()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__24 = new TH1D("__24","Number of sub-runs: 528",240,-11,11);
   __24->SetBinContent(120,1000);
   __24->SetEntries(1000);
   __24->SetStats(0);
   __24->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __24->GetXaxis()->SetRange(120,120);
   __24->GetXaxis()->CenterTitle(true);
   __24->GetXaxis()->SetLabelFont(42);
   __24->GetXaxis()->SetTitleSize(0.04);
   __24->GetXaxis()->SetTitleOffset(1.1);
   __24->GetXaxis()->SetTitleFont(42);
   __24->GetYaxis()->SetTitle("Trials / 0.091667 ppm");
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
