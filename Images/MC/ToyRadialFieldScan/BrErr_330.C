void BrErr_330()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:36:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__14 = new TH1D("__14","Number of sub-runs: 330",240,0.4,1.6);
   __14->SetBinContent(4,1);
   __14->SetBinContent(5,12);
   __14->SetBinContent(6,61);
   __14->SetBinContent(7,191);
   __14->SetBinContent(8,255);
   __14->SetBinContent(9,267);
   __14->SetBinContent(10,138);
   __14->SetBinContent(11,61);
   __14->SetBinContent(12,12);
   __14->SetBinContent(13,2);
   __14->SetEntries(1000);
   __14->SetStats(0);
   __14->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __14->GetXaxis()->SetRange(0,32);
   __14->GetXaxis()->CenterTitle(true);
   __14->GetXaxis()->SetLabelFont(42);
   __14->GetXaxis()->SetTitleSize(0.04);
   __14->GetXaxis()->SetTitleOffset(1.1);
   __14->GetXaxis()->SetTitleFont(42);
   __14->GetYaxis()->SetTitle("Trials / 0.005000 ppm");
   __14->GetYaxis()->CenterTitle(true);
   __14->GetYaxis()->SetNdivisions(4000510);
   __14->GetYaxis()->SetLabelFont(42);
   __14->GetYaxis()->SetTitleSize(0.04);
   __14->GetYaxis()->SetTitleOffset(1.1);
   __14->GetYaxis()->SetTitleFont(42);
   __14->GetZaxis()->SetLabelFont(42);
   __14->GetZaxis()->SetTitleOffset(1);
   __14->GetZaxis()->SetTitleFont(42);
   __14->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.44
#pm0.0002
");
   pt_LaTex = pt->AddText("0.00704
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
