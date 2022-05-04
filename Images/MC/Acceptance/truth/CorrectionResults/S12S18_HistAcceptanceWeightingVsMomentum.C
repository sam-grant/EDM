void S12S18_HistAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_ratio__3 = new TH1D("S12S18_ratio__3","S12S18",7,750,2500);
   S12S18_ratio__3->SetBinContent(1,0.528873);
   S12S18_ratio__3->SetBinContent(2,0.5106426);
   S12S18_ratio__3->SetBinContent(3,0.5456977);
   S12S18_ratio__3->SetBinContent(4,0.5706427);
   S12S18_ratio__3->SetBinContent(5,0.4231863);
   S12S18_ratio__3->SetBinContent(6,0.6972563);
   S12S18_ratio__3->SetBinContent(7,0.4321457);
   S12S18_ratio__3->SetBinError(1,0.04150351);
   S12S18_ratio__3->SetBinError(2,0.03907641);
   S12S18_ratio__3->SetBinError(3,0.03875816);
   S12S18_ratio__3->SetBinError(4,0.04001415);
   S12S18_ratio__3->SetBinError(5,0.04168765);
   S12S18_ratio__3->SetBinError(6,0.05597023);
   S12S18_ratio__3->SetBinError(7,0.05700849);
   S12S18_ratio__3->SetEntries(7);
   S12S18_ratio__3->SetStats(0);
   S12S18_ratio__3->SetLineWidth(3);
   S12S18_ratio__3->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_ratio__3->GetXaxis()->CenterTitle(true);
   S12S18_ratio__3->GetXaxis()->SetLabelFont(42);
   S12S18_ratio__3->GetXaxis()->SetTitleSize(0.04);
   S12S18_ratio__3->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ratio__3->GetXaxis()->SetTitleFont(42);
   S12S18_ratio__3->GetYaxis()->SetTitle("Vertical angle acceptance weighting / 250 MeV");
   S12S18_ratio__3->GetYaxis()->CenterTitle(true);
   S12S18_ratio__3->GetYaxis()->SetNdivisions(4000510);
   S12S18_ratio__3->GetYaxis()->SetLabelFont(42);
   S12S18_ratio__3->GetYaxis()->SetTitleSize(0.04);
   S12S18_ratio__3->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ratio__3->GetYaxis()->SetTitleFont(42);
   S12S18_ratio__3->GetZaxis()->SetLabelFont(42);
   S12S18_ratio__3->GetZaxis()->SetTitleOffset(1);
   S12S18_ratio__3->GetZaxis()->SetTitleFont(42);
   S12S18_ratio__3->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
