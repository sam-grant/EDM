void BrErr_40()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:09:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 40",2000,0,1);
   __11->SetBinContent(2001,1000);
   __11->SetEntries(1000);
   __11->SetStats(0);
   __11->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __11->GetXaxis()->SetRange(1,2000);
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   
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
