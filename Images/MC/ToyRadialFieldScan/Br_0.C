void Br_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:11:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__34 = new TH1D("__34","Number of sub-runs: 0",1000,0,20);
   __34->SetBinContent(400,1000);
   __34->SetEntries(1000);
   __34->SetStats(0);
   __34->GetXaxis()->SetTitle("B_{r} [ppm]");
   __34->GetXaxis()->SetRange(400,400);
   __34->GetXaxis()->CenterTitle(true);
   __34->GetXaxis()->SetLabelFont(42);
   __34->GetXaxis()->SetTitleSize(0.04);
   __34->GetXaxis()->SetTitleOffset(1.1);
   __34->GetXaxis()->SetTitleFont(42);
   __34->GetYaxis()->SetTitle("Trials");
   __34->GetYaxis()->CenterTitle(true);
   __34->GetYaxis()->SetNdivisions(4000510);
   __34->GetYaxis()->SetLabelFont(42);
   __34->GetYaxis()->SetTitleSize(0.04);
   __34->GetYaxis()->SetTitleOffset(1.1);
   __34->GetYaxis()->SetTitleFont(42);
   __34->GetZaxis()->SetLabelFont(42);
   __34->GetZaxis()->SetTitleOffset(1);
   __34->GetZaxis()->SetTitleFont(42);
   __34->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("8
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
