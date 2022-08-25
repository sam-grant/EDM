void BrErr_300()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__35 = new TH1D("__35","Number of sub-runs: 300",240,0.4,1.6);
   __35->SetBinContent(8,3);
   __35->SetBinContent(9,14);
   __35->SetBinContent(10,36);
   __35->SetBinContent(11,129);
   __35->SetBinContent(12,260);
   __35->SetBinContent(13,274);
   __35->SetBinContent(14,163);
   __35->SetBinContent(15,85);
   __35->SetBinContent(16,32);
   __35->SetBinContent(17,4);
   __35->SetEntries(1000);
   __35->SetStats(0);
   __35->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __35->GetXaxis()->SetRange(0,38);
   __35->GetXaxis()->CenterTitle(true);
   __35->GetXaxis()->SetLabelFont(42);
   __35->GetXaxis()->SetTitleSize(0.04);
   __35->GetXaxis()->SetTitleOffset(1.1);
   __35->GetXaxis()->SetTitleFont(42);
   __35->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
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
   pt_LaTex = pt->AddText("0.461
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0074
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
