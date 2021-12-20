void BrErr_300()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__35 = new TH1D("__35","Number of sub-runs: 300",2000,0,1);
   __35->SetBinContent(364,1);
   __35->SetBinContent(365,4);
   __35->SetBinContent(366,18);
   __35->SetBinContent(367,42);
   __35->SetBinContent(368,66);
   __35->SetBinContent(369,146);
   __35->SetBinContent(370,193);
   __35->SetBinContent(371,163);
   __35->SetBinContent(372,150);
   __35->SetBinContent(373,113);
   __35->SetBinContent(374,67);
   __35->SetBinContent(375,24);
   __35->SetBinContent(376,8);
   __35->SetBinContent(377,5);
   __35->SetEntries(1000);
   __35->SetStats(0);
   __35->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __35->GetXaxis()->SetRange(345,396);
   __35->GetXaxis()->CenterTitle(true);
   __35->GetXaxis()->SetLabelFont(42);
   __35->GetXaxis()->SetTitleSize(0.04);
   __35->GetXaxis()->SetTitleOffset(1.1);
   __35->GetXaxis()->SetTitleFont(42);
   __35->GetYaxis()->SetTitle("Trials");
   __35->GetYaxis()->CenterTitle(true);
   __35->GetYaxis()->SetNdivisions(4000510);
   __35->GetYaxis()->SetLabelFont(42);
   __35->GetYaxis()->SetTitleSize(0.04);
   __35->GetYaxis()->SetTitleOffset(1.1);
   __35->GetYaxis()->SetTitleFont(42);
   __35->GetZaxis()->SetLabelFont(42);
   __35->GetZaxis()->SetTitleOffset(1);
   __35->GetZaxis()->SetTitleFont(42);
   __35->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2
#pm3e-05
");
   pt_LaTex = pt->AddText("0.00107
#pm2e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
