void Br_462()
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
   
   TH1D *__19 = new TH1D("__19","Number of sub-runs: 462",1000,0,20);
   __19->SetBinContent(400,1000);
   __19->SetEntries(1000);
   __19->SetStats(0);
   __19->GetXaxis()->SetTitle("B_{r} [ppm]");
   __19->GetXaxis()->SetRange(400,400);
   __19->GetXaxis()->CenterTitle(true);
   __19->GetXaxis()->SetLabelFont(42);
   __19->GetXaxis()->SetTitleSize(0.04);
   __19->GetXaxis()->SetTitleOffset(1.1);
   __19->GetXaxis()->SetTitleFont(42);
   __19->GetYaxis()->SetTitle("Trials / 0.020000 ppm");
   __19->GetYaxis()->CenterTitle(true);
   __19->GetYaxis()->SetNdivisions(4000510);
   __19->GetYaxis()->SetLabelFont(42);
   __19->GetYaxis()->SetTitleSize(0.04);
   __19->GetYaxis()->SetTitleOffset(1.1);
   __19->GetYaxis()->SetTitleFont(42);
   __19->GetZaxis()->SetLabelFont(42);
   __19->GetZaxis()->SetTitleOffset(1);
   __19->GetZaxis()->SetTitleFont(42);
   __19->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("7.99
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
