void BrErr_858()
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
   
   TH1D *__38 = new TH1D("__38","Number of sub-runs: 858",2400,0.4,1.6);
   __38->SetBinContent(2401,1000);
   __38->SetEntries(1000);
   __38->SetStats(0);
   __38->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __38->GetXaxis()->SetRange(1,2400);
   __38->GetXaxis()->CenterTitle(true);
   __38->GetXaxis()->SetLabelFont(42);
   __38->GetXaxis()->SetTitleSize(0.04);
   __38->GetXaxis()->SetTitleOffset(1.1);
   __38->GetXaxis()->SetTitleFont(42);
   __38->GetYaxis()->SetTitle("Trials / 0.000500 ppm");
   __38->GetYaxis()->CenterTitle(true);
   __38->GetYaxis()->SetNdivisions(4000510);
   __38->GetYaxis()->SetLabelFont(42);
   __38->GetYaxis()->SetTitleSize(0.04);
   __38->GetYaxis()->SetTitleOffset(1.1);
   __38->GetYaxis()->SetTitleFont(42);
   __38->GetZaxis()->SetLabelFont(42);
   __38->GetZaxis()->SetTitleOffset(1);
   __38->GetZaxis()->SetTitleFont(42);
   __38->Draw("HIST");
   
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
