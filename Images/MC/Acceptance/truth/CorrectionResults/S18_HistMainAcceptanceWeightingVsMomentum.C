void S18_HistMainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 16:40:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_ratio_main__1003 = new TH1D("S18_ratio_main__1003","S18",6,1000,2500);
   S18_ratio_main__1003->SetBinContent(1,0.3303288);
   S18_ratio_main__1003->SetBinContent(2,0.4721819);
   S18_ratio_main__1003->SetBinContent(3,0.5170728);
   S18_ratio_main__1003->SetBinContent(4,0.5551437);
   S18_ratio_main__1003->SetBinContent(5,0.4625231);
   S18_ratio_main__1003->SetBinContent(6,0.6875131);
   S18_ratio_main__1003->SetBinError(1,0.06769643);
   S18_ratio_main__1003->SetBinError(2,0.06954681);
   S18_ratio_main__1003->SetBinError(3,0.07387668);
   S18_ratio_main__1003->SetBinError(4,0.0820362);
   S18_ratio_main__1003->SetBinError(5,0.1175602);
   S18_ratio_main__1003->SetBinError(6,0.1348145);
   S18_ratio_main__1003->SetEntries(6);
   S18_ratio_main__1003->SetStats(0);
   S18_ratio_main__1003->SetLineWidth(3);
   S18_ratio_main__1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S18_ratio_main__1003->GetXaxis()->CenterTitle(true);
   S18_ratio_main__1003->GetXaxis()->SetLabelFont(42);
   S18_ratio_main__1003->GetXaxis()->SetTitleSize(0.04);
   S18_ratio_main__1003->GetXaxis()->SetTitleOffset(1.1);
   S18_ratio_main__1003->GetXaxis()->SetTitleFont(42);
   S18_ratio_main__1003->GetYaxis()->SetTitle("Vertical angle acceptance fraction / 250 MeV");
   S18_ratio_main__1003->GetYaxis()->CenterTitle(true);
   S18_ratio_main__1003->GetYaxis()->SetNdivisions(4000510);
   S18_ratio_main__1003->GetYaxis()->SetLabelFont(42);
   S18_ratio_main__1003->GetYaxis()->SetTitleSize(0.04);
   S18_ratio_main__1003->GetYaxis()->SetTitleOffset(1.1);
   S18_ratio_main__1003->GetYaxis()->SetTitleFont(42);
   S18_ratio_main__1003->GetZaxis()->SetLabelFont(42);
   S18_ratio_main__1003->GetZaxis()->SetTitleOffset(1);
   S18_ratio_main__1003->GetZaxis()->SetTitleFont(42);
   S18_ratio_main__1003->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
