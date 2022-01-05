void Br_726()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__31 = new TH1D("__31","Number of sub-runs: 726",1000,0,20);
   __31->SetBinContent(400,1000);
   __31->SetEntries(1000);
   __31->SetStats(0);
   __31->GetXaxis()->SetTitle("B_{r} [ppm]");
   __31->GetXaxis()->SetRange(400,400);
   __31->GetXaxis()->CenterTitle(true);
   __31->GetXaxis()->SetLabelFont(42);
   __31->GetXaxis()->SetTitleSize(0.04);
   __31->GetXaxis()->SetTitleOffset(1.1);
   __31->GetXaxis()->SetTitleFont(42);
   __31->GetYaxis()->SetTitle("Trials / 0.020000 ppm");
   __31->GetYaxis()->CenterTitle(true);
   __31->GetYaxis()->SetNdivisions(4000510);
   __31->GetYaxis()->SetLabelFont(42);
   __31->GetYaxis()->SetTitleSize(0.04);
   __31->GetYaxis()->SetTitleOffset(1.1);
   __31->GetYaxis()->SetTitleFont(42);
   __31->GetZaxis()->SetLabelFont(42);
   __31->GetZaxis()->SetTitleOffset(1);
   __31->GetZaxis()->SetTitleFont(42);
   __31->Draw("HIST");
   
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
