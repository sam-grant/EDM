void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:20 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",240,0.4,1.6);
   __5->SetBinContent(24,1);
   __5->SetBinContent(26,4);
   __5->SetBinContent(27,13);
   __5->SetBinContent(28,45);
   __5->SetBinContent(29,88);
   __5->SetBinContent(30,130);
   __5->SetBinContent(31,166);
   __5->SetBinContent(32,181);
   __5->SetBinContent(33,151);
   __5->SetBinContent(34,102);
   __5->SetBinContent(35,56);
   __5->SetBinContent(36,35);
   __5->SetBinContent(37,22);
   __5->SetBinContent(38,5);
   __5->SetBinContent(39,1);
   __5->SetEntries(1000);
   __5->SetStats(0);
   __5->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __5->GetXaxis()->SetRange(0,70);
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.557
#pm0.0004
");
   pt_LaTex = pt->AddText("0.0113
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
