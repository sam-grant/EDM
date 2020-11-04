void BrErr_300()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:08 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__35 = new TH1D("__35","Number of sub-runs: 300",1000,0,4);
   __35->SetBinContent(89,4);
   __35->SetBinContent(90,49);
   __35->SetBinContent(91,233);
   __35->SetBinContent(92,367);
   __35->SetBinContent(93,271);
   __35->SetBinContent(94,68);
   __35->SetBinContent(95,8);
   __35->SetEntries(1000);
   __35->SetLineWidth(3);
   __35->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
