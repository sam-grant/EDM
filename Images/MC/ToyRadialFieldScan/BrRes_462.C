void BrRes_462()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__21 = new TH1D("__21","Number of sub-runs: 462",240,-11,11);
   __21->SetBinContent(120,1000);
   __21->SetEntries(1000);
   __21->SetStats(0);
   __21->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __21->GetXaxis()->SetRange(120,120);
   __21->GetXaxis()->CenterTitle(true);
   __21->GetXaxis()->SetLabelFont(42);
   __21->GetXaxis()->SetTitleSize(0.04);
   __21->GetXaxis()->SetTitleOffset(1.1);
   __21->GetXaxis()->SetTitleFont(42);
   __21->GetYaxis()->SetTitle("Trials / 0.091667 ppm");
   __21->GetYaxis()->CenterTitle(true);
   __21->GetYaxis()->SetNdivisions(4000510);
   __21->GetYaxis()->SetLabelFont(42);
   __21->GetYaxis()->SetTitleSize(0.04);
   __21->GetYaxis()->SetTitleOffset(1.1);
   __21->GetYaxis()->SetTitleFont(42);
   __21->GetZaxis()->SetLabelFont(42);
   __21->GetZaxis()->SetTitleOffset(1);
   __21->GetZaxis()->SetTitleFont(42);
   __21->Draw("HIST");
   
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
