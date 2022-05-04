void S18_HistAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_ratio__2 = new TH1D("S18_ratio__2","S18",7,750,2500);
   S18_ratio__2->SetBinContent(1,0.5218662);
   S18_ratio__2->SetBinContent(2,0.5124316);
   S18_ratio__2->SetBinContent(3,0.5484958);
   S18_ratio__2->SetBinContent(4,0.5626582);
   S18_ratio__2->SetBinContent(5,0.420022);
   S18_ratio__2->SetBinContent(6,0.6847525);
   S18_ratio__2->SetBinContent(7,0.4245693);
   S18_ratio__2->SetBinError(1,0.04147781);
   S18_ratio__2->SetBinError(2,0.03912996);
   S18_ratio__2->SetBinError(3,0.03883759);
   S18_ratio__2->SetBinError(4,0.03996623);
   S18_ratio__2->SetBinError(5,0.04175001);
   S18_ratio__2->SetBinError(6,0.05600637);
   S18_ratio__2->SetBinError(7,0.05712967);
   S18_ratio__2->SetEntries(7);
   S18_ratio__2->SetStats(0);
   S18_ratio__2->SetLineWidth(3);
   S18_ratio__2->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S18_ratio__2->GetXaxis()->CenterTitle(true);
   S18_ratio__2->GetXaxis()->SetLabelFont(42);
   S18_ratio__2->GetXaxis()->SetTitleSize(0.04);
   S18_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   S18_ratio__2->GetXaxis()->SetTitleFont(42);
   S18_ratio__2->GetYaxis()->SetTitle("Vertical angle acceptance weighting / 250 MeV");
   S18_ratio__2->GetYaxis()->CenterTitle(true);
   S18_ratio__2->GetYaxis()->SetNdivisions(4000510);
   S18_ratio__2->GetYaxis()->SetLabelFont(42);
   S18_ratio__2->GetYaxis()->SetTitleSize(0.04);
   S18_ratio__2->GetYaxis()->SetTitleOffset(1.1);
   S18_ratio__2->GetYaxis()->SetTitleFont(42);
   S18_ratio__2->GetZaxis()->SetLabelFont(42);
   S18_ratio__2->GetZaxis()->SetTitleOffset(1);
   S18_ratio__2->GetZaxis()->SetTitleFont(42);
   S18_ratio__2->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
