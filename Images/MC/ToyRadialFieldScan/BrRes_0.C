void BrRes_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:11:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__33 = new TH1D("__33","Number of sub-runs: 0",500,-10,10);
   __33->SetBinContent(250,1000);
   __33->SetEntries(1000);
   __33->SetStats(0);
   __33->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __33->GetXaxis()->SetRange(250,250);
   __33->GetXaxis()->CenterTitle(true);
   __33->GetXaxis()->SetLabelFont(42);
   __33->GetXaxis()->SetTitleSize(0.04);
   __33->GetXaxis()->SetTitleOffset(1.1);
   __33->GetXaxis()->SetTitleFont(42);
   __33->GetYaxis()->SetTitle("Trials");
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
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("-0.02
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
