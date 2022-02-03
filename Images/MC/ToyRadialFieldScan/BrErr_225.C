void BrErr_225()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__26 = new TH1D("__26","Number of sub-runs: 225",240,0.4,1.6);
   __26->SetBinContent(0,1000);
   __26->SetEntries(1000);
   __26->SetStats(0);
   __26->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __26->GetXaxis()->SetRange(1,240);
   __26->GetXaxis()->CenterTitle(true);
   __26->GetXaxis()->SetLabelFont(42);
   __26->GetXaxis()->SetTitleSize(0.04);
   __26->GetXaxis()->SetTitleOffset(1.1);
   __26->GetXaxis()->SetTitleFont(42);
   __26->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __26->GetYaxis()->CenterTitle(true);
   __26->GetYaxis()->SetNdivisions(4000510);
   __26->GetYaxis()->SetLabelFont(42);
   __26->GetYaxis()->SetTitleSize(0.04);
   __26->GetYaxis()->SetTitleOffset(1.1);
   __26->GetYaxis()->SetTitleFont(42);
   __26->GetZaxis()->SetLabelFont(42);
   __26->GetZaxis()->SetTitleOffset(1);
   __26->GetZaxis()->SetTitleFont(42);
   __26->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0
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
