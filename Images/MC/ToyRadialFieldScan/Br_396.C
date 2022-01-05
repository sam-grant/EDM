void Br_396()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:39 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__16 = new TH1D("__16","Number of sub-runs: 396",1000,0,20);
   __16->SetBinContent(400,1000);
   __16->SetEntries(1000);
   __16->SetStats(0);
   __16->GetXaxis()->SetTitle("B_{r} [ppm]");
   __16->GetXaxis()->SetRange(400,400);
   __16->GetXaxis()->CenterTitle(true);
   __16->GetXaxis()->SetLabelFont(42);
   __16->GetXaxis()->SetTitleSize(0.04);
   __16->GetXaxis()->SetTitleOffset(1.1);
   __16->GetXaxis()->SetTitleFont(42);
   __16->GetYaxis()->SetTitle("Trials / 0.020000 ppm");
   __16->GetYaxis()->CenterTitle(true);
   __16->GetYaxis()->SetNdivisions(4000510);
   __16->GetYaxis()->SetLabelFont(42);
   __16->GetYaxis()->SetTitleSize(0.04);
   __16->GetYaxis()->SetTitleOffset(1.1);
   __16->GetYaxis()->SetTitleFont(42);
   __16->GetZaxis()->SetLabelFont(42);
   __16->GetZaxis()->SetTitleOffset(1);
   __16->GetZaxis()->SetTitleFont(42);
   __16->Draw("HIST");
   
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
