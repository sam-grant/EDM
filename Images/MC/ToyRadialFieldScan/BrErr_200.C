void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",240,0.4,1.6);
   __23->SetBinContent(0,1000);
   __23->SetEntries(1000);
   __23->SetStats(0);
   __23->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __23->GetXaxis()->SetRange(1,240);
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __23->GetYaxis()->CenterTitle(true);
   __23->GetYaxis()->SetNdivisions(4000510);
   __23->GetYaxis()->SetLabelFont(42);
   __23->GetYaxis()->SetTitleSize(0.04);
   __23->GetYaxis()->SetTitleOffset(1.1);
   __23->GetYaxis()->SetTitleFont(42);
   __23->GetZaxis()->SetLabelFont(42);
   __23->GetZaxis()->SetTitleOffset(1);
   __23->GetZaxis()->SetTitleFont(42);
   __23->Draw("HIST");
   
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
